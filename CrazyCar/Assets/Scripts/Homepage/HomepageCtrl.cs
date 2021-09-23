using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class HomepageCtrl : MonoBehaviour{
    private void Start() {
        UIManager.manager.ShowPage(UIPageType.HomepageUI);
    }
}
