using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class LoadingUI : MonoBehaviour {
    public void ShowLoading() {
        Debug.Log("ShowLoading");
        gameObject.SetActiveFast(true);
    }

    public void HideLoading() {
        Debug.Log("HideLoading");
        gameObject.SetActiveFast(false);
    }
}
