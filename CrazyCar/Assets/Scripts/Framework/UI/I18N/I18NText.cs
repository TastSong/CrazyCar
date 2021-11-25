using UnityEngine;
using UnityEngine.UI;
using TFramework;

// 不能重复添加这个组件
[DisallowMultipleComponent]
public class I18NText : MonoBehaviour, IController {
    private Text showText;
    public string key;

    void Start() {
        showText = GetComponent<Text>();
        this.GetSystem<II18NSystem>().RegisterText(this);
    }

    public void Reset() {
        if (string.IsNullOrEmpty(key)) {
            return;
        }

        string s = this.GetSystem<II18NSystem>().GetText(key);
        if (showText != null && s.Length != 0) {
            showText.text = s;
        }
    }

    private void OnEnable() {
        if (this.GetSystem<II18NSystem>() != null)
            Reset();
    }

    private void OnDestroy() {
        if (this.GetSystem<II18NSystem>() != null)
            this.GetSystem<II18NSystem>().UnregisterText(this);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}