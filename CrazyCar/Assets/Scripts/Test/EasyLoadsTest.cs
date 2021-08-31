using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EasyLoadsTest : MonoBehaviour {
    public RouteManger routeManger = new RouteManger();
    public RouteNet routeNet;

    public float speed = 10;

    public Rigidbody rig;
    private float length;
    private enum PosType {
        LEFT = 0,
        CENTER = 1,
        RIGHT = 2
    }

    private PosType posType = PosType.CENTER;

    private void Start() {
        routeManger.InitPoint(routeNet.allRoutes[0].positions.ToArray());
    }

    private void Update() {
        if (Input.GetKeyDown(KeyCode.A)) {
            posType = PosType.LEFT;
        } else if (Input.GetKeyDown(KeyCode.S)) {
            posType = PosType.CENTER;
        } else if (Input.GetKeyDown(KeyCode.D)) {
            posType = PosType.RIGHT;
        }

        length += Time.deltaTime * speed;
        if (length >= routeManger.centerPoints.Count - 1) {
            length = routeManger.centerPoints.Count - 1;
        }

        if (posType == PosType.LEFT) {
            rig.transform.localPosition = routeManger.leftPoints[(int)(length)];
        } else if (posType == PosType.CENTER) {
            rig.transform.localPosition = routeManger.centerPoints[(int)(length)];
        } else {
            rig.transform.localPosition = routeManger.rightPoints[(int)(length)];
        }

    }
}
