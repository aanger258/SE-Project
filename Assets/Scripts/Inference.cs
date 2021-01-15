using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Inference
{
    public bool success { get; set; }
    public Dictionary<string, string> confidence { get; set; }
    public String heatmap_path { get; set; }
    //  {'success': true, 'confidence': {'Infiltration': '80.6876', 'Fibrosis': '15.8247', 'Pneumonia': '2.0566', 'Cardiomegaly': '1.3977', 'Normal': '0.0334'}}

    [Newtonsoft.Json.JsonConstructor]
    public Inference(bool _success, Dictionary<string, string>  _confidence, String _heatmap_path)
    {
        success = _success;
        confidence = _confidence;
        heatmap_path = _heatmap_path;
    }
    
    public override string ToString()
    {
        String this_str = "";
        float percent;
        foreach (KeyValuePair<string, string> kvp in confidence)
        {
            percent = float.Parse(kvp.Value);
            this_str += String.Format("{0}: {1}%\n", kvp.Key, percent);
        }
        return this_str;
    }
}
