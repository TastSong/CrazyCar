#if UNITY_EDITOR
using System.IO;
using System.Xml;
using UnityEditor;
using System.Text;
using UnityEditor.Android;
using UnityEditor.Callbacks;

#if UNITY_IOS
using UnityEditor.iOS.Xcode;
#endif

public class WebViewPostProcessBuild : IPostGenerateGradleAndroidProject
{
    public int callbackOrder => 1;
    
    public void OnPostGenerateGradleAndroidProject(string basePath)
    {
        string manifestPath = GetManifestPath(basePath);
        AndroidManifest androidManifest = new AndroidManifest(manifestPath);

        androidManifest
            .SetHardwareAccelerated(true)
            .SetUsesCleartextTraffic(true)
            .UseCamera()
            .UseMicrophone()
            .UseGallery();

        androidManifest.Save();
    }

    private string GetManifestPath(string basePath)
    {
        var pathBuilder = new StringBuilder(basePath);
        pathBuilder.Append(Path.DirectorySeparatorChar).Append("src");
        pathBuilder.Append(Path.DirectorySeparatorChar).Append("main");
        pathBuilder.Append(Path.DirectorySeparatorChar).Append("AndroidManifest.xml");
        return pathBuilder.ToString();
    }

    [PostProcessBuild(100)]
    public static void OnPostprocessBuild(BuildTarget buildTarget, string path)
    {
#if UNITY_IOS
        if (buildTarget == BuildTarget.iOS) {
            string projPath = path + "/Unity-iPhone.xcodeproj/project.pbxproj";
            PBXProject proj = new PBXProject();
            proj.ReadFromString(File.ReadAllText(projPath));
#if UNITY_2019_3_OR_NEWER
            proj.AddFrameworkToProject(proj.GetUnityFrameworkTargetGuid(), "WebKit.framework", false);
#else
            proj.AddFrameworkToProject(proj.TargetGuidByName("Unity-iPhone"), "WebKit.framework", false);
#endif
            File.WriteAllText(projPath, proj.WriteToString());
        }
#endif
    }
}

internal class AndroidXmlDocument : XmlDocument {
    private string manifestPath;
    protected XmlNamespaceManager namespaceManager;
    public readonly string AndroidXmlNamespace = "http://schemas.android.com/apk/res/android";

    public AndroidXmlDocument(string path) {
        manifestPath = path;
        using (var reader = new XmlTextReader(manifestPath)) {
            reader.Read();
            Load(reader);
        }
        namespaceManager = new XmlNamespaceManager(NameTable);
        namespaceManager.AddNamespace("android", AndroidXmlNamespace);
    }

    public string Save() {
        return SaveAs(manifestPath);
    }

    public string SaveAs(string path) {
        using (var writer = new XmlTextWriter(path, new UTF8Encoding(false))) {
            writer.Formatting = Formatting.Indented;
            Save(writer);
        }
        return path;
    }
}

internal class AndroidManifest : AndroidXmlDocument
{
    private readonly XmlElement ManifestElement;

    public AndroidManifest(string path) : base(path) {
        ManifestElement = SelectSingleNode("/manifest") as XmlElement;
    }

    private XmlAttribute CreateAndroidAttribute(string key, string value) {
        XmlAttribute attr = CreateAttribute("android", key, AndroidXmlNamespace);
        attr.Value = value;
        return attr;
    }

    internal XmlNode GetActivityWithLaunchIntent() 
    {
        return ActivityWithLaunchIntent ?? SelectSingleNode(XPath, namespaceManager);
    }

    private const string NodeKey = "name";
    private const string UsesFeature = "uses-feature";
    private const string UsesPermission = "uses-permission";

    private const string CameraPermission = "android.permission.CAMERA";
    private const string CameraFeature = "android.hardware.camera";

    private const string MicrophonePermission = "android.permission.MICROPHONE";
    private const string MicrophoneFeature = "android.hardware.microphone";

    private const string ReadExternalStoragePermission = "android.permission.READ_EXTERNAL_STORAGE";
    private const string WriteExternalStoragePermission = "android.permission.Write_EXTERNAL_STORAGE";

    private const string UsesCleartextTrafficAttribute = "usesCleartextTraffic";
    private const string HardwareAcceleratedAttribute = "hardwareAccelerated";

    internal void UpdateAttribute(XmlElement activity, string attribute, bool enabled)
    {
        string value = enabled.ToString();

        if (activity.GetAttribute(attribute, AndroidXmlNamespace) != value)
        {
            activity.SetAttribute(attribute, AndroidXmlNamespace, value);
        }
    }

    internal void UpdateNode(string nodeName, string nodeValue)
    {
        if (SelectNodes($"/manifest/{nodeName}[@android:{NodeKey}='{nodeValue}']", namespaceManager).Count == 0)
        {
            var elem = CreateElement(nodeName);
            elem.Attributes.Append(CreateAndroidAttribute(NodeKey, nodeValue));
            ManifestElement.AppendChild(elem);
        }
    }

    internal void UseFeature(string feature) => UpdateNode(UsesFeature, feature);
    internal void UsePermission(string permission) => UpdateNode(UsesPermission, permission);

    private static XmlNode ActivityWithLaunchIntent = null;
    private readonly string XPath = "/manifest/application/activity[intent-filter/action/@android:name='android.intent.action.MAIN' and intent-filter/category/@android:name='android.intent.category.LAUNCHER']";

    internal AndroidManifest SetUsesCleartextTraffic(bool enabled)
    {
        XmlElement activity = GetActivityWithLaunchIntent() as XmlElement;
        UpdateAttribute(activity, UsesCleartextTrafficAttribute, enabled);
        return this;
    }
    
    internal AndroidManifest SetHardwareAccelerated(bool enabled)
    {
        XmlElement activity = GetActivityWithLaunchIntent() as XmlElement;
        UpdateAttribute(activity, HardwareAcceleratedAttribute, enabled);
        return this;
    }

    internal AndroidManifest UseCamera()
    {
        UsePermission(CameraPermission);
        UseFeature(CameraFeature);
        return this;
    }

    internal AndroidManifest UseMicrophone()
    {
        UsePermission(MicrophonePermission);
        UseFeature(MicrophoneFeature);
        return this;
    }

    internal AndroidManifest UseGallery()
    {
        UsePermission(ReadExternalStoragePermission);
        UsePermission(WriteExternalStoragePermission);
        return this;
    }
}
#endif
