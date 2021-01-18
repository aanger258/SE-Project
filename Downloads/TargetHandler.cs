using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using Vuforia;
using ZXing;

public class TargetHandler : MonoBehaviour
{
    void Start()
    {
        //StartCoroutine(CreateImageTargetFromDownloadedTexture());
        //VuforiaARController.Instance.RegisterVuforiaStartedCallback(CreateImageTargetFromDownloadedTexture);
    }

    //private bool LoadDataSet(string dataSetPath, DataSet.StorageType storageType)
    //{
    //    if (!DataSet.Exists(dataSetPath, storageType))
    //    {
    //        Debug.LogError("Data set " + dataSetPath + " does not exist.");
    //        return false;
    //    }

    //    ObjectTracker objectTracker = TrackerManager.Instance.GetTracker();
    //    DataSet dataSet = objectTracker.CreateDataSet();

    //    if (!dataSet.Load(dataSetPath, storageType))
    //    {
    //        Debug.LogError("Failed to load data set " + dataSetPath + ".");
    //        return false;
    //    }

    //    objectTracker.ActivateDataSet(dataSet);
    //    return true;
    //}

    //IEnumerator CreateImageTargetFromDownloadedTexture()
    //{
    //    var image_url = "https://previews.123rf.com/images/djati11/djati111808/djati11180800917/105733742-wolf-logo-template-vector-icon-illustration-design.jpg";
    //    using (UnityWebRequest uwr = UnityWebRequestTexture.GetTexture(image_url))
    //    {
    //        yield return uwr.SendWebRequest();

    //        if (uwr.isNetworkError || uwr.isHttpError)
    //        {
    //            Debug.Log(uwr.error);
    //        }
    //        else
    //        {
    //            var objectTracker = TrackerManager.Instance.GetTracker<ObjectTracker>();
    //            var texture = DownloadHandlerTexture.GetContent(uwr);

    //            var runtimeImageSource = objectTracker.RuntimeImageSource;
    //            runtimeImageSource.SetImage(texture, 0.15f, "myTargetName");

    //            // create a new dataset and use the source to create a new trackable
    //            var dataset = objectTracker.CreateDataSet();
    //            var trackableBehaviour = dataset.CreateTrackable(runtimeImageSource, "myTargetName");

    //            // add the DefaultTrackableEventHandler to the newly created game object
    //            trackableBehaviour.gameObject.AddComponent<DefaultTrackableEventHandler>();

    //            // activate the dataset
    //            objectTracker.ActivateDataSet(dataset);

    //            GameObject longText = new GameObject();
    //            var textMesh = longText.AddComponent<TextMesh>();
    //            var meshRenderer = longText.AddComponent<MeshRenderer>();
    //            textMesh.text = "Hello World";

    //            longText.transform.SetParent(trackableBehaviour.gameObject.transform);
    //        }
    //    }
    //}
}