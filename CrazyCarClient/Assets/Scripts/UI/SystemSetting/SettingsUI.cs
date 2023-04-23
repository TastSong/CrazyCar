using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using LitJson;
using System;
using static UnityEngine.UI.Dropdown;
using QFramework;

public class SettingsUI : MonoBehaviour, IController {
    public Button closeBtn;
    public Button exitBtn;
    public Dropdown languageDropdown;
    public Slider musicSlider;
    public Slider soundSlider;
    public Slider vibrationSlider;

    private bool isInit = false;
    private List<string> languageOptionsList = new List<string>();
    private List<OptionData> languageOptions = new List<OptionData>();

    private void OnEnable() {
        UpdateUI();
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Close);
            SaveSettings();
            gameObject.SetActiveFast(false);
        });

        exitBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            this.SendCommand(new LoadSceneCommand(SceneID.Login));
        });

        languageOptionsList.Clear();
        var lanMap = this.GetSystem<II18NSystem>().LangMap;
        foreach (var kv in lanMap) {
            languageOptionsList.Add(kv.Key);
        }
        languageDropdown.ClearOptions();
        languageOptions.Clear();
        for (int i = 0; i < languageOptionsList.Count; i++) {
            OptionData optionData = new OptionData();
            optionData.text = languageOptionsList[i];
            optionData.image = this.GetSystem<II18NSystem>().FlagsDic[languageOptionsList[i]];

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
            if (info.Language.Value.Equals(this.GetSystem<II18NSystem>().LangMap[languageOptionsList[i]])) {
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
        info.language = this.GetSystem<II18NSystem>().LangMap[languageDropdown.captionText.text];
        info.isOnMusic = Convert.ToBoolean(musicSlider.value);
        info.isOnSound = Convert.ToBoolean(soundSlider.value);
        info.isOnVibration = Convert.ToBoolean(vibrationSlider.value);
        return info;
    }

    /*********     判断信息改变    ***********/
    public void SaveSettings(Action success = null) {
        this.GetModel<ISettingsModel>().SaveSystemInfo(GetCurrentInfo());
        // 切换语言
        this.SendCommand<SavaSettingsCommand>();
        success?.Invoke();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}


