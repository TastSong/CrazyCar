using PathCreation;
using PathCreation.Examples;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestPathCreator : MonoBehaviour {
    public PathCreator pathCreator;
    public RoadMeshCreator roadMeshCreator;
    public float offsetTurnover = 4;

    private float roadWidth;

    private void Start() {
        Debug.LogError("+++++ RoadWidth = " + roadMeshCreator.roadWidth);
        roadWidth = roadMeshCreator.roadWidth;
    }

    void Update() {
        if (Input.GetKeyDown(KeyCode.Space) && IsOutside()) {
            transform.position = pathCreator.path.GetClosestPointOnPath(transform.position);
        }

        if (Input.GetKeyDown(KeyCode.A) && IsTurnover()) {
            float distanceTravelled = pathCreator.path.GetClosestDistanceAlongPath(transform.position);
            transform.rotation = Quaternion.Euler(pathCreator.path.GetRotationAtDistance(distanceTravelled, EndOfPathInstruction.Loop).eulerAngles +
                 new Vector3(0, 0, 90));
        }
    }

    private bool IsOutside() {
        Vector3 closestPos = pathCreator.path.GetClosestPointOnPath(transform.position);
        float dis = Vector3.Distance(closestPos, transform.position);
        Debug.LogError("++++ Dis = " + dis);
        return dis > roadWidth;
    }

    private bool IsTurnover() {
        float distanceTravelled = pathCreator.path.GetClosestDistanceAlongPath(transform.position);
        var nor = pathCreator.path.GetRotationAtDistance(distanceTravelled, EndOfPathInstruction.Loop);
        float targetZ = (nor.eulerAngles.z + 90) % 360;
        float z = transform.localRotation.eulerAngles.z;
        Debug.LogError("+++++ nor = " + nor.eulerAngles + "  " + transform.localRotation.eulerAngles);

        if (z < 0) {
            z = 360 + z;
        } else if (z > 360) {
            z = z % 360;
        } 
        return Mathf.Abs(z - targetZ) > offsetTurnover;
    }
}
