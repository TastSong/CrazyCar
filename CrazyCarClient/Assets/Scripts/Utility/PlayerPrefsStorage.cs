using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public interface IPlayerPrefsStorage : IUtility {
    public void SaveInt(string key, int value);
    public int LoadInt(string key);
    public void SaveString(string key, string value);
    public string LoadString(string key);
}

public class PlayerPrefsStorage : IPlayerPrefsStorage {
    public int LoadInt(string key) {
        return PlayerPrefs.GetInt(key);
    }

    public string LoadString(string key) {
        return PlayerPrefs.GetString(key);
    }

    public void SaveString(string key, string value) {
        PlayerPrefs.SetString(key, value);
    }

    public void SaveInt(string key, int value) {
        PlayerPrefs.SetInt(key, value);
    }
}