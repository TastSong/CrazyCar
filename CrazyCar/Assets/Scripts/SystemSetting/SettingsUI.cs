using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using UnityEditor;
using LitJson;
using System;
using System.Runtime.Serialization;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using static UnityEngine.UI.Dropdown;

public class SettingsUI : MonoBehaviour {
    public Button closeBtn;
    public Button exitBtn;
    public Dropdown languageDropdown;
    public Slider musicSlider;
    public Slider soundSlider;

    private bool isInit = false;
    private List<string> languageOptionsList = new List<string>();
    private List<string> flagsUrlList = new List<string>();
    private List<OptionData> languageOptions = new List<OptionData>();
    private Dictionary<string, string> lanMap = new Dictionary<string, string>();

    private void OnEnable() {
        UpdateUI();
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            SaveSettings();
            gameObject.SetActiveFast(false);
        });

        exitBtn.onClick.AddListener(() => {
            Application.Quit();
        });

        languageOptionsList.Clear();
        flagsUrlList.Clear();
        TextAsset[] tas = Resources.LoadAll<TextAsset>(Util.baseLanguagePath);
        string flagIconUrl;
        foreach (var t in tas) {
            JsonData d = JsonMapper.ToObject(t.text);
            languageOptionsList.Add((string)d["languageName"]);
            lanMap[(string)d["languageName"]] = (string)d["id"];
            flagIconUrl = Util.baseFlagPath + (string)d["flagName"];
            flagsUrlList.Add(flagIconUrl);
        }
        languageDropdown.ClearOptions();
        languageOptions.Clear();
        for (int i = 0; i < languageOptionsList.Count; i++) {
            OptionData optionData = new OptionData();
            optionData.text = languageOptionsList[i];
            optionData.image = Resources.Load(flagsUrlList[i], typeof(Sprite)) as Sprite;

            languageOptions.Add(optionData);
        }
        languageDropdown.AddOptions(languageOptions);
        isInit = true;
        UpdateUI();
    }

    private void UpdateUI() {
        if (!isInit) {
            return;
        }
        SystemSettingsInfo info = GameController.manager.settingsInfo;
        for (int i = 0; i < languageOptionsList.Count; i++) {
            if (info.language.Equals(lanMap[languageOptionsList[i]])) {
                languageDropdown.value = i;
                break;
            }
        }
        musicSlider.value = Convert.ToInt32(info.isOnMusic);
        soundSlider.value = Convert.ToInt32(info.isOnSound);
    }

    private SystemSettingsInfo GetCurrentInfo() {
        SystemSettingsInfo info = new SystemSettingsInfo();
        info.language = lanMap[languageDropdown.captionText.text];
        info.isOnMusic = Convert.ToBoolean(musicSlider.value);
        info.isOnSound = Convert.ToBoolean(soundSlider.value);
        return info;
    }

    /*********     判断信息改变    ***********/
    public void SaveSettings(Util.NoneParamFunction success = null) {
        SystemSettingsInfo info = GetCurrentInfo();       
        SystemSettingsInfo.SaveSystemInfo(info);
        GameController.manager.settingsInfo = info.Clone();
        // 切换语言
        I18N.manager.ChangeLang(info.language);
        //var backgroundAudioSource = GameObject.Find("BackgroundMusic").GetComponent<AudioSource>();
        //backgroundAudioSource.volume = Convert.ToInt32(info.isOnMusic);
        AudioListener.volume = Convert.ToInt32(info.isOnSound);
        success?.Invoke();
    }
}

[Serializable]
public class SystemSettingsInfo : ISerializable {
    public string language;
    public bool isOnMusic;
    public bool isOnSound;
    private static string fileName = "settings.stf";
    public SystemSettingsInfo() {
    }

    private SystemSettingsInfo(SerializationInfo info, StreamingContext ctxt) {       
        language = info.GetString("language");
        isOnMusic = info.GetBoolean("isOnMusic");
        isOnSound = info.GetBoolean("isOnSound");
    }

    public void GetObjectData(SerializationInfo info, StreamingContext ctxt) {
        info.AddValue("language", language);
        info.AddValue("isOnMusic", isOnMusic);
        info.AddValue("isOnSound", isOnSound);
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
        return info;
    }

    public bool EqualTo(SystemSettingsInfo info) {
        return info.language == language &&
            info.isOnMusic == isOnMusic &&
            info.isOnSound == isOnSound;
    }
}
