using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public interface IIndexCarSystem : ISystem {
    public GameObject CarGO { get; set; }
    public MPlayerStyle MPlayerStyle { get; set; }
}

public class IndexCarSystem : AbstractSystem, IIndexCarSystem {
    public GameObject CarGO { get; set; }
    public MPlayerStyle MPlayerStyle { get; set; }

    protected override void OnInit() {
        
    }
}
