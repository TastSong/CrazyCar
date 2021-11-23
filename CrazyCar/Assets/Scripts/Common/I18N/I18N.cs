using LitJson;
using System;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;
using Utils;
using TFramework;

public class I18N : MonoBehaviour, IController {

    public static I18N manager = null;
    public string currentLang = "zh-cn";

    private Dictionary<string, JsonData> trans = new Dictionary<string, JsonData>();
    private Dictionary<string, string> langMap = new Dictionary<string, string>();
    private List<I18NText> allTexts = new List<I18NText>();
    private JsonData current_dict;
    private string defaultLang = "zh-cn";
    public bool initFinish = false;

    private void Awake() {
        if (manager == null) {
            DontDestroyOnLoad(gameObject);
            manager = this;
        } else if (manager != this) {
            Destroy(gameObject);
        }
    }

    // 读取本地语言 如果读取不到设置中的语言设置 就设置默认语言
    public void InitTranslation() {
        TextAsset[] tas = Resources.LoadAll<TextAsset>(Util.baseLanguagePath);     
        foreach (var t in tas) {
            JsonData d = JsonMapper.ToObject(t.text);
            langMap[(string)d["languageName"]] = (string)d["id"];
            trans[(string)d["id"]] = d;
        }
        initFinish = true;

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

    public void ChangeLang(string id) {
        Debug.Log("ChangeLang = " + id);
        current_dict = trans[id];
        currentLang = id;
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

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}