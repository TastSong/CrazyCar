using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;

public class CrazyCar : Architecture<CrazyCar> {
    protected override void Init() {
        RegisterModel<IPlayerInfoModel>(new PalyerInfoModel());
        RegisterModel<IUserModel>(new UserModel());
        RegisterUtility<IPlayerPrefsStorage>(new PlayerPrefsStorage());
    }
}

