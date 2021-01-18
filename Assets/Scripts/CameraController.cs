using System;
using System.Collections;
using UnityEngine;
using static CloudRecoHandler;

using ZXing;
using ZXing.QrCode;
using ZXing.Common;

using Vuforia;
using Newtonsoft.Json;
using static Inference;

public class CameraController : MonoBehaviour
{
    public static bool IS_DECODED;
    public GameObject text3D;
    private TMPro.TMP_Text textMeshPro;

    private bool cameraInitialized;
    private BarcodeReader qrCodeReader;
    private PIXEL_FORMAT mPixelFormat = PIXEL_FORMAT.UNKNOWN_FORMAT;

    void Start()
    {
        #if UNITY_EDITOR

        // Need Grayscale for Editor
        mPixelFormat = PIXEL_FORMAT.GRAYSCALE; 

        #else
        
        // Use RGB888 for mobile
        mPixelFormat = PIXEL_FORMAT.RGB888; 

        #endif

        qrCodeReader = new BarcodeReader();
        StartCoroutine(InitializeCamera());
        IS_DECODED = false;

        textMeshPro = text3D.GetComponent<TMPro.TMP_Text>(); ;
    }

    private IEnumerator InitializeCamera()
    {
        // Waiting a little seem to avoid the Vuforia's crashes.
        yield return new WaitForSeconds(1.25f);

        var isFrameFormatSet = CameraDevice.Instance.SetFrameFormat(mPixelFormat, true);
        Debug.Log("FormatSet: " + isFrameFormatSet);

        // Force autofocus.
        var isAutoFocus = CameraDevice.Instance.SetFocusMode(CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
        if (!isAutoFocus)
        {
            CameraDevice.Instance.SetFocusMode(CameraDevice.FocusMode.FOCUS_MODE_NORMAL);
        }
        Debug.Log("AutoFocus: " + isAutoFocus);
        cameraInitialized = true;
    }

    private void Update()
    {
        if (cameraInitialized) // && IS_DETECTED && (!IS_DECODED))
        {
            try
            {
                var cameraFeed = CameraDevice.Instance.GetCameraImage(mPixelFormat);
                if (cameraFeed == null)
                {
                    return;
                }
                var data = qrCodeReader.Decode(cameraFeed.Pixels, cameraFeed.BufferWidth, cameraFeed.BufferHeight, RGBLuminanceSource.BitmapFormat.RGB24);
                if (data != null)
                {
                    // QRCode detected
                    IS_DECODED = true;
                    String json_py = data.Text;
                    String json = json_py.Replace("True", "true");
                    Debug.Log("<color=green>QR Detected: </color> " + json);

                    Inference inference = JsonConvert.DeserializeObject<Inference>(json);
                    String inferenceText = inference.ToString();

                    //if (String.Compare(textMesh.text, inferenceText) != 0)
                    //{
                    textMeshPro.text = inferenceText + "test";
                    //}
                    //text3D.SetActive(true);
                }
                //else
                //{
                //    Debug.Log("<color=red>No QR code detected !</color>");
                //}
            }
            catch (Exception e)
            {
                //Debug.LogError(textMesh.text);
                Debug.LogError(e.Message);
            }
        }
    }
}
