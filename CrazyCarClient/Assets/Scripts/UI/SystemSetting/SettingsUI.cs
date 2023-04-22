using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using LitJson;
using System;
using static UnityEngine.UI.Dropdown;
using QFramework;
using Cysharp.Threading.Tasks;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.AddressableAssets.ResourceLocators;

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

    private async void Start() {
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
        flagsUrlList.Clear();
        var result = await Addressables.LoadAssetAsync<TextAsset>(Util.baseLanguagePath + "url.json");
        JsonData fileNames = JsonMapper.ToObject(result.text);
        string[] names = ((string)fileNames["FileName"]).Split(',');
        string flagIconUrl;
        for (int i = 0; i < names.Length; i++) {
            var t = await Addressables.LoadAssetAsync<TextAsset>(Util.baseLanguagePath + names[i]);
            JsonData d = JsonMapper.ToObject(t.text);
            languageOptionsList.Add((string)d["languageName"]);
            lanMap[(string)d["languageName"]] = (string)d["id"];
            flagIconUrl = Util.baseFlagPath + (string)d["flagName"] + ".png";
            flagsUrlList.Add(flagIconUrl);
        }
        languageDropdown.ClearOptions();
        languageOptions.Clear();
        for (int i = 0; i < languageOptionsList.Count; i++) {
            OptionData optionData = new OptionData();
            optionData.text = languageOptionsList[i];
            optionData.image = await Addressables.LoadAssetAsync<Sprite>(flagsUrlList[i]);

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
        this.SendCommand<SavaSettingsCommand>();
        success?.Invoke();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}


