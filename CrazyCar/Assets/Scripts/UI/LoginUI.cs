using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class LoginUI : MonoBehaviour {
    public InputField userNameInput;
    public InputField passwordInput;
    public Button loginBtn;
    public Button registerBtn;

    private void Start() {
        loginBtn.onClick.AddListener(() => {
            StringBuilder sb = new StringBuilder();
            JsonWriter w = new JsonWriter(sb);
            w.WriteObjectStart();
            w.WritePropertyName("UserName");
            w.Write(userNameInput.text);
            w.WritePropertyName("Password");
            w.Write(passwordInput.text);
            w.WriteObjectEnd();
            Debug.Log("++++++ " + sb.ToString());
            byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
            StartCoroutine(Util.POSTHTTP(NetworkController.manager.HttpBaseUrl + RequestUrl.loginUrl,
                bytes, (data) => {
                    Debug.Log(data.ToJson());
                }));
        });
    }
}
