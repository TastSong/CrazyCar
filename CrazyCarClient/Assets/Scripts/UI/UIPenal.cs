using UnityEngine;
using QFramework;

public abstract class UIPenal : MonoBehaviour, IController { 
    public abstract void InitData(object data);
    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}