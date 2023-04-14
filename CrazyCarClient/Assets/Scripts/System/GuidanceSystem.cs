using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public enum GuidanceCanvasType {
    UIController = 0,
    Test
}

public interface IGuidanceSystem : ISystem {
    public Canvas UIControllerCanvas { get; set; }

    public Canvas TestCanvas { get; set; }

    public Canvas GetTargetCanvas(GuidanceCanvasType canvasType);
}

public class GuidanceSystem : AbstractSystem, IGuidanceSystem {
    public Canvas UIControllerCanvas { get; set; }
    public Canvas TestCanvas { get; set; }

    public Canvas GetTargetCanvas(GuidanceCanvasType canvasType) {
        if (canvasType == GuidanceCanvasType.UIController) {
            return UIControllerCanvas;
        } else if(canvasType == GuidanceCanvasType.Test) {
            return TestCanvas;
        } else {
            return null;
        }
    }

    protected override void OnInit() {
        
    }
}
