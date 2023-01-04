using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using System.Collections;
using cn.mob.unity3d.sdkporter;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System;


#if UNITY_IOS

using UnityEditor.iOS.Xcode;

#if UNITY_2017_2_OR_NEWER
using UnityEditor.iOS.Xcode.Extensions;
#endif
using System.Reflection;
#endif

public class MOBPostProcessBuild
{
    static ArrayList platformJsList;
    static string MobAppKey;
    //[PostProcessBuild]
#if UNITY_IOS
    [PostProcessBuildAttribute(88)]
    public static void onPostProcessBuild(BuildTarget target, string targetPath)
    {
        MobAppKey = "";
        if (target != BuildTarget.iOS)
        {
            Debug.LogWarning("Target is not iPhone. XCodePostProcess will not run");
            return;
        }

        initMobAppKeyInfo();

        //拉取配置文件中的数据
        MOBXCodeEditorModel xcodeModel = new MOBXCodeEditorModel();
        xcodeModel.MobAppKey = MobAppKey;
        xcodeModel.LoadMobpds();
        platformJsList = xcodeModel.platformJsList;
        //导入文件
        PBXProject xcodeProj = new PBXProject();
        string xcodeProjPath = targetPath + "/Unity-iPhone.xcodeproj/project.pbxproj";
        xcodeProj.ReadFromFile(xcodeProjPath);
        //xcode Target


        string xcodeTargetGuid = null;
        string xcodeFrameworkTargetGuid = null;

#if UNITY_2019_3_OR_NEWER

        xcodeFrameworkTargetGuid = xcodeProj.GetUnityFrameworkTargetGuid();
        xcodeTargetGuid = xcodeProj.GetUnityMainTargetGuid();
        xcodeProj.AddFileToBuild(xcodeTargetGuid, xcodeProj.GetTargetProductFileRef(xcodeFrameworkTargetGuid));

#else
        
        xcodeTargetGuid = xcodeProj.TargetGuidByName("Unity-iPhone");
        xcodeFrameworkTargetGuid = xcodeTargetGuid;
#endif
        xcodeProj.AddBuildProperty(xcodeFrameworkTargetGuid, "ENABLE_BITCODE", "NO");
        //plist路径targetPath
        string plistPath = targetPath + "/Info.plist";
        PlistDocument plistDocument = new PlistDocument();
        plistDocument.ReadFromFile(plistPath);
        PlistElementDict plistElements = plistDocument.root.AsDict();

        //添加 MOBAppkey MOBAppSecret
        AddAPPKey(plistElements);
        //添加权限 等 
        AddPermissions(xcodeModel, plistElements);
        //添加白名单 
        AddLSApplicationQueriesSchemes(xcodeModel, plistElements);
        //添加 URLSchemes
        AddURLSchemes(xcodeModel, plistElements);
        //添加 InfoPlistSet
        AddInfoPlistSet(xcodeModel, plistElements);
        //写入 info.plist
        plistDocument.WriteToFile(plistPath);

        //添加 BuildSettings
        AddBuildSettings(xcodeModel, xcodeProj, xcodeTargetGuid);
       
        //根据配置文件加载资源及xcode设置
        bool hasMobFramework = false;

        foreach (MOBPathModel pathModel in xcodeModel.folders)
        {

            AddFramework(pathModel.filePath, targetPath, xcodeTargetGuid, xcodeFrameworkTargetGuid, pathModel, xcodeProj, ref hasMobFramework, xcodeModel);
            AddStaticLibrary(pathModel.filePath, targetPath, xcodeFrameworkTargetGuid, pathModel, xcodeProj);
            AddHeader(pathModel.filePath, targetPath, xcodeFrameworkTargetGuid, pathModel, xcodeProj);
            AddBundle(pathModel.filePath, targetPath, xcodeTargetGuid, pathModel, xcodeProj);
            AddOtherFile(pathModel.filePath, targetPath, xcodeTargetGuid, pathModel, xcodeProj, xcodeModel.fileFlags);
        }
#if UNITY_2018_1_OR_NEWER
        
#else
        AddCapability(xcodeModel, xcodeProj, xcodeTargetGuid, targetPath);
#endif
        //加入系统Framework
        AddSysFrameworks(xcodeModel, xcodeProj, xcodeFrameworkTargetGuid, targetPath);
        //加入 xcodeModel.frameworks 中指定的 framework
        AddXcodeModelFrameworks(xcodeModel, xcodeProj, xcodeFrameworkTargetGuid, targetPath);
        xcodeProj.WriteToFile(xcodeProjPath);
#if UNITY_2018_1_OR_NEWER
        AddCapability(xcodeModel, xcodeProj, xcodeTargetGuid, targetPath);
#endif

    }

