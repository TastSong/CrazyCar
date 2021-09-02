using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class ResourceManager {
    public static AssetBundle car;

    public void ParseLocalResource() {
        string localCarPath = Application.streamingAssetsPath + "/car";
        car = AssetBundle.LoadFromFile(localCarPath);
    }

    public GameObject GetCarResource(string id) {
        try {
#if !UNITY_EDITOR
            Debug.Log("+++= " + "Assets/AB/Car/" + id + "/Prefab/" + id + ".prefab");
            GameObject e = ResourceManager.car.LoadAsset<GameObject>("Assets/AB/Car/" + id + "/Prefab/" + id + ".prefab");
            if (e == null) {
                return null;
            }
#else
            GameObject e = UnityEditor.AssetDatabase.LoadAssetAtPath<GameObject>(
                "Assets/AB/Car/KaijuCar/"+ id + "/Prefab/" + id + ".prefab");

#endif
            return e;
        } catch (Exception e) {
            Debug.LogError(e);
            return null;
        }
    }
}
