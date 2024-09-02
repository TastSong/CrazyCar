using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.AddressableAssets.ResourceLocators;
using System.Linq;
using System;
using Cysharp.Threading.Tasks;

public class AddressableInfo {
    public static string BaseUrl;
}

public interface IAddressableSystem : ISystem {
    public void SetCallBack(Action<long> OnCheckCompleteNeedUpdate = null, Action OnCompleteDownload = null, Action OnCheckCompleteNoUpdate = null, Action<float, float> OnUpdate = null);
    public void GetDownloadAssets();
    public void DownloadAsset();
    public UniTask<AsyncOperationHandle<T>> LoadAssetAsync<T>(string path);
    public void SetUpdateInfo(Action finish);
}

public class AddressableSystem : AbstractSystem, IAddressableSystem {
    private int downloadFailedTimes = 0;
    private static IEnumerable downloadKeys;
    private long totalDownloadSize;
    private Action<float, float> OnUpdate;
    private Action<long> OnCheckCompleteUpdate;
    private Action OnCheckCompleteNoUpdate;
    private Action OnCompleteDownload;
    private AsyncOperationHandle downloadHandle;
    private AsyncOperationHandle<IResourceLocator> initHandle;

    public void SetCallBack(Action<long> OnCheckCompleteNeedUpdate = null, Action OnCompleteDownload = null, Action OnCheckCompleteNoUpdate = null, Action<float, float> OnUpdate = null) {
        this.OnCheckCompleteUpdate = OnCheckCompleteNeedUpdate ?? OnCheckCompleteUpdate;
        this.OnCompleteDownload = OnCompleteDownload ?? this.OnCompleteDownload;
        this.OnCheckCompleteNoUpdate = OnCheckCompleteNoUpdate;
        this.OnUpdate = OnUpdate ?? this.OnUpdate;
    }

    public void GetDownloadAssets() {
        CoroutineController.Instance.StartCoroutine(GetTotalDonwloadKeys());
    }

    private IEnumerator GetTotalDonwloadKeys() { 
        initHandle = Addressables.InitializeAsync();
        initHandle.Completed += OnInitAA;
        yield return initHandle;
    }

    private void OnInitAA(AsyncOperationHandle<IResourceLocator> handle) {
        downloadKeys = handle.Result.Keys;

        var checkHandle = Addressables.CheckForCatalogUpdates(false);
        checkHandle.Completed += OnCheckCatalogUpdate;
        Addressables.Release(handle);
    }

    private void OnCheckCatalogUpdate(AsyncOperationHandle<List<string>> handle) {
        // 耗性能
        // string str = "";
        // for (int i = 0; i < handle.Result.ToList().Count; i++) {
        //     str += handle.Result.ToList()[i] + "; ";
        // }
        // Debug.Log("对比Catalog " + str);
        if (handle.Result.Count > 0) {
            Debug.Log("对比Catalog 数量大于0");
            var updateHandle = Addressables.UpdateCatalogs(handle.Result);
            updateHandle.Completed += OnUpdateCatalogs;
        } else {
            Debug.Log("对比Catalog GetDownloadSizeAsync");
            Addressables.GetDownloadSizeAsync(downloadKeys).Completed += OnCheckDownload;
        }
        Addressables.Release(handle);
    }

    private void OnUpdateCatalogs(AsyncOperationHandle<List<IResourceLocator>> handle) {
        Debug.Log("OnUpdateFinish");
        Addressables.GetDownloadSizeAsync(downloadKeys).Completed += OnCheckDownload;
        Addressables.Release(handle);
    }

    private void OnCheckDownload(AsyncOperationHandle<long> checkHandle) {
        Debug.Log("GetDownloadSizeAsync " + checkHandle.Result.ToString());
        if (checkHandle.Result > 0) {
            Debug.Log("有需要更新的Handle");
            totalDownloadSize = checkHandle.Result;
            OnCheckCompleteUpdate?.Invoke(checkHandle.Result);
        } else {
            Debug.Log("NoNeedUpdate");
            OnCheckCompleteNoUpdate?.Invoke();
        }
    }

    public void DownloadAsset() {
        CoroutineController.Instance.StartCoroutine(DownloadAssets());
    }

    private IEnumerator DownloadAssets() {
        string str = "";
        foreach (var item in downloadKeys) {
            str += "    ";
            str += item.ToString();
        }
        Debug.Log("DownloadAssets " + str);
        downloadHandle = Addressables.DownloadDependenciesAsync(downloadKeys, Addressables.MergeMode.Union);
        downloadHandle.Completed += OnDonloadComplete;
        if (totalDownloadSize > 0) {
            while (!downloadHandle.IsDone) {
                float percent = downloadHandle.GetDownloadStatus().Percent;
                OnUpdate?.Invoke(percent, totalDownloadSize);
                yield return null;
            }
            Addressables.Release(downloadHandle);
        }
    }

    private void OnDonloadComplete(AsyncOperationHandle handle) {
        if (handle.Status == AsyncOperationStatus.Succeeded) {
            OnCompleteDownload?.Invoke();
        } else {
            downloadFailedTimes += 1;
            if (downloadFailedTimes >= 3) {
                //ChangeDownloadUrl(AddressableInfo.cdn_1);
            }
        }
    }

    public async void SetUpdateInfo(Action finish) {
        var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.addressableUrl);
        if (result.serverCode == 200) {
            if ((bool)result.serverData["is_on"]) {
                AddressableInfo.BaseUrl = (string)result.serverData["url"];
            } else {
                AddressableInfo.BaseUrl = Application.streamingAssetsPath;
            }
        } 
        finish.Invoke();
    }
    
    public async UniTask<AsyncOperationHandle<T>> LoadAssetAsync<T>(string path){
        AsyncOperationHandle<T> obj = Addressables.LoadAssetAsync<T>(path);
        await obj;
        return obj;
    }

    protected override void OnInit() {
        
    }
}