    private static void initMobAppKeyInfo()
    {
        var files = System.IO.Directory.GetFiles(Application.dataPath, "MOB.keypds", System.IO.SearchOption.AllDirectories);
        string filePath = files[0];
        FileInfo projectFileInfo = new FileInfo(filePath);
        if (projectFileInfo.Exists)
        {
            StreamReader sReader = projectFileInfo.OpenText();
            string contents = sReader.ReadToEnd();
            sReader.Close();
            sReader.Dispose();
            Hashtable datastore = (Hashtable)MiniJSON.jsonDecode(contents);
            string appKey = (string)datastore["MobAppKey"];
            //string appSecret = (string)datastore["MobAppSecret"];
            MobAppKey = appKey;

        }
        else
        {
            Debug.LogWarning("MOB.keypds no find");
        }
    }

    //添加系统Framework
    private static void AddSysFrameworks(MOBXCodeEditorModel xcodeModel, PBXProject xcodeProj, string xcodeTargetGuid, string xcodeTargetPath)
    {
        foreach (string sysFramework in xcodeModel.sysFrameworks)
        {
            xcodeProj.AddFrameworkToProject(xcodeTargetGuid, sysFramework, false);
        }
    }

    //添加 xcodeModel.frameworks 中指定的 framework shareSDK子平台的framework
    private static void AddXcodeModelFrameworks(MOBXCodeEditorModel xcodeModel, PBXProject xcodeProj, string xcodeTargetGuid, string xcodeTargetPath)
    {
        foreach (MOBPathModel pathModel in xcodeModel.frameworks)
        {
            if (pathModel.filePath.Contains(".framework") && !pathModel.filePath.Contains("MOBFoundation.framework"))
            {
                string frameworkPath = pathModel.filePath.Replace(pathModel.rootPath, "");


                string savePath = xcodeTargetPath + frameworkPath;
                int tempIndex = frameworkPath.LastIndexOf("\\");
                if (tempIndex == -1)
                {
                    tempIndex = frameworkPath.LastIndexOf("/");
                }
                string saveFrameworkPath = frameworkPath.Substring(0, tempIndex);
                //将 framework copy到指定目录
                DirectoryInfo frameworkInfo = new DirectoryInfo(pathModel.filePath);
                DirectoryInfo saveFrameworkInfo = new DirectoryInfo(savePath);
                CopyAll(frameworkInfo, saveFrameworkInfo);
                //将 framework 加入 proj中
#if UNITY_2017_1_OR_NEWER
                xcodeProj.AddFileToBuildSection(xcodeTargetGuid, xcodeProj.AddFrameworksBuildPhase(xcodeTargetGuid), xcodeProj.AddFile(frameworkPath.Substring(1), "MOB" + frameworkPath, PBXSourceTree.Absolute));
#else
                xcodeProj.AddFileToBuild(xcodeTargetGuid, xcodeProj.AddFile(frameworkPath.Substring(1), "MOB" + frameworkPath, PBXSourceTree.Absolute));
#endif
                //将 build setting 设置
                xcodeProj.AddBuildProperty(xcodeTargetGuid, "FRAMEWORK_SEARCH_PATHS", "$(SRCROOT)" + saveFrameworkPath.Replace("\\", "/"));
            }
            else
            {
                Debug.LogWarning(pathModel.filePath + " no framework");
            }
        }
    }

