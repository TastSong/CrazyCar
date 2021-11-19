using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;

public class CrazyCar : Architecture<CrazyCar> {
    protected override void Init() {
        this.RegisterModel<IPlayerInfoModel>(new PalyerInfoModel());
    }
}

