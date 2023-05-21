using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using LitJson;
using Utils;
using System;
using Cysharp.Threading.Tasks;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.AddressableAssets.ResourceLocators;

public interface II18NSystem : ISystem {
    public string CurrentLang { get; set; }
    public bool InitFinish { get; set; }
    public Dictionary<string, string> LangMap { get; set; }
    public Dictionary<string, Sprite> FlagsDic { get; set; }

    public UniTask InitTranslation();
    public string GetText(string key);
    public void RegisterText(I18NText t);
    public void UnregisterText(I18NText t);
}

public class I18NSystem : AbstractSystem, II18NSystem {
    public string CurrentLang { get; set; }
    public bool InitFinish { get; set; }
    public Dictionary<string, string> LangMap { get; set; } = new Dictionary<string, string>();
    public Dictionary<string, Sprite> FlagsDic { get; set; } = new Dictionary<string, Sprite>();

    private Dictionary<string, JsonData> trans = new Dictionary<string, JsonData>();
    private List<I18NText> allTexts = new List<I18NText>();
    private JsonData current_dict;
    private string defaultLang = "zh-cn";

    public async UniTask InitTranslation() {
        var result = await Addressables.LoadAssetAsync<TextAsset>(Util.baseLanguagePath + "url.json");
        JsonData fileNames = JsonMapper.ToObject(result.text);
        string[] names = ((string)fileNames["FileName"]).Split(',');
        
        for (int i = 0; i < names.Length; i++) {
            var t = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<TextAsset>(Util.baseLanguagePath + names[i]);
            JsonData d = JsonMapper.ToObject(t.text);
            LangMap[(string)d["languageName"]] = (string)d["id"];
            trans[(string)d["id"]] = d;
            string flagIconUrl = Util.baseFlagPath + (string)d["flagName"] + ".png";
            var flag = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<Sprite>(flagIconUrl);
            FlagsDic[(string)d["languageName"]] = flag;
        }
        InitFinish = true;

        try {
            ChangeLang(string.IsNullOrEmpty(this.GetModel<ISettingsModel>().Language)
                ? defaultLang : this.GetModel<ISettingsModel>().Language);
        } catch (Exception e) {
            Console.WriteLine(e);
            ChangeLang(defaultLang);
        }
    }

    public string GetText(string key) {
        try {
            var s = (string)current_dict[key];
            return s;
        } catch {
            Debug.Log("没有key是 [ " + key + "]   |的翻译");
            return "";
        }
    }

    public void RegisterText(I18NText t) {
        allTexts.Add(t);
        t.Reset();
    }

    public void UnregisterText(I18NText t) {
        allTexts.Remove(t);
    }

    private void ChangeLang(string id) {
        Debug.Log("ChangeLang = " + id);
        if (!InitFinish) {
            return;
        }
        current_dict = trans[id];
        CurrentLang = id;
        RefreshAllText();
    }

    private void RefreshAllText() {
        I18NText[] arr = allTexts.ToArray();
        foreach (I18NText i in arr) {
            if (i == null) {
                allTexts.Remove(i);
            } else {
                i.Reset();
            }
        }
    }

    protected override void OnInit() {
        this.RegisterEvent<ChangeSettingEvent>((e) => {
            ChangeLang(this.GetModel<ISettingsModel>().Language);
        });
    }
}
