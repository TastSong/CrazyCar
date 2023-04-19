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
    MatchRoomUI,
    DownloadResUI,
    LoginUI,
    RegisterUI,
    InputSystemPanel,
    TimeTrailGameUI,
    MatchGameUI,
    CommonGameUI,
    GameResultUI,
    WarningAlert,
    InfoConfirmAlert,
    LoadingUI,
    GameHelper
}

public enum UILevelType {
    Main = 0,
    UIPage,
    Popup,
    Alart,
    Debug
}

public class UIController : MonoBehaviour, IController {
    public Transform[] levles;
    private Dictionary<UIPageType, GameObject> pagesDict = new Dictionary<UIPageType, GameObject>();
    private Dictionary<UILevelType, LinkedList<UIPageType>> pagesGroup = new Dictionary<UILevelType, LinkedList<UIPageType>>();
    private Dictionary<string, string> urlDict = new Dictionary<string, string>();
    private readonly string basePageUrl = "Pages/";

    private void Awake() {
        this.RegisterEvent<HidePageEvent>(HidePage).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<ShowPageEvent>(ShowPage).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<HidePageByLevelEvent>(HidePageByLevel).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<PrepareUIEvent>(OnPrepareUI).UnRegisterWhenGameObjectDestroyed(gameObject);
        
        DontDestroyOnLoad(gameObject);
    }

    private void OnPrepareUI(PrepareUIEvent obj) {
        this.GetSystem<IGuidanceSystem>().UIControllerCanvas = GetComponent<Canvas>();
        foreach (UILevelType value in Enum.GetValues(typeof(UILevelType))) {
            pagesGroup.Add(value, new LinkedList<UIPageType>());
        }
        
        string urlStr = Resources.Load<TextAsset>(basePageUrl + "url").text;
        JsonData data = JsonMapper.ToObject(urlStr);
        IDictionary dict = data;
        foreach (DictionaryEntry entry in dict) {
            string key = (string)entry.Key;
            // 要先转为jsonData 再强转成string
            string value = (string)data[key];
            urlDict[key] = value;
        }
    }

    public void HidePage(HidePageEvent e) {
        if (!pagesDict.ContainsKey(e.pageType)) {
            Debug.Log("Not Exist Page");
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

        if (pagesDict.ContainsKey(e.pageType) && pagesGroup[e.levelType].Contains(e.pageType)) {
            pagesDict[e.pageType].SetActiveFast(true);
        } else if (pagesDict.ContainsKey(e.pageType) && !pagesGroup[e.levelType].Contains(e.pageType)) {
            pagesDict[e.pageType].transform.SetParent(levles[(int)e.levelType], false);
            pagesGroup[GetGroupByPageType(e.pageType)].Remove(e.pageType);
            pagesGroup[e.levelType].AddLast(e.pageType);
        } else {
            // FindPage
            string pageUrl = GetPageUrlByType(e.pageType);
            GameObject page = Instantiate(Resources.Load<GameObject>(pageUrl));
            page.transform.SetParent(levles[(int)e.levelType], false);
            pagesDict[e.pageType] = page;
            pagesGroup[e.levelType].AddLast(e.pageType);
        }
        
        UIPenal penal = pagesDict[e.pageType].GetComponent<UIPenal>();
        if (e.data != null && penal != null) {
            penal.InitData(e.data);
        }

        pagesDict[e.pageType].transform.SetAsLastSibling();
    }
    
    private UILevelType GetGroupByPageType(UIPageType type) {
        foreach (var kv in pagesGroup) {
            if (kv.Value.Contains(type)) {
                return kv.Key;
            }
        }
        return UILevelType.Main;
    }
    
    public void HidePageByLevel(HidePageByLevelEvent e) {
        foreach (var kv in pagesGroup[e.mLevelType]) {
            if (pagesDict.ContainsKey(kv)) {
                pagesDict[kv].SetActiveFast(false);
            }
        }
    }

    public void DestoryPageByLevel(UILevelType levelType) {
        foreach (var kv in pagesGroup[levelType]) {
            if (pagesDict.ContainsKey(kv)) {
                Destroy(pagesDict[kv]);
                pagesDict.Remove(kv);
                pagesGroup[levelType].Remove(kv);
            }
        }
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
