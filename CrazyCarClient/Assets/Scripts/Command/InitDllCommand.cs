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
    protected override void OnExecute() {
        this.GetSystem<IAddressableSystem>().LoadAssetAsync<TextAsset>("HotUpdate", (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                Assembly hotUpdateAss = Assembly.Load(obj.Result.bytes);
                Type type = hotUpdateAss.GetType("Hello");
                type.GetMethod("Run").Invoke(null, null);
            } else {
                Debug.LogError($"Load LoadDll Failed");
            }
        }).Forget();
    }
}