    //添加 BuildSettings
    private static void AddBuildSettings(MOBXCodeEditorModel xcodeModel, PBXProject xcodeProj, string xcodeTargetGuid)
    {
        Hashtable buildSettings = xcodeModel.buildSettings;
        foreach (string key in buildSettings.Keys)
        {
            ArrayList settings = (ArrayList)buildSettings[key];
            foreach (string setStr in settings)
            {
                xcodeProj.AddBuildProperty(xcodeTargetGuid, key, setStr);
            }
        }
    }
    //添加其他资源
    private static void AddOtherFile(string secondFilePath, string xcodeTargetPath, string xcodeTargetGuid, MOBPathModel pathModel, PBXProject xcodeProj, Hashtable fileFlags)
    {
        string[] secondDirectories = Directory.GetFiles(secondFilePath, "*", SearchOption.AllDirectories);
        foreach (string lastFilePath in secondDirectories)
        {
            if ((secondFilePath.EndsWith("SDK/ShareSDK") || secondFilePath.EndsWith("SDK\\ShareSDK")) && (lastFilePath.Contains("Support/PlatformSDK") || lastFilePath.Contains("Support\\PlatformSDK")))
            {
                continue;
            }
            //			Debug.LogWarning("lastFilePath:" + lastFilePath);
            if (!lastFilePath.Contains(".framework") &&
                !lastFilePath.Contains(".a") &&
                !lastFilePath.Contains(".h") &&
                !lastFilePath.Contains(".bundle") &&
                !lastFilePath.Contains(".DS_Store") &&
                !lastFilePath.Contains(".meta"))
            {
                string otherFilePath = lastFilePath.Replace(pathModel.rootPath, "");


                int index = otherFilePath.LastIndexOf("\\");
                int fileNameIndex = 2;
                if (index == -1)
                {
                    fileNameIndex = 1;
                    index = otherFilePath.LastIndexOf("/");
                }
                //项目目录
                string saveOtherFilePath = otherFilePath.Substring(0, index);
                string fileName = otherFilePath.Substring(index + fileNameIndex);
                //存放的本地目录
                string saveDirectory = xcodeTargetPath + saveOtherFilePath;
                if (!Directory.Exists(saveDirectory))
                {
                    Directory.CreateDirectory(saveDirectory);
                }
                //将其他文件拷贝到指定目录
                FileInfo fileInfo = new FileInfo(lastFilePath);
                string savePath = xcodeTargetPath + otherFilePath;
                fileInfo.CopyTo(savePath, true);
                //将.a 加入 proj中

                if (fileFlags.ContainsKey(fileName))
                {
                    string flag = (string)fileFlags[fileName];
                    //Debug.Log(flag);
                    xcodeProj.AddFileToBuildWithFlags(xcodeTargetGuid, xcodeProj.AddFile(otherFilePath.Substring(1), "MOB" + otherFilePath, PBXSourceTree.Absolute), flag);
                }
                else
                {
#if UNITY_2017_1_OR_NEWER
                    xcodeProj.AddFileToBuildSection(xcodeTargetGuid, xcodeProj.AddFrameworksBuildPhase(xcodeTargetGuid), xcodeProj.AddFile(otherFilePath.Substring(1), "MOB" + otherFilePath, PBXSourceTree.Absolute));

#else
                    xcodeProj.AddFileToBuild(xcodeTargetGuid, xcodeProj.AddFile(otherFilePath.Substring(1), "MOB" + otherFilePath, PBXSourceTree.Absolute));
#endif
                }
            }
        }
    }
    //添加 .h文件
    private static void AddHeader(string secondFilePath, string xcodeTargetPath, string xcodeTargetGuid, MOBPathModel pathModel, PBXProject xcodeProj)
    {
        string[] secondDirectories = Directory.GetFiles(secondFilePath, "*.h", SearchOption.AllDirectories);
        ArrayList savePathArray = new ArrayList();
        foreach (string lastFilePath in secondDirectories)
        {
            if ((secondFilePath.EndsWith("SDK/ShareSDK") || secondFilePath.EndsWith("SDK\\ShareSDK")) && (lastFilePath.Contains("Support/PlatformSDK") || lastFilePath.Contains("Support\\PlatformSDK")))
            {
                continue;
            }
            if (!lastFilePath.Contains(".framework"))
            {
                string headerPath = lastFilePath.Replace(pathModel.rootPath, "");

                int index = headerPath.LastIndexOf("\\");
                if (index == -1)
                {
                    index = headerPath.LastIndexOf("/");
                }
                //项目目录
                string saveHeaderPath = headerPath.Substring(0, index);
                //存放的本地目录
                string saveDirectory = xcodeTargetPath + saveHeaderPath;
                if (!Directory.Exists(saveDirectory))
                {
                    Directory.CreateDirectory(saveDirectory);
                }
                //将.h copy到指定目录
                FileInfo fileInfo = new FileInfo(lastFilePath);
                string savePath = xcodeTargetPath + headerPath;
                fileInfo.CopyTo(savePath, true);
                //将.h 加入 proj中
#if UNITY_2017_1_OR_NEWER
                xcodeProj.AddFileToBuildSection(xcodeTargetGuid, xcodeProj.AddResourcesBuildPhase(xcodeTargetGuid),xcodeProj.AddFile(headerPath.Substring(1), "MOB" + headerPath, PBXSourceTree.Absolute));
#else
                xcodeProj.AddFileToBuild(xcodeTargetGuid,xcodeProj.AddFile(headerPath.Substring(1), "MOB" + headerPath, PBXSourceTree.Absolute));
#endif
                if (!savePathArray.Contains(saveHeaderPath))
                {
                    savePathArray.Add(saveHeaderPath);
                    //将 build setting 设置
                    xcodeProj.AddBuildProperty(xcodeTargetGuid, "HEADER_SEARCH_PATHS", "$(SRCROOT)" + saveHeaderPath.Replace("\\", "/"));
                }
            }
        }
    }

