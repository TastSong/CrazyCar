using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Utils;
using QFramework;

public class UISceneLoadingCtrl : MonoBehaviour, IController {
    public Slider progressSlider;
    public Text progressText;

    private float timer;
    public float minLoadingTime = 0.1f;

    private void Start() {
        this.GetModel<IGameModel>().SceneLoading.Value = true;
        this.GetModel<IGameModel>().SceneLoaded.Value = false;
        progressSlider.value = 0;
        progressText.text = "0%";
        CoroutineController.Instance.StartCoroutine(LoadScene());
    }

    private void Update() {
        timer += Time.deltaTime;
    }

    private IEnumerator LoadScene() {
        this.GetModel<IGameModel>().SceneLoaded.Value = false;
        this.GetModel<IGameModel>().SceneLoading.Value = true;
        
        UIController.Instance.HidePageByLevel(UILevelType.Main);
        UIController.Instance.HidePageByLevel(UILevelType.UIPage);
        progressSlider.value = 0;
        progressText.text = (int)(progressSlider.value * 100) + "%";
        progressSlider.value = 0.1f;
        progressText.text = (int)(progressSlider.value * 100) + "%";
        AsyncOperation async = SceneManager.LoadSceneAsync((int)this.GetModel<IGameModel>().LoadingTargetSceneID.Value);
        async.allowSceneActivation = false;

        while (timer < minLoadingTime) {
            var maxProgress = (timer / minLoadingTime);
            progressSlider.value = maxProgress;
            progressText.text = (int)(maxProgress * 100) + "%";
            yield return null;
        }

        //AsyncOperation.progress 属性用于跟踪场景加载进度，其值从 0 到 1 变化。
        //然而，异步加载的进度最大值实际上只有 0.9。在达到 0.9 时，意味着场景已经加载完毕，但还没有切换过去。
        while (!async.isDone && async.progress < 0.9f) {
            progressSlider.value = Mathf.Min(async.progress, async.progress);
            progressText.text = (int)(progressSlider.value * 100) + "%";
            yield return null;
        }
        progressSlider.value = 100;
        progressText.text = "100%";
        this.GetModel<IGameModel>().SceneLoaded.Value = true;
        this.GetModel<IGameModel>().SceneLoading.Value = false;
        
        if (this.GetModel<IGameModel>().LoadingTargetSceneID == SceneID.Index) {
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.HomepageUI, UILevelType.Main));
        } else if (this.GetModel<IGameModel>().LoadingTargetSceneID == SceneID.Game) {
            SelectGameUI();
        }
        
        async.allowSceneActivation = true;
    }
    
    private void SelectGameUI() {
        UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.CommonGameUI, UILevelType.Main));
        UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.InputSystemPanel, UILevelType.Main));
        if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.MatchGameUI, UILevelType.UIPage));
        } else if (this.GetModel<IGameModel>().CurGameType == GameType.TimeTrial) {
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.TimeTrailGameUI, UILevelType.UIPage));
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}