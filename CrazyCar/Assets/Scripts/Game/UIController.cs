using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using LitJson;
using Utils;
using System.Linq;
using System;

public enum UIPageType {
    HomepageUI = 0,
    AvatarUI,
    TimeTrialDetailUI,
    ProfileUI,
    SettingsUI,
    RankUI,
    TimeTrialRankUI,
    ChangeCarUI,
    MatchDetailUI
}

public class UIController : MonoBehaviour, IController {
    private Dictionary<UIPageType, GameObject> pagesDict = new Dictionary<UIPageType, GameObject>();
    private Dictionary<string, string> urlDict = new Dictionary<string, string>();
    private readonly string basePageUrl = "Pages/";

    private void Awake() {
        this.GetSystem<IGuidanceSystem>().UIControllerCanvas = GetComponent<Canvas>();
        string urlStr = Resources.Load<TextAsset>(basePageUrl + "url").text;
        JsonData data = JsonMapper.ToObject(urlStr);
        IDictionary dict = data;
        foreach (DictionaryEntry entry in dict) {
            string key = (string)entry.Key;
            // 要先转为jsonData 再强转成string
            string value = (string)data[key];
            urlDict[key] = value;
        }

        this.RegisterEvent<HidePageEvent>(HidePage);
        this.RegisterEvent<ShowPageEvent>(ShowPage);
    }

    public void HidePage(HidePageEvent e) {
        if (!pagesDict.ContainsKey(e.pageType)) {
            Debug.LogError("Not Exist Page");
            return;
        }

        pagesDict[e.pageType].SetActiveFast(false);
    }

    // 根据对应页面类型显示页面 如果没有页面则创建 如果有页面则调取并active为true 第二个参数是是否关闭其他开启界面
    public void ShowPage(ShowPageEvent e) {
        if (e.closeOther) {
            foreach (var kv in pagesDict) {
                kv.Value.SetActiveFast(false);
            }
        }

        if (pagesDict.ContainsKey(e.pageType)) {
            pagesDict[e.pageType].SetActiveFast(true);
        } else {
            // FindPage]
            string pageUrl = GetPageUrlByType(e.pageType);
            GameObject page = Instantiate(Resources.Load<GameObject>(pageUrl));
            page.transform.SetParent(transform, false);
            pagesDict[e.pageType] = page;
        }

        pagesDict[e.pageType].transform.SetAsLastSibling();
    }

    // 获取对应页面
    public GameObject GetPage(UIPageType type) {
        if (pagesDict.ContainsKey(type)) {
            return pagesDict[type];
        }

        return null;
    }

    //销毁对应页面
    public void DestoryPage(UIPageType type) {
        if (!pagesDict.ContainsKey(type)) {
            Debug.LogError("not exist page");
            return;
        }

        Destroy(pagesDict[type]);
        pagesDict.Remove(type);
    }

    // 判断当前页面是否是主页
    public bool IsHomePage() {
        bool isHomePage = true;
        pagesDict.ToList().ForEach(delegate (KeyValuePair<UIPageType, GameObject> pair) {
            if (pair.Value != null && pair.Key != UIPageType.HomepageUI && pair.Value.activeSelf) {
                isHomePage = false;
            }
        });
        return isHomePage && pagesDict[UIPageType.HomepageUI] != null;
    }

    // 查找Resources中的路径
    private string GetPageUrlByType(UIPageType type) {
        if (!urlDict.ContainsKey(type.ToString())) {
            Debug.LogError("Error type = " + type.ToString());
            return "";
        }

        return basePageUrl + urlDict[type.ToString()];
    }

    private void OnDestroy() {
        this.UnRegisterEvent<HidePageEvent>(HidePage);
        this.UnRegisterEvent<ShowPageEvent>(ShowPage);

        foreach (var kv in pagesDict) {
            if (kv.Value != null) {
                Destroy(kv.Value);
            }
        }
        pagesDict.Clear();
        urlDict.Clear();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
