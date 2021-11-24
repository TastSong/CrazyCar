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

public class ApplyAvatar : AbstractCommand {
    private readonly int mCurAid;

    public ApplyAvatar(int curAid) {
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
