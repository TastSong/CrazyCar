using System;
using System.IO;
using UnityEngine;
using Debug = UnityEngine.Debug;

namespace Packages.Rider.Editor
{
    internal class RiderInitializer
    {
      public void Initialize(string editorPath)
      {
        var assembly = EditorPluginInterop.EditorPluginAssembly;
        if (EditorPluginInterop.EditorPluginIsLoadedFromAssets(assembly))
        {
          Debug.LogError($"Please delete {assembly.Location}. Unity 2019.2+ loads it directly from Rider installation. To disable this, open Rider's settings, search and uncheck 'Automatically install and update Rider's Unity editor plugin'.");
          return;
        }

        var dllName = "JetBrains.Rider.Unity.Editor.Plugin.Full.Repacked.dll";
        var relPath = "../../plugins/rider-unity/EditorPlugin";
        if (SystemInfo.operatingSystemFamily == OperatingSystemFamily.MacOSX)
          relPath = "Contents/plugins/rider-unity/EditorPlugin";
        var dllFile = new FileInfo(Path.Combine(Path.Combine(editorPath, relPath), dllName));

        if (dllFile.Exists)
        {
          var bytes = File.ReadAllBytes(dllFile.FullName); 
          assembly = AppDomain.CurrentDomain.Load(bytes); // doesn't lock assembly on disk
          // assembly = AppDomain.CurrentDomain.Load(AssemblyName.GetAssemblyName(dllFile.FullName)); // use this for external source debug
          EditorPluginInterop.InitEntryPoint(assembly);
        }
        else
        {
          Debug.Log($"Unable to find Rider EditorPlugin {dllFile.FullName} for Unity ");
        }
      }
    }
}
