using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using QFramework;

[Serializable]
public class SystemSettingsInfo : ISerializable {
    public string language;
    public bool isOnMusic;
    public bool isOnSound;
    public bool isOnVibration;
    private static string fileName = "settings.stf";
    public SystemSettingsInfo() {
    }

    private SystemSettingsInfo(SerializationInfo info, StreamingContext ctxt) {
        language = info.GetString("language");
        isOnMusic = info.GetBoolean("isOnMusic");
        isOnSound = info.GetBoolean("isOnSound");
        isOnVibration = info.GetBoolean("isOnVibration");
    }

    public void GetObjectData(SerializationInfo info, StreamingContext ctxt) {
        info.AddValue("language", language);
        info.AddValue("isOnMusic", isOnMusic);
        info.AddValue("isOnSound", isOnSound);
        info.AddValue("isOnVibration", isOnVibration);
    }

    public static void SaveSystemInfo(SystemSettingsInfo ss) {
        Stream steam = File.Open(Path.Combine(Application.persistentDataPath, fileName), FileMode.Create);

        var bf = new BinaryFormatter();
        bf.Serialize(steam, ss);
        steam.Close();
    }

    public static void DelFile() {
        File.Delete(Path.Combine(Application.persistentDataPath, fileName));
    }

    public static SystemSettingsInfo ParseSystemInfo() {
        Stream stream = File.Open(Path.Combine(Application.persistentDataPath, fileName), FileMode.OpenOrCreate);
        BinaryFormatter bf = new BinaryFormatter();
        SystemSettingsInfo mp = null;
        try {
            mp = (SystemSettingsInfo)bf.Deserialize(stream);
        } catch {
            // ignore exception
        }

        stream.Close();
        return mp;
    }

    public SystemSettingsInfo Clone() {
        SystemSettingsInfo info = new SystemSettingsInfo();
        info.language = language;
        info.isOnMusic = isOnMusic;
        info.isOnSound = isOnSound;
        info.isOnVibration = isOnVibration;
        return info;
    }

    public bool EqualTo(SystemSettingsInfo info) {
        return info.language == language &&
            info.isOnMusic == isOnMusic &&
            info.isOnSound == isOnSound && 
            info.isOnVibration == isOnVibration;
    }
}

public interface ISettingsModel : IModel {
    public BindableProperty <string> Language { get; }
    public BindableProperty<bool> IsOnMusic { get; }
    public BindableProperty<bool> IsOnSound { get; }
    public BindableProperty<bool> IsOnVibration { get; }

    public void SaveSystemInfo(SystemSettingsInfo ss);
    public void DelFile();
}

public class SettingsModel : AbstractModel, ISettingsModel {
    public BindableProperty<string> Language { get; } = new BindableProperty<string>();

    public BindableProperty<bool> IsOnMusic { get; } = new BindableProperty<bool>();

    public BindableProperty<bool> IsOnSound { get; } = new BindableProperty<bool>();

    public BindableProperty<bool> IsOnVibration { get; } = new BindableProperty<bool>();

    private void SetContent(SystemSettingsInfo ss) {
        Language.Value = ss.language;
        IsOnMusic.Value = ss.isOnMusic;
        IsOnSound.Value = ss.isOnSound;
        IsOnVibration.Value = ss.isOnVibration;
    }

    public void DelFile() {
        SystemSettingsInfo.DelFile();
    }


    public void SaveSystemInfo(SystemSettingsInfo ss) {
        SetContent(ss);
        SystemSettingsInfo.SaveSystemInfo(ss);
    }

    protected override void OnInit() {
        SystemSettingsInfo settingsInfo = SystemSettingsInfo.ParseSystemInfo();
        if (settingsInfo == null) {
            Debug.Log("Load local setting");
            settingsInfo = new SystemSettingsInfo();
            settingsInfo.language = "en";
            settingsInfo.isOnMusic = true;
            settingsInfo.isOnSound = true;
            settingsInfo.isOnVibration = true;
            SystemSettingsInfo.SaveSystemInfo(settingsInfo);
        }

        SetContent(settingsInfo);
    }
}
