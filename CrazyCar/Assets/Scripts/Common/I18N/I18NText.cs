using UnityEngine;
using UnityEngine.UI;

// 不能重复添加这个组件
[DisallowMultipleComponent]
public class I18NText : MonoBehaviour {
    private Text showText;
    public string key;

    void Start() {
        showText = GetComponent<Text>();
        I18N.manager.RegisterText(this);
    }

    public void Reset() {
        if (string.IsNullOrEmpty(key)) {
            return;
        }

        string s = I18N.manager.GetText(key);
        if (showText != null && s.Length != 0) {
            showText.text = s;
        }
    }

    private void OnEnable() {
        if (I18N.manager != null)
            Reset();
    }

    private void OnDestroy() {
        if (I18N.manager != null)
            I18N.manager.UnregisterText(this);
    }
}