using LitJson;
using System.Text;
using TFramework;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class ChangeAvatarCommand : AbstractCommand {
    private AvatarInfo mAvatarInfo; // 不用New
    private Image mLockImage;

    public ChangeAvatarCommand(AvatarInfo avatarInfo, Image lockImage) {
        mAvatarInfo = avatarInfo;
        mLockImage = lockImage;
    }

    protected override void OnExecute() {
        if (mAvatarInfo.isHas) {
            Debug.Log("点击头像 = " + mAvatarInfo.aid);
            this.SendCommand(new UpdataAvatarUICommand(mAvatarInfo.aid));
        } else {
            if (this.GetModel<IUserModel>().Star.Value > mAvatarInfo.star) {
                GameController.manager.infoConfirmAlert.ShowWithText(content: 
                    string.Format(I18N.manager.GetText("Does it cost {0} star to buy this avatar"),
                    mAvatarInfo.star),
                success: () => {
                    StringBuilder sb = new StringBuilder();
                    JsonWriter w = new JsonWriter(sb);
                    w.WriteObjectStart();
                    w.WritePropertyName("aid");
                    w.Write(mAvatarInfo.aid);
                    w.WriteObjectEnd();
                    Debug.Log("++++++ " + sb.ToString());
                    byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
                    GameController.manager.StartCoroutine(Util.POSTHTTP
                        (url: NetworkController.manager.HttpBaseUrl + RequestUrl.buyAvatarUrl,
                    data: bytes,
                    token: GameController.manager.token,
                    succData: (data) => {
                        this.GetModel<IUserModel>().Star.Value = (int)data["star"];
                        mAvatarInfo.isHas = true;
                        this.GetModel<IUserModel>().AvatarNum.Value++;
                        mLockImage.gameObject.SetActiveFast(!mAvatarInfo.isHas);
                    }));
                },
                fail: () => {
                    Debug.Log("放弃购买");
                });
            } else {
                GameController.manager.warningAlert.ShowWithText
                    (string.Format(I18N.manager.GetText("This head needs {0} star"), mAvatarInfo.star));
            }
        }
    }
}

public class ApplyAvatarCommand : AbstractCommand {
    private readonly int mCurAid;

    public ApplyAvatarCommand(int curAid) {
        mCurAid = curAid;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("aid");
        w.Write(mCurAid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        GameController.manager.StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.changeAvatarUrl,
            data: bytes, token: GameController.manager.token,
            succData: (data) => {
                this.GetModel<IUserModel>().Aid.Value = (int)data["aid"];
                GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Successfully Set"));
            },
            code: (code) => {
                if (code == 423) {
                    GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Did not have"));
                }
            }));
    }
}

public class BuyEquipCommand : AbstractCommand {
    private EquipInfo mEquipInfo;

    public BuyEquipCommand(EquipInfo equipInfo) {
        mEquipInfo = equipInfo;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("eid");
        w.Write(mEquipInfo.eid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        if (this.GetModel<IUserModel>().Star.Value > mEquipInfo.star) {
            GameController.manager.infoConfirmAlert.ShowWithText(content: string.Format(I18N.manager.GetText("Whether to spend {0} star on this equip"),
                mEquipInfo.star),
            success: () => {
                GameController.manager.StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl +
                    RequestUrl.buyEquipUrl,
                data: bytes,
                token: GameController.manager.token,
                succData: (data) => {
                    this.GetModel<IUserModel>().Star.Value = (int)data["star"];
                    this.SendEvent<BuyEquipEvent>();
                }));
            },
            fail: () => {
                Debug.Log(I18N.manager.GetText("Give up to buy"));
            });
        } else {
            GameController.manager.warningAlert.ShowWithText(string.Format(I18N.manager.GetText("This equip requires {0} star"), 
                mEquipInfo.star));
        }
    }
}

public class ApplyEquipCommand : AbstractCommand {
    private EquipInfo mEquipInfo;

    public ApplyEquipCommand(EquipInfo equipInfo) {
        mEquipInfo = equipInfo;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("eid");
        w.Write(mEquipInfo.eid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        GameController.manager.StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl +
                    RequestUrl.changeEquipUrl,
                data: bytes, token: GameController.manager.token,
                succData: (data) => {
                    this.GetModel<IUserModel>().EquipInfo.Value = this.GetModel<IEquipModel>().EquipDic[(int)data["eid"]];
                    GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Successfully Set"));
                    this.SendEvent<ApplyEquipEvent>();
                },
                code: (code) => {
                    if (code == 423) {
                        GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Did not have"));
                    }
                }));
    }
}

