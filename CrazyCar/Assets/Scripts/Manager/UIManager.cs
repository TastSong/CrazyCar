using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TinyMessenger;
using UnityEngine;
using Utils;

public enum UIPageType {
    HomepageUI = 0,
    AvatarUI,
    TimeTrialIndexUI
}

public class UIManager : MonoBehaviour {
    public static UIManager instance = null;
    private Dictionary<UIPageType, GameObject> pagesDict = new Dictionary<UIPageType, GameObject>();
    private Dictionary<string, string> urlDict = new Dictionary<string, string>();
    private readonly string basePageUrl = "Pages/";

    private void Awake() {
        if (instance == null) {
            instance = this;
        } else if (instance != this) {
            Destroy(gameObject);
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

    // 根据对应页面类型显示页面 如果没有页面则创建 如果有页面则调取并active为true 第二个参数是是否关闭其他开启界面
    public void ShowPage(UIPageType type, bool closeOther = false) {
        if (closeOther) {
            foreach (var kv in pagesDict) {
                kv.Value.SetActiveFast(false);
            }
        }

        if (pagesDict.ContainsKey(type)) {
            pagesDict[type].SetActiveFast(true);
        } else {
            // FindPage]
            string pageUrl = GetPageUrlByType(type);
            GameObject page = Instantiate(Resources.Load<GameObject>(pageUrl));
            page.transform.SetParent(transform, false);
            pagesDict[type] = page;
        }

        pagesDict[type].transform.SetAsLastSibling();
    }

    // 关闭对应的界面
    public void HidePage(UIPageType type, ITinyMessage message = null) {
        if (!pagesDict.ContainsKey(type)) {
            Debug.LogError("not exist page");
            return;
        }

        pagesDict[type].SetActiveFast(false);
        if (message != null) {
            GameController.manager.tinyMsgHub.Publish(message);
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
    public void DestoryPage(UIPageType type, ITinyMessage message = null) {
        if (!pagesDict.ContainsKey(type)) {
            Debug.LogError("not exist page");
            return;
        }
        if (message != null) {
            GameController.manager.tinyMsgHub.Publish(message);
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
}