    //添加 .a文件
    private static void AddStaticLibrary(string secondFilePath, string xcodeTargetPath, string xcodeTargetGuid, MOBPathModel pathModel, PBXProject xcodeProj)
    {
        //		SearchOption searchOption;
        //		if (secondFilePath.Contains ("/ShareSDK/")) //shareSDK
        //		{
        //			searchOption = SearchOption.TopDirectoryOnly;
        //		} 
        //		else 
        //		{
        //			searchOption = SearchOption.AllDirectories;
        //		}
        string[] secondDirectories = Directory.GetFiles(secondFilePath, "*.a", SearchOption.AllDirectories);
        foreach (string lastFilePath in secondDirectories)
        {
            if ((secondFilePath.EndsWith("SDK/ShareSDK") || secondFilePath.EndsWith("SDK\\ShareSDK")) && (lastFilePath.Contains("Support/PlatformSDK") || lastFilePath.Contains("Support\\PlatformSDK")))
            {
                continue;
            }
            string staticLibraryPath = lastFilePath.Replace(pathModel.rootPath, "");


            int index = staticLibraryPath.LastIndexOf("\\");
            if (index == -1)
            {
                index = staticLibraryPath.LastIndexOf("/");
            }

            //项目目录
            string saveStaticLibraryPath = staticLibraryPath.Substring(0, index);
            //存放的本地目录
            string saveDirectory = xcodeTargetPath + saveStaticLibraryPath;
            if (!Directory.Exists(saveDirectory))
            {
                Directory.CreateDirectory(saveDirectory);
            }
            //将.a copy到指定目录
            FileInfo fileInfo = new FileInfo(lastFilePath);
            string savePath = xcodeTargetPath + staticLibraryPath;
            fileInfo.CopyTo(savePath, true);
            //将.a 加入 proj中
#if UNITY_2017_1_OR_NEWER
            xcodeProj.AddFileToBuildSection(xcodeTargetGuid, xcodeProj.AddFrameworksBuildPhase(xcodeTargetGuid), xcodeProj.AddFile(staticLibraryPath.Substring(1), "MOB" + staticLibraryPath, PBXSourceTree.Absolute));
#else
            xcodeProj.AddFileToBuild(xcodeTargetGuid, xcodeProj.AddFile(staticLibraryPath.Substring(1), "MOB" + staticLibraryPath, PBXSourceTree.Absolute));
#endif
            //将 build setting 设置
            xcodeProj.AddBuildProperty(xcodeTargetGuid, "LIBRARY_SEARCH_PATHS", "$(SRCROOT)" + saveStaticLibraryPath.Replace("\\", "/"));
        }
    }