public class CreateMatchCommand : AbstractCommand {
    protected override void OnExecute() {
        GameController.manager.StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl +
                  RequestUrl.createMatchUrl,
                  token: GameController.manager.token,
                  code: (code) => {
                      if (code == 200) {
                          this.SendEvent<UpdataMatchDetailEvent>();
                      }
                  }
              ));
    }
}

public class ChangePasswordCommand : AbstractCommand {
    private string mPassword;

    public ChangePasswordCommand(string password) {
        mPassword = password;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("password");
        w.Write(mPassword);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        GameController.manager.StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.modifyPersonalInfoUrl,
            data: bytes, token: GameController.manager.token,
            succData: (data) => {
                GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Modify Successfully"));
                this.GetModel<IUserModel>().Password.Value = mPassword;
            },
            code: (code) => {
                if (code == 423) {
                    GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Fail To Modify"));
                } else if (code == 404) {
                    GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Information Error"));
                }
            }));
    }
}

public class EnableStandAloneCommand : AbstractCommand {
    protected override void OnExecute() {
        GameController.manager.standAlone = true;
        TextAsset ta = Resources.Load<TextAsset>(Util.baseStandAlone + RequestUrl.loginUrl);
        JsonData data = JsonMapper.ToObject(ta.text);
        GameController.manager.token = (string)data["token"];
        this.GetModel<IUserModel>().ParseUserInfo(data);
        GameController.manager.userInfo = this.GetModel<IUserModel>().GetUserInfoPart();

        Util.DelayExecuteWithSecond(Util.btnASTime, () => {
            GameController.manager.warningAlert.ShowWithText(text: I18N.manager.GetText("Login Success"),
                callback: () => {
                    Util.LoadingScene(SceneID.Index);
                });
        });
    }
}

public class LoginCommand : AbstractCommand {
    private string mUserName;
    private string mPassword;
    private bool mIsRemember;

    public LoginCommand(string userName, string password, bool isRemember) {
        mUserName = userName;
        mPassword = password;
        mIsRemember = isRemember;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("UserName");
        w.Write(mUserName);
        w.WritePropertyName("Password");
        w.Write(mPassword);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        GameController.manager.StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.loginUrl,
            data: bytes, succData: (data) => {
                GameController.manager.token = (string)data["token"];
                this.GetModel<IUserModel>().ParseUserInfo(data);
                GameController.manager.userInfo = this.GetModel<IUserModel>().GetUserInfoPart();
                this.GetModel<IUserModel>().Password.Value = mPassword;
            }, code: (code) => {
                if (code == 200) {
                    Util.DelayExecuteWithSecond(Util.btnASTime, () => {
                        if (mUserName.ToLower() == "tast") {
                            GameController.manager.gameHelper.gameObject.SetActiveFast(true);
                        }
                        GameController.manager.warningAlert.ShowWithText(text: I18N.manager.GetText("Login Success"),
                            callback: () => {
                                this.GetModel<IUserModel>().RememberPassword.Value = mIsRemember ? 1 : 0;
                                Util.LoadingScene(SceneID.Index);
                            });
                    });

                } else if (code == 423) {
                    GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Password Error"));
                } else if (code == 404) {
                    GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("User not registered"));
                } else {
                    GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Unknown Error"));
                }
            }));
    }
}


public class RegisterCommand : AbstractCommand {
    private string mUserName;
    private string mPassword;

    public RegisterCommand(string userName, string password) {
        mUserName = userName;
        mPassword = password;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("UserName");
        w.Write(mUserName);
        w.WritePropertyName("Password");
        w.Write(mPassword);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        GameController.manager.StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.registerUrl,
            data: bytes, succData: (data) => {
                GameController.manager.token = (string)data["token"];
                this.GetModel<IUserModel>().ParseUserInfo(data);
                GameController.manager.userInfo = this.GetModel<IUserModel>().GetUserInfoPart();
                this.GetModel<IUserModel>().Password.Value = mPassword;
            }, code: (code) => {
                if (code == 200) {
                    GameController.manager.warningAlert.ShowWithText(text: I18N.manager.GetText("Registration Successful"), callback: () => {
                        Util.LoadingScene(SceneID.Index);
                    });
                } else if (code == 423) {
                    GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("User registered"));
                } else if (code == 425) {
                    GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Incorrect information format"));
                } else {
                    GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Unknown Error"));
                }
            }));
    }
}
