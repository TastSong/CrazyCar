using TFramework;
using System;
using Utils;

[Serializable]
public class UserInfo {
    public string name;
    public int aid;
    public int uid;
    public int star;
    public bool isVIP;
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
    BindableProperty<int> TravelTimes { get; }
    BindableProperty<int> AvatarNum { get; }
    BindableProperty<int> MapNum { get; }
    BindableProperty<EquipInfo> EquipInfo { get; }

    void SetUserInfoPart(UserInfo userInfo);
}

public class UserModel : AbstractModel, IUserModel {
    public BindableProperty<string> Name { get; set; } = new BindableProperty<string>() { Value = "" };
    public BindableProperty<string> Password { get; set; } = new BindableProperty<string>() { Value = "" };
    public BindableProperty<int> Aid { get; set; } = new BindableProperty<int>();
    public BindableProperty<int> Uid { get; set; } = new BindableProperty<int>();
    public BindableProperty<int> Star { get; set; } = new BindableProperty<int>();
    public BindableProperty<bool> IsVIP { get; set; } = new BindableProperty<bool>();
    public BindableProperty<int> TravelTimes { get; set; } = new BindableProperty<int>();
    public BindableProperty<int> AvatarNum { get; set; } = new BindableProperty<int>();
    public BindableProperty<int> MapNum { get; set; } = new BindableProperty<int>();
    public BindableProperty<EquipInfo> EquipInfo { get; set; } = new BindableProperty<EquipInfo>();

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
    }

    protected override void OnInit() {
        var storage = this.GetUtility <IPlayerPrefsStorage>();
        Name.Value = storage.LoadString(PrefKeys.userName);
        Name.Register(v => storage.SaveString(PrefKeys.userName, v));
        Password.Value = storage.LoadString(PrefKeys.password);
        Password.Register(v => storage.SaveString(PrefKeys.password, v));
    }
   
}
