using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;

public interface IIndexCarSystem : ISystem {
    GameObject CarGO { get; set; }
    MPlayerStyle MPlayerStyle { get; set; }
}

public class IndexCarSystem : AbstractSystem, IIndexCarSystem {
    public GameObject CarGO { get; set; } = new GameObject();
    public MPlayerStyle MPlayerStyle { get; set; } = new MPlayerStyle();

    protected override void OnInit() {
        
    }
}
