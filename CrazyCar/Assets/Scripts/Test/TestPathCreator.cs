using PathCreation;
using PathCreation.Examples;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class TestPathCreator : MonoBehaviour {
    public PathCreator pathCreator;
    public RoadMeshCreator roadMeshCreator;
    public GameObject targetGO;
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

        if (Input.GetKeyDown(KeyCode.K)) {
            IsTurnover();
        }

        //if (Input.GetKeyDown(KeyCode.A) && IsTurnover()) {
        //    float distanceTravelled = pathCreator.path.GetClosestDistanceAlongPath(transform.position);
        //    transform.rotation = Quaternion.Euler(pathCreator.path.GetRotationAtDistance(distanceTravelled, EndOfPathInstruction.Loop).eulerAngles +
        //         new Vector3(0, 0, 90));
        //}
    }

    private bool IsOutside() {
        Vector3 closestPos = pathCreator.path.GetClosestPointOnPath(transform.position);
        float dis = Vector3.Distance(closestPos, transform.position);
        Debug.LogError("++++ Dis = " + dis);
        return dis > roadWidth;
    }

    private void IsTurnover() {
        float time = pathCreator.path.GetClosestTimeOnPath(targetGO.transform.position);
        Vector3 pathNor = pathCreator.path.GetNormal(time);
        Debug.LogError("time = " + time);
        float a = GetAngle(pathNor, targetGO.transform.up);
    }

    private float GetAngle(Vector3 a, Vector3 b) {
        Vector3 c = Vector3.Cross(a, b);
        float angle = Vector3.Angle(a, b);

        // b 到 a 的夹角
        float sign = Mathf.Sign(Vector3.Dot(c.normalized, Vector3.Cross(a.normalized, b.normalized)));
        float signed_angle = angle * sign;

        Debug.Log("b -> a :" + signed_angle + " ; a " + a + " b " + b);

        //// a 到 b 的夹角
        //sign = Mathf.Sign(Vector3.Dot(c.normalized, Vector3.Cross(b.normalized, a.normalized)));
        //signed_angle = angle * sign;

        //Debug.Log("a -> b :" + signed_angle);

        return signed_angle;
    }

}
