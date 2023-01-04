using QFramework;
using System;
using Utils;
using UnityEngine;
using LitJson;

[Serializable]
public class UserInfo {
    public string name;
    public int aid;
    public int uid;
    public int star;
    public bool isVIP;
    public bool isSuperuser;
    public int travelTimes;
    public int avatarNum;
    public int mapNum;
    public EquipInfo equipInfo = new EquipInfo();
}

public interface IUserModel : IModel {
    BindableProperty<string> Name { get; }
    BindableProperty<string> Password { get; }
    BindableProperty<int> Aid { get; }
    BindableProperty<int> Uid { get; }
    BindableProperty<int> Star { get; }
    BindableProperty<bool> IsVIP { get; }
    BindableProperty<bool> IsSuperuser { get; }
    BindableProperty<int> TravelTimes { get; }
    BindableProperty<int> AvatarNum { get; }
    BindableProperty<int> MapNum { get; }
    BindableProperty<EquipInfo> EquipInfo { get; }
    BindableProperty<int> RememberPassword { get; }
    BindableProperty<bool> IsCompleteGuidance { get; }
    void SetUserInfoPart(UserInfo userInfo);
    UserInfo GetUserInfo();
}

public class UserModel : AbstractModel, IUserModel {
    public BindableProperty<string> Name { get; } = new BindableProperty<string>();
    public BindableProperty<string> Password { get; } = new BindableProperty<string>();
    public BindableProperty<int> Aid { get; } = new BindableProperty<int>();
    public BindableProperty<int> Uid { get; } = new BindableProperty<int>();
    public BindableProperty<int> Star { get; } = new BindableProperty<int>();
    public BindableProperty<bool> IsVIP { get; } = new BindableProperty<bool>();
    public BindableProperty<int> TravelTimes { get; } = new BindableProperty<int>();
    public BindableProperty<int> AvatarNum { get; } = new BindableProperty<int>();
    public BindableProperty<int> MapNum { get; } = new BindableProperty<int>();
    public BindableProperty<EquipInfo> EquipInfo { get; } = new BindableProperty<EquipInfo>();
    public BindableProperty<int> RememberPassword { get; } = new BindableProperty<int>();

    public BindableProperty<bool> IsSuperuser { get; } = new BindableProperty<bool>();
    public BindableProperty<bool> IsCompleteGuidance { get; } = new BindableProperty<bool>();

    public UserInfo GetUserInfo() {
        UserInfo userInfo = new UserInfo();
        userInfo.uid = Uid;
        userInfo.aid = Aid;
        userInfo.avatarNum = AvatarNum;
        userInfo.equipInfo = EquipInfo.Value;
        userInfo.isSuperuser = IsSuperuser;
        userInfo.isVIP = IsVIP;
        userInfo.mapNum = MapNum;
        userInfo.name = Name;
        userInfo.star = Star;
        userInfo.travelTimes = TravelTimes;
        return userInfo;
    }

    public void SetUserInfoPart(UserInfo userInfo) {
        Name.Value = userInfo.name;
        Aid.Value = userInfo.aid;
        Uid.Value = userInfo.uid;
        Star.Value = userInfo.star;
        IsVIP.Value = userInfo.isVIP;
        TravelTimes.Value = userInfo.travelTimes;
        AvatarNum.Value = userInfo.avatarNum;
        MapNum.Value = userInfo.mapNum;
        EquipInfo.Value = userInfo.equipInfo;
        IsSuperuser.Value = userInfo.isSuperuser;
    }

    protected override void OnInit() {
        var storage = this.GetUtility <IPlayerPrefsStorage>();
        Name.Value = storage.LoadString(PrefKeys.userName);
        Name.Register((v) => { 
            if(PlayerPrefs.GetInt(PrefKeys.rememberPassword) == 1) {
                storage.SaveString(PrefKeys.userName, v);
            }
        });

        Password.Value = storage.LoadString(PrefKeys.password);
        Password.Register((v) => {
            if (PlayerPrefs.GetInt(PrefKeys.rememberPassword) == 1) {
                storage.SaveString(PrefKeys.password, v);
            }           
        });

        RememberPassword.Value = storage.LoadInt(PrefKeys.rememberPassword);
        RememberPassword.Register(v =>
            storage.SaveInt(PrefKeys.rememberPassword, v)
        );

        IsCompleteGuidance.Value = storage.LoadInt(PrefKeys.isCompleteGuidance) == 1;
        IsCompleteGuidance.Register(v =>
            storage.SaveInt(PrefKeys.isCompleteGuidance, v ? 1 : 0)
        );
    }
}
