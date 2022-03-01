using PathCreation;
using PathCreation.Examples;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestPathCreator : MonoBehaviour
{
    public PathCreator pathCreator;
    public RoadMeshCreator roadMeshCreator;

    private float roadWidth;

    private void Start() {
        Debug.LogError("+++++ RoadWidth = " + roadMeshCreator.roadWidth);
        roadWidth = roadMeshCreator.roadWidth;
    }

    void Update() {
        if (Input.GetKeyDown(KeyCode.Space) && IsOutside()) {
            transform.position = pathCreator.path.GetClosestPointOnPath(transform.position);
            IsTurnover();
        }

        if (Input.GetKeyDown(KeyCode.A) && IsTurnover()) {
            float distanceTravelled = pathCreator.path.GetClosestDistanceAlongPath(transform.position);
            transform.rotation = pathCreator.path.GetRotationAtDistance(distanceTravelled, EndOfPathInstruction.Loop);
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
        return Mathf.Abs(nor.eulerAngles.z - transform.localRotation.eulerAngles.z) > 14;
    }
}
