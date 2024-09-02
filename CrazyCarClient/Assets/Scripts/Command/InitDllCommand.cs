using HybridCLR;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using QFramework;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.ResourceManagement.AsyncOperations;

public class InitDllCommand : AbstractCommand {
    // HotUpdate等字段不能放入其他非热更代码中，否则会导致热更代码无法正常运行
    protected override async void OnExecute() {
        var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<TextAsset>("HotUpdate");
        if (obj.Status == AsyncOperationStatus.Succeeded) {
            Assembly hotUpdateAss = Assembly.Load(obj.Result.bytes);
            Type type = hotUpdateAss.GetType("Hello");
            type.GetMethod("Run").Invoke(null, null);
        } else {
            Debug.LogError($"Load LoadDll Failed");
        }
    }
}

