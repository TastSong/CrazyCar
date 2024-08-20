using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;

public class HomepageCtrl : MonoBehaviour, IController{
    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    private void Start() {
        UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.HomepageUI));
    }
}
