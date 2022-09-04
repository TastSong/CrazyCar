﻿using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class LoginCommand : AbstractCommand {
    private string mUserName;
    private string mPassword;
    private bool mIsRemember;
    private bool mIsAutoLogin;

    public LoginCommand(string userName, string password, bool isRemember, bool isAutoLogin) {
        mUserName = userName;
        mPassword = password;
        mIsRemember = isRemember;
        mIsAutoLogin = isAutoLogin;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("UserName");
        w.Write(mUserName);
        w.WritePropertyName("Password");
        w.Write(Util.GetMd5(mPassword));
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.loginUrl,
            data: bytes, succData: (data) => {
                this.GetSystem<IDataParseSystem>().ParseSelfUserInfo(data);
                this.GetModel<IUserModel>().Password.Value = mPassword;
            }, code: (code) => {
                if (code == 200) {
                    this.SendEvent(new ShowWarningAlertEvent(text: this.GetSystem<II18NSystem>().GetText("Login Success"),
                        callback: () => {
                            this.GetSystem<IVibrationSystem>().Haptic();
                            this.GetModel<IUserModel>().RememberPassword.Value = mIsRemember ? 1 : 0;
                            this.GetModel<IUserModel>().AutoLogin.Value = mIsAutoLogin ? 1 : 0;
                            this.SendCommand<RecodeLoginCommand>();
                            this.SendCommand(new LoadSceneCommand(SceneID.Index));
                        }));

                } else if (code == 423) {
                    this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Password Error")));
                } else if (code == 404) {
                    this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("User not registered")));
                } else {
                    this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Unknown Error")));
                }
            }));
    }
}