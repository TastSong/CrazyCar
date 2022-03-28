using PathCreation;
using QFramework;

public interface IMapControllerModel : IModel {
    PathCreator PathCreator { get; set; }
    float RoadWidth { get; set; }
}

public class MapControllerModel : AbstractModel, IMapControllerModel {
    public PathCreator PathCreator { get; set; }
    public float RoadWidth { get; set; }

    protected override void OnInit() {
        RoadWidth = 34;
    }
}