    //添加 bundle
    private static void AddBundle(string secondFilePath, string xcodeTargetPath, string xcodeTargetGuid, MOBPathModel pathModel, PBXProject xcodeProj)
    {
        SearchOption searchOption;
        if (secondFilePath.Contains("/ShareSDK/") || secondFilePath.Contains("\\ShareSDK\\") || secondFilePath.Contains("/ShareSDK\\")) //shareSDK
        {
            searchOption = SearchOption.TopDirectoryOnly;
        }
        else
        {
            searchOption = SearchOption.AllDirectories;
        }
        string[] secondDirectories = Directory.GetDirectories(secondFilePath, "*.bundle", searchOption);
        foreach (string lastFilePath in secondDirectories)
        {
            if ((secondFilePath.EndsWith("SDK/ShareSDK") || secondFilePath.EndsWith("SDK\\ShareSDK")) && (lastFilePath.Contains("Support/PlatformSDK") || lastFilePath.Contains("Support\\PlatformSDK")))
            {
                continue;
            }
            //			Debug.Log("lastFilePath" + lastFilePath);
            string bundlePath = lastFilePath.Replace(pathModel.rootPath, "");
            //			Debug.Log("bundlePath" + bundlePath);
            string savePath = xcodeTargetPath + bundlePath;
            //将 framework copy到指定目录
            DirectoryInfo bundleInfo = new DirectoryInfo(lastFilePath);
            DirectoryInfo saveBundleInfo = new DirectoryInfo(savePath);
            
            CopyAll(bundleInfo, saveBundleInfo);
            //将 framework 加入 proj中
#if UNITY_2017_1_OR_NEWER
            xcodeProj.AddFileToBuildSection(xcodeTargetGuid, xcodeProj.AddResourcesBuildPhase(xcodeTargetGuid), xcodeProj.AddFile(bundlePath.Substring(1), "MOB" + bundlePath, PBXSourceTree.Absolute));
#else
            xcodeProj.AddFileToBuild(xcodeTargetGuid, xcodeProj.AddFile(bundlePath.Substring(1), "MOB" + bundlePath, PBXSourceTree.Absolute));
#endif
        }
    }

