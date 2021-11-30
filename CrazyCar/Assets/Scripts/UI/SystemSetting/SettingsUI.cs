using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using LitJson;
using System;
using static UnityEngine.UI.Dropdown;
using TFramework;
using MoreMountains.NiceVibrations;

public class SettingsUI : MonoBehaviour, IController {
    public Button closeBtn;
    public Button exitBtn;
    public Dropdown languageDropdown;
    public Slider musicSlider;
    public Slider soundSlider;
    public Slider vibrationSlider;

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

        var info = this.GetModel<ISettingsModel>();
        for (int i = 0; i < languageOptionsList.Count; i++) {
            if (info.Language.Value.Equals(lanMap[languageOptionsList[i]])) {
                languageDropdown.value = i;
                break;
            }
        }
        musicSlider.value = Convert.ToInt32(info.IsOnMusic);
        soundSlider.value = Convert.ToInt32(info.IsOnSound);
        vibrationSlider.value = Convert.ToInt32(info.IsOnVibration);
    }

    private SystemSettingsInfo GetCurrentInfo() {
        SystemSettingsInfo info = new SystemSettingsInfo();
        info.language = lanMap[languageDropdown.captionText.text];
        info.isOnMusic = Convert.ToBoolean(musicSlider.value);
        info.isOnSound = Convert.ToBoolean(soundSlider.value);
        info.isOnVibration = Convert.ToBoolean(vibrationSlider.value);
        return info;
    }

    /*********     判断信息改变    ***********/
    public void SaveSettings(Action success = null) {
        this.GetModel<ISettingsModel>().SaveSystemInfo(GetCurrentInfo());
        // 切换语言
        this.GetSystem<II18NSystem>().ChangeLang(this.GetModel<ISettingsModel>().Language);
        //var backgroundAudioSource = GameObject.Find("BackgroundMusic").GetComponent<AudioSource>();
        //backgroundAudioSource.volume = Convert.ToInt32(info.isOnMusic);
        AudioListener.volume = Convert.ToInt32(this.GetModel<ISettingsModel>().IsOnSound);
        MMVibrationManager.SetHapticsActive(this.GetModel<ISettingsModel>().IsOnVibration);
        success?.Invoke();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}


