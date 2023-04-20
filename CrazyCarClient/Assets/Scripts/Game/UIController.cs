using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using LitJson;
using Utils;
using System.Linq;
using System;
using Cysharp.Threading.Tasks;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

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
    private readonly string basePageUrl = "Assets/Prefabs/UIPage/";

    private void Awake() {
        this.RegisterEvent<HidePageEvent>(OnHidePage).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<ShowPageEvent>(OnShowPage).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<HidePageByLevelEvent>(OnHidePageByLevel).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<PrepareUIEvent>(OnPrepareUI).UnRegisterWhenGameObjectDestroyed(gameObject);
        
        DontDestroyOnLoad(gameObject);
    }

    private void OnPrepareUI(PrepareUIEvent obj) {
        this.GetSystem<IGuidanceSystem>().UIControllerCanvas = GetComponent<Canvas>();
        foreach (UILevelType value in Enum.GetValues(typeof(UILevelType))) {
            pagesGroup.Add(value, new LinkedList<UIPageType>());
        }
        // loading 的特殊性，可能还未准备好，就会被关闭，所以提前准备
        ShowPageEvent e = new ShowPageEvent(UIPageType.LoadingUI, UILevelType.Main);
        OnShowPage(e);
    }

    private void OnHidePage(HidePageEvent e) {
        if (!pagesDict.ContainsKey(e.pageType)) {
            Debug.Log("Not Exist Page " + e.pageType);
            return;
        }

        pagesDict[e.pageType].SetActiveFast(false);
    }

    // 根据对应页面类型显示页面 如果没有页面则创建 如果有页面则调取并active为true 第二个参数是是否关闭其他开启界面
    private void OnShowPage(ShowPageEvent e) {
        if (e.closeOther) {
            foreach (var kv in pagesDict) {
                kv.Value.SetActiveFast(false);
            }
        }

        if (pagesDict.ContainsKey(e.pageType) && pagesGroup[e.levelType].Contains(e.pageType)) {
            // 当前页面还在原来分组
            pagesDict[e.pageType].SetActiveFast(true);
            SetPageInfo(e);
        } else if (pagesDict.ContainsKey(e.pageType) && !pagesGroup[e.levelType].Contains(e.pageType)) {
            // 当前页面还在不在原来分组
            pagesDict[e.pageType].transform.SetParent(levles[(int)e.levelType], false);
            pagesGroup[GetGroupByPageType(e.pageType)].Remove(e.pageType);
            pagesGroup[e.levelType].AddLast(e.pageType);
            SetPageInfo(e);
        } else {
            LoadPage(e).Forget();
        }
    }
    
    private async UniTaskVoid LoadPage(ShowPageEvent e) {
        string pageUrl = GetPageUrlByType(e.pageType);
        var obj = Addressables.LoadAssetAsync<GameObject>(pageUrl);
        await obj;
        if (obj.Status == AsyncOperationStatus.Succeeded) {
            GameObject page = Instantiate(obj.Result);
            page.transform.SetParent(levles[(int)e.levelType], false);
            pagesDict[e.pageType] = page;
            pagesGroup[e.levelType].AddLast(e.pageType);
            SetPageInfo(e);
        } else {
            Debug.LogError($"Load {e.pageType} Page Failed");
        }
    }

    private void SetPageInfo(ShowPageEvent e) {
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
    
    private void OnHidePageByLevel(HidePageByLevelEvent e) {
        foreach (var kv in pagesGroup[e.mLevelType]) {
            if (pagesDict.ContainsKey(kv)) {
                pagesDict[kv].SetActiveFast(false);
            }
        }
    }

    private void DestoryPageByLevel(UILevelType levelType) {
        foreach (var kv in pagesGroup[levelType]) {
            if (pagesDict.ContainsKey(kv)) {
                Destroy(pagesDict[kv]);
                pagesDict.Remove(kv);
                pagesGroup[levelType].Remove(kv);
            }
        }
    }

    // 获取对应页面
    private GameObject GetPage(UIPageType type) {
        if (pagesDict.ContainsKey(type)) {
            return pagesDict[type];
        }

        return null;
    }

    //销毁对应页面
    private void DestoryPage(UIPageType type) {
        if (!pagesDict.ContainsKey(type)) {
            Debug.LogError("not exist page");
            return;
        }

        Destroy(pagesDict[type]);
        pagesDict.Remove(type);
    }

    // 判断当前页面是否是主页
    private bool IsHomePage() {
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
        return basePageUrl + type.ToString() + ".prefab";
    }

    private void OnDestroy() {
        foreach (var kv in pagesDict) {
            if (kv.Value != null) {
                Destroy(kv.Value);
            }
        }
        pagesDict.Clear();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
