using UnityEditor;
using UnityEngine;
using EasyRoads3Dv3;
using System.Collections.Generic;

[CustomEditor(typeof(RouteNet))]
public class RouteNetEditor : Editor
{

    private RouteNet rNet;

    public ERRoad markers;

    public override void OnInspectorGUI() {
        rNet = target as RouteNet;
        base.OnInspectorGUI();

        EditorGUI.BeginChangeCheck();

        if (GUILayout.Button("BuildAllRoute")) {
            Undo.RecordObject(target, "BuildAllRoute");

            ERRoadNetwork net = new ERRoadNetwork();
            foreach (var r in rNet.allRoutes) {
                Debug.Log("Road Name : " + r.__roadName + " Points Count " + r.positions.Count);
                markers = net.GetRoadByName(r.__roadName);
                if (markers == null) {
                    Debug.LogError("NO SUCH ROAD.....CANCELED......");
                    continue;
                }

                r.resolution = 50;
                Vector3[] arr = markers.GetSplinePointsCenter();
                r.positions = new List<Vector3>(arr);
                for (int i = 0; i < r.positions.Count; i++) {
                    //Debug.Log(r.positions[i]);
                }
            }
            EditorUtility.SetDirty(target);
        }
    }
}