    //添加 Framework
    private static void AddFramework(string secondFilePath, string xcodeTargetPath, string xcodeTargetGuid, string xcodeFrameworkTargetGuid, MOBPathModel pathModel, PBXProject xcodeProj, ref bool hasMobFramework, MOBXCodeEditorModel editModel)
    {

        SearchOption searchOption;
        if (secondFilePath.Contains("/ShareSDK/") || secondFilePath.Contains("\\ShareSDK\\") || secondFilePath.Contains("/ShareSDK\\")) //shareSDK
        {
            searchOption = SearchOption.TopDirectoryOnly;
        }
        else
        {
            searchOption = SearchOption.AllDirectories;
        }
        string[] secondDirectories = Directory.GetDirectories(secondFilePath, "*.framework", searchOption);
        foreach (string lastFilePath in secondDirectories)
        {
            //			Debug.Log("lastFilePath" + lastFilePath);

            int index = lastFilePath.LastIndexOf("\\");
            int fileNameIndex = 2;
            if (index == -1)
            {
                fileNameIndex = 1;
                index = lastFilePath.LastIndexOf("/");
            }
            //framework 名称
            string frameworkName = lastFilePath.Substring(index + fileNameIndex);
            //			Debug.Log("frameworkName" + frameworkName);
            bool isMOBFoundation = (frameworkName == "MOBFoundation.framework");
            if (!isMOBFoundation || (isMOBFoundation && !hasMobFramework))
            {
                if (isMOBFoundation && !hasMobFramework)
                {
                    //					Debug.Log("isMOBFoundation " + lastFilePath);
                    hasMobFramework = true;
                }
                string frameworkPath = lastFilePath.Replace(pathModel.rootPath, "");
                //			Debug.Log("frameworkPath" + frameworkPath);
                string savePath = xcodeTargetPath + frameworkPath;
                int tempIndex = frameworkPath.LastIndexOf("\\");
                if (tempIndex == -1)
                {
                    tempIndex = frameworkPath.LastIndexOf("/");
                }

                string saveFrameworkPath = frameworkPath.Substring(0, tempIndex);
                string targetGuid = xcodeFrameworkTargetGuid;
                //将 framework copy到指定目录AddURLSchemes
                DirectoryInfo frameworkInfo = new DirectoryInfo(lastFilePath);
                DirectoryInfo saveFrameworkInfo = new DirectoryInfo(savePath);
                CopyAll(frameworkInfo, saveFrameworkInfo);
                //将 framework 加入 proj中



                if (frameworkName == "ShareSDKLink.framework" && !editModel.isOpenRestoreScene)
                {
                    continue;
                }

                string fileGuid = (string)xcodeProj.AddFile(frameworkPath.Substring(1), "MOB" + frameworkPath, PBXSourceTree.Absolute);


                string[] dynamicframework = { "OasisSDK.framework", "SCSDKCreativeKit.framework", "SCSDKLoginKit.framework", "SCSDKCoreKit.framework" };
                int dynamicIndex = Array.IndexOf(dynamicframework, frameworkName);
                
                if (dynamicIndex >= 0)
                {
                    
                    targetGuid = xcodeTargetGuid;
#if UNITY_2017_1_OR_NEWER
                    xcodeProj.AddFileToBuildSection(targetGuid, xcodeProj.AddFrameworksBuildPhase(targetGuid), fileGuid);
#else
                    xcodeProj.AddFileToBuild(targetGuid, fileGuid);
#endif
#if UNITY_2017_2_OR_NEWER

                    xcodeProj.AddFileToEmbedFrameworks(targetGuid, fileGuid);
#elif UNITY_2019_3_OR_NEWER
                    xcodeProj.AddFileToEmbedFrameworks(targetGuid, fileGuid, targetGuid);
#endif
                }
                else
                {
#if UNITY_2017_1_OR_NEWER
                    xcodeProj.AddFileToBuildSection(targetGuid, xcodeProj.AddFrameworksBuildPhase(targetGuid), fileGuid);
#else
                    xcodeProj.AddFileToBuild(targetGuid, fileGuid);
#endif
                }

                //将 build setting 设置
                xcodeProj.AddBuildProperty(targetGuid, "FRAMEWORK_SEARCH_PATHS", "$(SRCROOT)" + saveFrameworkPath.Replace("\\", "/"));
                
             
            }
        }
    }

    //拷贝目录下的所有文件并剔除.meta
    private static void CopyAll(DirectoryInfo source, DirectoryInfo target)
    {
        if (source.FullName.ToLower() == target.FullName.ToLower())
        {
            return;
        }
        // Check if the target directory exists, if not, creatAddURLSchemesAddURLSchemese it.
        if (!Directory.Exists(target.FullName))
        {
            Directory.CreateDirectory(target.FullName);
        }
        // Copy each file into it's new directory.
        foreach (FileInfo fi in source.GetFiles())
        {

            if (!fi.Name.EndsWith(".meta"))
            {
                string name = fi.Name;
                if (name.Contains(".mobjs"))
                {
                    name = name.Replace(".mobjs", ".js");
                }
                //Debug.Log(name);
                if ((source.ToString().Contains("ShareSDK.bundle/ScriptCore/platforms") || source.ToString().Contains("ShareSDK.bundle\\ScriptCore\\platforms") || source.ToString().Contains("ShareSDK.bundle/ScriptCore\\platforms")) && !platformJsList.Contains(name))
                {

                }
                else
                {
                    fi.CopyTo(Path.Combine(target.ToString(), name), true);
                }


            }
        }
        // Copy each subdirectory using recursion.
        foreach (DirectoryInfo diSourceSubDir in source.GetDirectories())
        {
            DirectoryInfo nextTargetSubDir =
                target.CreateSubdirectory(diSourceSubDir.Name);
            CopyAll(diSourceSubDir, nextTargetSubDir);
        }
    }

