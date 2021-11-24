using UnityEngine;

namespace Assets.ImagyVFX.Scripts.MoveableLineRenderer
{
    internal static class TurbulenceUtil
    {
        public static Vector3 Calc(Vector3 position, float speed, float scale, float height, float gravity)
        {
            var sTime = Time.deltaTime * speed;

            float xCoord = position.x + sTime;
            float yCoord = position.y + sTime;
            float zCoord = position.z + sTime;

            position.x += (Mathf.PerlinNoise(yCoord, zCoord) - 0.5f) * height;
            position.y += (Mathf.PerlinNoise(xCoord, zCoord) - 0.5f) * height - gravity;
            position.z += (Mathf.PerlinNoise(xCoord, yCoord) - 0.5f) * height;

            return position;
        }
    }
}