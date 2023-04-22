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
    public void LoadAsset<T>(string path, Action<AsyncOperationHandle<T>> OnLoaded);
    public UniTaskVoid LoadAssetAsync<T>(string path, Action<AsyncOperationHandle<T>> OnLoaded);
    public UniTask<T> LoadAssetAsync<T>(string path);
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
        CoroutineController.manager.StartCoroutine(GetTotalDonwloadKeys());
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
        CoroutineController.manager.StartCoroutine(DownloadAssets());
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

    public void SetUpdateInfo(Action finish) {
       CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.addressableUrl,
                succData: (data) => { 
                    if ((bool)data["is_on"]) {
                        AddressableInfo.BaseUrl = (string)data["url"];
                    } else {
                        AddressableInfo.BaseUrl = Application.streamingAssetsPath;
                    }
                    finish.Invoke();
                }));
    }
    
    public void LoadAsset<T>(string path, Action<AsyncOperationHandle<T>> OnLoaded) {
        Addressables.LoadAssetAsync<T>(path).Completed += OnLoaded;
    }
    
    public async UniTaskVoid LoadAssetAsync<T>(string path, Action<AsyncOperationHandle<T>> OnLoaded) {
        var obj = Addressables.LoadAssetAsync<T>(path);
        await obj;
        if (obj.Status == AsyncOperationStatus.Succeeded) {
            OnLoaded(obj);
        }
    }
    
    public async UniTask<T> LoadAssetAsync<T>(string path)  {
        var obj = await Addressables.LoadAssetAsync<T>(path);
        return obj;
    }

    protected override void OnInit() {
        
    }
}
