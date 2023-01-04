using UnityEngine;

public class AutoLODMeshUtility
{
    public static void Smooth2FlatShading(Mesh mesh)
    {
        Vector3[] oldVerts = mesh.vertices;
        int[] triangles = mesh.triangles;
        Vector3[] vertices = new Vector3[triangles.Length];
        Vector2[] oldUv = mesh.uv;
        bool hasUv = oldUv.Length != 0;
        Vector2[] oldUv2 = mesh.uv2;
        bool hasUv2 = oldUv2.Length != 0;
        Vector2[] oldUv3 = mesh.uv3;
        bool hasUv3 = oldUv3.Length != 0;
        Vector2[] oldUv4 = mesh.uv4;
        bool hasUv4 = oldUv4.Length != 0;
        Color[] oldColors = mesh.colors;
        bool hasColors = oldColors.Length != 0;

        Vector2[] uv = new Vector2[vertices.Length];
        Vector2[] uv2 = new Vector2[vertices.Length];
        Vector2[] uv3 = new Vector2[vertices.Length];
        Vector2[] uv4 = new Vector2[vertices.Length];
        Color[] colors = new Color[vertices.Length];

        BoneWeight[] oldBoneWeights = mesh.boneWeights;
        bool hasBones = oldBoneWeights.Length != 0;
        BoneWeight[] boneWeights = new BoneWeight[vertices.Length];

        for (int i = 0; i < triangles.Length; i++)
        {
            vertices[i] = oldVerts[triangles[i]];
            if(hasUv)
                uv[i] = oldUv[triangles[i]];
            if (hasUv2)
                uv2[i] = oldUv2[triangles[i]];
            if (hasUv3)
                uv3[i] = oldUv3[triangles[i]];
            if (hasUv4)
                uv4[i] = oldUv4[triangles[i]];
            if (hasColors)
                colors[i] = oldColors[triangles[i]];
            if(hasBones)    
                boneWeights[i] = oldBoneWeights[triangles[i]];
            triangles[i] = i;
        }
        if (triangles.Length > 65535)
            mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
        mesh.vertices = vertices;
        mesh.triangles = triangles;
        if (hasUv)
            mesh.uv = uv;
        if (hasUv2)
            mesh.uv2 = uv2;
        if (hasUv3)
            mesh.uv3 = uv3;
        if (hasUv4)
            mesh.uv4 = uv4;
        if (hasColors)
            mesh.colors = colors;
        if (hasBones)
            mesh.boneWeights = boneWeights;
        mesh.RecalculateNormals();
    }
}
