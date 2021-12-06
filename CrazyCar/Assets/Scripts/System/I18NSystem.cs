using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using LitJson;
using Utils;
using System;

public interface II18NSystem : ISystem {
    string CurrentLang { get; set; }
    bool InitFinish { get; set; }

    void InitTranslation();
    string GetText(string key);
    void RegisterText(I18NText t);
    void UnregisterText(I18NText t);
}

public class I18NSystem : AbstractSystem, II18NSystem {
    public string CurrentLang { get; set; }
    public bool InitFinish { get; set; }

    private Dictionary<string, JsonData> trans = new Dictionary<string, JsonData>();
    private Dictionary<string, string> langMap = new Dictionary<string, string>();
    private List<I18NText> allTexts = new List<I18NText>();
    private JsonData current_dict;
    private string defaultLang = "zh-cn";

    public void InitTranslation() {
        TextAsset[] tas = Resources.LoadAll<TextAsset>(Util.baseLanguagePath);
        foreach (var t in tas) {
            JsonData d = JsonMapper.ToObject(t.text);
            langMap[(string)d["languageName"]] = (string)d["id"];
            trans[(string)d["id"]] = d;
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
            //Debug.LogError("没有key是 [ " + key + "]   |的翻译");
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