    //在info.plist中添加 MOBAppkey MOBAppSecret
    private static void AddAPPKey(PlistElementDict plistElements)
    {
        var files = System.IO.Directory.GetFiles(Application.dataPath, "MOB.keypds", System.IO.SearchOption.AllDirectories);
        string filePath = files[0];
        FileInfo projectFileInfo = new FileInfo(filePath);
        if (projectFileInfo.Exists)
        {
            StreamReader sReader = projectFileInfo.OpenText();
            string contents = sReader.ReadToEnd();
            sReader.Close();
            sReader.Dispose();
            Hashtable datastore = (Hashtable)MiniJSON.jsonDecode(contents);
            string appKey = (string)datastore["MobAppKey"];
            string appSecret = (string)datastore["MobAppSecret"];
            plistElements.SetString("MOBAppkey", appKey);
            plistElements.SetString("MOBAppSecret", appSecret);
        }
        else
        {
            Debug.LogWarning("MOB.keypds no find");
        }
    }

    //在info.plist中添加 必要的权限设置
    private static void AddPermissions(MOBXCodeEditorModel xcodeModel, PlistElementDict plistElements)
    {
        Hashtable permissions = xcodeModel.permissions;
        foreach (string key in permissions.Keys)
        {
            string value = (string)permissions[key];
            plistElements.SetString(key, value);
        }
    }

    //在info.plist中添加 白名单
    private static void AddLSApplicationQueriesSchemes(MOBXCodeEditorModel xcodeModel, PlistElementDict plistElements)
    {
        ArrayList LSApplicationQueriesSchemes = xcodeModel.LSApplicationQueriesSchemes;
        PlistElementArray elementArray = plistElements.CreateArray("LSApplicationQueriesSchemes");
        foreach (string str in LSApplicationQueriesSchemes)
        {
            elementArray.AddString(str);
        }
    }

    //在info.plist中添加 URLSchemes
    private static void AddURLSchemes(MOBXCodeEditorModel xcodeModel, PlistElementDict plistElements)
    {
        ArrayList URLSchemes = xcodeModel.URLSchemes;
        PlistElementArray elementArray = plistElements.CreateArray("CFBundleURLTypes");
        foreach (Hashtable scheme in URLSchemes)
        {
            PlistElementDict dict = elementArray.AddDict();
            dict.SetString("CFBundleURLName", (string)scheme["CFBundleURLName"]);
            PlistElementArray urlArray = dict.CreateArray("CFBundleURLSchemes");
            ArrayList schemes = (ArrayList)scheme["CFBundleURLSchemes"];
            foreach (string schemeStr in schemes)
            {
                urlArray.AddString(schemeStr);
            }
        }
    }

    //在info.plist中添加 infoPlistSet
    private static void AddInfoPlistSet(MOBXCodeEditorModel xcodeModel, PlistElementDict plistElements)
    {
        Hashtable infoPlistSets = xcodeModel.infoPlistSet;
        foreach (string key in infoPlistSets.Keys)
        {
            var value = infoPlistSets[key];
            if (value.GetType().Equals(typeof(string)))
            {
                plistElements.SetString(key, (string)value);
            }
            else if (value.GetType().Equals(typeof(Hashtable)))
            {
                Hashtable temp = (Hashtable)value;
                PlistElementDict dict = plistElements.CreateDict(key);
                foreach (string tempKey in temp.Keys)
                {
                    //暂时只支持1层dict
                    dict.SetString(tempKey, (string)temp[tempKey]);
                }
            }
        }
    }

