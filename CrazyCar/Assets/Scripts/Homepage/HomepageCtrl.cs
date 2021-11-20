using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TFramework;

public class HomepageCtrl : MonoBehaviour, IController{
    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    private void Start() {
        this.SendCommand(new ShowPageCommand(UIPageType.HomepageUI));
    }
}
