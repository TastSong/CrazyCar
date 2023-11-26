using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class TestUniTask : MonoBehaviour {
    void Start() {
        var source = new UniTaskCompletionSource();
        ReadyForCompleted(source).Forget();//只引发不考虑其是否完成
        Debug.Log("Do Something...");
        source.TrySetResult();//设置完成
        //source.TrySetException(Exception);//设置失败
        //source.TrySetCanceled();//设置取消
        Debug.Log("Completed");
    }

    async UniTask ReadyForCompleted(UniTaskCompletionSource source) {
        Debug.Log("等待");
        await source.Task;
        Debug.Log("完成");
    }
}