    private static void AddCapability(MOBXCodeEditorModel xcodeModel, PBXProject xcodeProj, string xcodeTargetGuid, string xcodeTargetPath)
    {

        string projectPath = PBXProject.GetPBXProjectPath(xcodeTargetPath);


        if (xcodeModel.isOpenRestoreScene || xcodeModel.isHaveApple || xcodeModel.associatedDomains.Count > 0)
        {
            string entitlementsPath = xcodeModel.entitlementsPath;
            if (entitlementsPath == null || entitlementsPath == "" || !xcodeModel.entitlementsPath.Contains(".entitlements"))
            {

                string[] s = UnityEditor.PlayerSettings.applicationIdentifier.Split('.');
                string productname = s[s.Length - 1];
                entitlementsPath = "Unity-iPhone/" + productname + ".entitlements";
            }
#if UNITY_2018_1_OR_NEWER
#if UNITY_2019_3_OR_NEWER
            ProjectCapabilityManager capManager = new ProjectCapabilityManager(projectPath, entitlementsPath, null, xcodeTargetGuid);

#else
            ProjectCapabilityManager capManager = new ProjectCapabilityManager(projectPath , entitlementsPath, "Unity-iPhone");

#endif
            
            
            if (xcodeModel.associatedDomains.Count > 0 || xcodeModel.isHaveApple)
            {

                string[] domains = new string[xcodeModel.associatedDomains.Count];
                int index = 0;
                foreach (string domainStr in xcodeModel.associatedDomains)
                {
                    Debug.Log("AddCapabilityAssociatedDomains:" + domainStr);
                    domains[index] = domainStr;
                    index++;
                }
                //Debug.Log("xcodeTargetGuid：" + xcodeTargetGuid);
                //Debug.Log("xcodeTargetPath：" + xcodeTargetPath);
                //Debug.Log("projectPath：" + projectPath);
                //Debug.Log("GetUnityTargetName：" + PBXProject.GetUnityTargetName());
                //Debug.Log("domainStr：" + MiniJSON.jsonEncode(domains));
                if (capManager.GetType().GetMethod("AddAssociatedDomains") != null)
                {
                    capManager.GetType().GetMethod("AddAssociatedDomains").Invoke(capManager, new object[] { domains });
                }

                
                //Debug.Log("bundleIdentifier：" + UnityEditor.PlayerSettings.applicationIdentifier);
                //Debug.Log("productName：" + UnityEditor.PlayerSettings.productName);
                if (xcodeModel.isHaveApple && capManager.GetType().GetMethod("AddSignInWithApple") != null)
                {
                    capManager.GetType().GetMethod("AddSignInWithApple").Invoke(capManager, null);
                }

                //推送
                //capManager.AddPushNotifications(true);
                //内购
                //capManager.AddInAppPurchase();
                capManager.WriteToFile();

                
                xcodeProj.AddCapability(xcodeTargetGuid, PBXCapabilityType.AssociatedDomains, xcodeTargetPath + "/" + entitlementsPath, true);
            }
#else

            var entitlementFile = "<?xml version=\"1.0\" encoding=\"UTF-8\"?><!DOCTYPE plist PUBLIC \" -//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\"><plist version = \"1.0\"><dict>";

            if (xcodeModel.associatedDomains.Count > 0 || xcodeModel.isHaveApple)
            {

                string[] domains = new string[xcodeModel.associatedDomains.Count];
                int index = 0;
                foreach (string domainStr in xcodeModel.associatedDomains)
                {
                    Debug.Log("AddCapabilityAssociatedDomains:" + domainStr);
                    domains[index] = "<string>" + domainStr + "</string>";
                    index++;
                }
                var associatedDomainsString = "";
                if (domains.Length > 0) {
                    associatedDomainsString = "<key>com.apple.developer.associated-domains</key><array>" + string.Join("", domains) + "</array>";
                }
                var appleString = "";
                if (xcodeModel.isHaveApple) {
                    appleString = "<key>com.apple.developer.applesignin</key><array><string> Default </string></array>";
                }
                entitlementFile = entitlementFile + associatedDomainsString + appleString + "</dict></plist>";

            }
            Debug.LogWarning(entitlementFile);
            Debug.LogWarning(xcodeTargetPath + "/" + entitlementsPath);
            Debug.LogWarning(xcodeTargetPath);
            StreamWriter sWriter = new StreamWriter(xcodeTargetPath + "/" + entitlementsPath);
            sWriter.WriteLine(entitlementFile);
            sWriter.Close();
            sWriter.Dispose();
            xcodeProj.AddBuildProperty(xcodeTargetGuid, "CODE_SIGN_ENTITLEMENTS", entitlementsPath);
            string fileGuid = (string)xcodeProj.AddFile(xcodeTargetPath + "/" + entitlementsPath, entitlementsPath, PBXSourceTree.Absolute);
            xcodeProj.AddFileToBuild(xcodeTargetGuid, fileGuid);            
#endif
        }
    }


#endif
                }