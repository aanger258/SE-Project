using System;
using UnityEngine;
using Vuforia;
using UnityEngine.UI;

using static CameraController;

/// <summary>
/// This MonoBehaviour implements the Cloud Reco Event handling for this sample.
/// It registers itself at the CloudRecoBehaviour and is notified of new search results.
/// </summary>
public class CloudRecoHandler : MonoBehaviour, IObjectRecoEventHandler 
{
    #region PRIVATE_MEMBER_VARIABLES


    private CloudRecoBehaviour mCloudRecoBehaviour;
	private ObjectTracker mImageTracker;
	private bool mIsScanning = false;
    private string mTargetMetadata = "";
    private string lastDetectedId = "";

    #endregion // PRIVATE_MEMBER_VARIABLES

    #region EXPOSED_PUBLIC_VARIABLES

    /// <summary>
    /// can be set in the Unity inspector to reference a ImageTargetBehaviour that is used for augmentations of new cloud reco results.
    /// </summary>
    public ImageTargetBehaviour ImageTargetTemplate;
    public static bool IS_DETECTED;

	#endregion

	#region UNTIY_MONOBEHAVIOUR_METHODS

	/// <summary>
	/// register for events at the CloudRecoBehaviour
	/// </summary>
	void Start()
	{
        // register this event handler at the cloud reco behaviour
        mCloudRecoBehaviour = GetComponent<CloudRecoBehaviour>();
        IS_DETECTED = false;
        if (mCloudRecoBehaviour)
		{
            mCloudRecoBehaviour.RegisterEventHandler(this);
		}
        var text3D = GameObject.Find("text3D");
        var textMeshPro = text3D.GetComponent<TMPro.TMP_Text>();
        textMeshPro.text = "\n\n\n\n\n\nPlease Focus on \nthe QR code";
    }

    #endregion // UNTIY_MONOBEHAVIOUR_METHODS

    #region ICloudRecoEventHandler_IMPLEMENTATION

    /// <summary>
    /// called when TargetFinder has been initialized successfully
    /// </summary>
    public void OnInitialized(TargetFinder targetFinder)
	{
		// get a reference to the Image Tracker, remember it
		mImageTracker = (ObjectTracker)TrackerManager.Instance.GetTracker<ObjectTracker>();
        Debug.Log("Cloud Reco initialized");
    }

    /// <summary>
    /// visualize initialization errors
    /// </summary>
    public void OnInitError(TargetFinder.InitState initError)
    {
        Debug.Log("Cloud Reco init error " + initError.ToString());
    }

    /// <summary>
    /// visualize update errors
    /// </summary>
    public void OnUpdateError(TargetFinder.UpdateState updateError)
    {
        Debug.Log("Cloud Reco update error " + updateError.ToString());
    }

    /// <summary>
    /// when we start scanning, unregister Trackable from the ImageTargetTemplate, then delete all trackables
    /// </summary>
    public void OnStateChanged(bool scanning) {
        mIsScanning = scanning;
        if (scanning)
        {
            //clear all known trackables
            ObjectTracker tracker = TrackerManager.Instance.GetTracker<ObjectTracker>();
            var targetFinder = tracker.GetTargetFinder<ImageTargetFinder>();
            targetFinder.ClearTrackables(false);
            //Debug.Log("<color=blue> DECODED </color>" + IS_DECODED);
        }

        Debug.Log("<color=blue>OnStateChanged(): </color>" + scanning);

        // Changing CloudRecoBehaviour.CloudRecoEnabled to false will call:
        // 1. TargetFinder.Stop()
        // 2. All registered ICloudRecoEventHandler.OnStateChanged() with false.

        // Changing CloudRecoBehaviour.CloudRecoEnabled to true will call:
        // 1. TargetFinder.StartRecognition()
        // 2. All registered ICloudRecoEventHandler.OnStateChanged() with true.
    }

    /// <summary>
    /// Here we handle a cloud target recognition event
    /// </summary>
    /// <param name="targetSearchResult"></param>
    public void OnNewSearchResult(TargetFinder.TargetSearchResult targetSearchResult)
    {
        TargetFinder.CloudRecoSearchResult cloudRecoSearchResult =
            (TargetFinder.CloudRecoSearchResult)targetSearchResult;
        // do something with the target metadata
        mTargetMetadata = cloudRecoSearchResult.MetaData;
        if (lastDetectedId != cloudRecoSearchResult.UniqueTargetId)
        {
            lastDetectedId = cloudRecoSearchResult.UniqueTargetId;
            IS_DECODED = false;
        }

        // duplicate the referenced image target
        GameObject newImageTarget = Instantiate(ImageTargetTemplate.gameObject) as GameObject;
        GameObject augmentation = null;

        if (augmentation != null)
        {
            augmentation.transform.parent = newImageTarget.transform;
        }

        // enable the new result with the same ImageTargetBehaviour:
        var mtargetFinder = mImageTracker.GetTargetFinder<ImageTargetFinder>();
        var imageTargetBehaviour = mtargetFinder.EnableTracking(targetSearchResult, newImageTarget);

        var text3D = imageTargetBehaviour.gameObject.transform.Find("text3D").gameObject;
        Debug.Log("<color=red> OnNewSearchResult </color>");
        //var textMesh = text3D.GetComponent<TextMesh>();

        IS_DETECTED = true;

        //if (!mIsScanning)
        //{
        //    //Destroy(text3D);
        //    Debug.Log("<color=red> Intrat in Set Inactive </color>");
        //    text3D.SetActive(false);
        //    mCloudRecoBehaviour.CloudRecoEnabled = true;
        //}
    }

    #endregion // ICloudRecoEventHandler_IMPLEMENTATION
}