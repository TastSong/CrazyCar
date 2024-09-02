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
    Prepare = 0,
    Main ,
    UIPage,
    Popup,
    Alart,
    Debug
}

public class UIController : PersistentMonoSingleton<UIController>, IController {
    public Transform[] levles;
    private Dictionary<UIPageType, GameObject> pagesDict = new Dictionary<UIPageType, GameObject>();
    private Dictionary<UILevelType, LinkedList<UIPageType>> pagesGroup = new Dictionary<UILevelType, LinkedList<UIPageType>>();

    private void Awake() {
        base.Awake();
    }

    public async UniTask InitUI() {
        this.GetSystem<IGuidanceSystem>().UIControllerCanvas = GetComponent<Canvas>();
        foreach (UILevelType value in Enum.GetValues(typeof(UILevelType))) {
            pagesGroup[value] = new LinkedList<UIPageType>();
        }
    }

    public void HidePage(UIPageType pageType) {
        if (!pagesDict.ContainsKey(pageType)) {
            Debug.Log("Not Exist Page " + pageType);
            return;
        }

        pagesDict[pageType].SetActiveFast(false);
    }

    public void ShowPage(ShowPageInfo info) {
        ShowPageAsync(info).Forget();
    }

    // 根据对应页面类型显示页面 如果没有页面则创建 如果有页面则调取并active为true 第二个参数是是否关闭其他开启界面
    public async UniTask<bool> ShowPageAsync(ShowPageInfo info) {
        if (info.closeOther) {
            foreach (var kv in pagesDict) {
                kv.Value.SetActiveFast(false);
            }
        }

        if (pagesDict.ContainsKey(info.pageType) && pagesGroup[info.levelType].Contains(info.pageType)) {
            // 当前页面还在原来分组
            pagesDict[info.pageType].SetActiveFast(true);
            SetPageInfo(info);
        } else if (pagesDict.ContainsKey(info.pageType) && !pagesGroup[info.levelType].Contains(info.pageType)) {
            // 当前页面还在不在原来分组
            pagesDict[info.pageType].transform.SetParent(levles[(int)info.levelType], false);
            pagesDict[info.pageType].SetActiveFast(true);
            pagesGroup[GetGroupByPageType(info.pageType)].Remove(info.pageType);
            pagesGroup[info.levelType].AddLast(info.pageType);
            SetPageInfo(info);
        } else {
            string pageUrl = GetPageUrlByType(info.pageType);
            var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<GameObject>(pageUrl);
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                GameObject page = Instantiate(obj.Result);
                page.transform.SetParent(levles[(int)info.levelType], false);
                pagesDict[info.pageType] = page;
                pagesGroup[info.levelType].AddLast(info.pageType);
                SetPageInfo(info);
                return true;
            } else {
                Debug.LogError($"Load {info.pageType} Page Failed");
                return false;
            }
        }
        return true;
    }

    private void SetPageInfo(ShowPageInfo e) {
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
    
    public void HidePageByLevel(UILevelType levelType) {
        foreach (var kv in pagesGroup[levelType]) {
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
        return Util.basePageUrl + type.ToString() + Util.pageSuffix;
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
