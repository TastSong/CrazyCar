using System.IO;
using UnityEditor;
using UnityEngine;
using System.Collections.Generic;
using Object = UnityEngine.Object;

public class AnimationExtractor : Editor
{
    public struct AnimClipData
    {
        public string assetPath;
        public string assetName;
        public string clipDirectory;
    }

    private const string PreviewAnimPrefix = "__preview__";

    [MenuItem("Assets/Extract Animations", false, 9999)]
    private static AnimClipData ExtractAnimations()
    {
        AnimClipData data = new AnimClipData();
        data.assetPath = AssetDatabase.GetAssetPath(Selection.activeObject);
        data.assetName = Path.GetFileName(data.assetPath);
        data.clipDirectory = Path.GetDirectoryName(data.assetPath);

        // Get all animations and create animation clip array to store them
        Object[] assetObjects = AssetDatabase.LoadAllAssetsAtPath(data.assetPath);
        List<AnimationClip> animationClips = new List<AnimationClip>();

        foreach (var assetObject in assetObjects)
        {
            // Only add valid animation clips
            if (assetObject is AnimationClip && !assetObject.name.StartsWith(PreviewAnimPrefix))
            {
                animationClips.Add(assetObject as AnimationClip);
            }
        }

        foreach (var animationClip in animationClips)
        {
            AnimationClip temp = new AnimationClip();
            // Copy, create and save assets
            EditorUtility.CopySerialized(animationClip, temp);
            var validatedName = string.Join("_", animationClip.name.Split(Path.GetInvalidFileNameChars()));
            AssetDatabase.CreateAsset(temp, $"{data.clipDirectory}/{validatedName}.anim");
        }

        return data;
    }

    [MenuItem("Assets/Extract Animations and Delete File", false, 9999)]
    private static void ExtractAnimationsAndDeleteFile()
    {
        AnimClipData data = ExtractAnimations();

        if (EditorUtility.DisplayDialog("File Deletion Warning", $"Are you sure you want to delete {data.assetName}?", "Okay", "Cancel"))
        {
            AssetDatabase.DeleteAsset(data.assetPath);
        }
    }

    [MenuItem("Assets/Extract Animations", true)]
    [MenuItem("Assets/Extract Animations and Delete File", true)]
    private static bool ExtractAnimationsValidation()
    {
        bool isFbx = false;
        bool isGameObject = false;
        Object activeObject = Selection.activeObject;

        if (activeObject)
        {
            string assetPath = AssetDatabase.GetAssetPath(activeObject);
            isFbx = Path.GetExtension(assetPath).ToLower() == ".fbx";
            isGameObject = activeObject.GetType() == typeof(GameObject);
        }

        return isGameObject && isFbx;
    }
}
