using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class LoadingUI : MonoBehaviour {
    public void ShowLoading() {
        gameObject.SetActiveFast(true);
    }

    public void HideLoading() {
        gameObject.SetActiveFast(false);
    }
}
