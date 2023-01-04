#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;

public class PartnerPostProcessBuild : IPreprocessBuildWithReport
{
    public int callbackOrder => 0;

    public void OnPreprocessBuild(BuildReport report)
    {
        PartnerSO partnerSO = Resources.Load<PartnerSO>("Partner");
        string url = partnerSO.GetSubdomain();

        if (string.IsNullOrEmpty(url))
        {
            bool result = true;
            
            if (!Application.isBatchMode)
            {
                result = EditorUtility.DisplayDialog("Build Error", "Partner subdomain can not be empty. Go to 'Ready Player Me > WebView Partner Editor' menu and the fill the input field with your partner subdomain or 'demo' keyword.", "Use 'demo' subdomain", "Cancel build");
            }

            if (result)
            {
                partnerSO.Subdomain = "demo";
                EditorUtility.SetDirty(partnerSO);
                AssetDatabase.SaveAssets();
            }
            else
            {
                throw new BuildFailedException("Build cancelled: Partner subdomain is not set.");
            }
        }
        else if(url == "demo")
        {
            bool result = EditorUtility.DisplayDialog("Build warning", "You are using 'demo' subdomain. If you already have a partner subdomain please go to 'Ready Player Me > WebView Partner Editor' menu and the fill the input field with your partner subdomain", "Continue with 'demo' subdomain", "Cancel build");

            if (!result)
            {
                throw new BuildFailedException("Build cancelled: Using demo subdomain.");
            }
        }
    }
}
#endif
