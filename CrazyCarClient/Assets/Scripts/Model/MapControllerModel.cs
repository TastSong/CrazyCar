using PathCreation;
using QFramework;
using UnityEngine;

public interface IMapControllerModel : IModel {
    PathCreator PathCreator { get; set; }
    float RoadWidth { get; set; }

    Vector3 StartPos { get; set; }
}

public class MapControllerModel : AbstractModel, IMapControllerModel {
    public PathCreator PathCreator { get; set; }
    public float RoadWidth { get; set; }
    public Vector3 StartPos { get; set; }

    protected override void OnInit() {
        RoadWidth = 34;
    }
}