using Unity.CodeEditor;
using UnityEditor;
using UnityEngine;

namespace Packages.Rider.Editor
{
  public class PluginSettings
  {
    public static LoggingLevel SelectedLoggingLevel
    {
      get => (LoggingLevel) EditorPrefs.GetInt("Rider_SelectedLoggingLevel", 0);
      set
      {
        EditorPrefs.SetInt("Rider_SelectedLoggingLevel", (int) value);
      }
    }

    public static bool LogEventsCollectorEnabled
    {
      get { return EditorPrefs.GetBool("Rider_LogEventsCollectorEnabled", true); }
      private set { EditorPrefs.SetBool("Rider_LogEventsCollectorEnabled", value); }
    }


    private static GUIStyle ourVersionInfoStyle = new GUIStyle()
    {
      normal = new GUIStyleState()
      {
        textColor = new Color(0, 0, 0, .6f),
      }, 
      margin = new RectOffset(4, 4, 4, 4),
    };

    /// <summary>
    /// Preferences menu layout
    /// </summary>
    /// <remarks>
    /// Contains all 3 toggles: Enable/Disable; Debug On/Off; Writing Launch File On/Off
    /// </remarks>
    [SettingsProvider]
    private static SettingsProvider RiderPreferencesItem()
    {
      if (!RiderScriptEditor.IsRiderInstallation(RiderScriptEditor.CurrentEditor))
        return null;
      if (!RiderScriptEditorData.instance.shouldLoadEditorPlugin)
        return null;
      var provider = new SettingsProvider("Preferences/Rider", SettingsScope.User)
      {
        label = "Rider",
        keywords = new[] { "Rider" },
        guiHandler = (searchContext) =>
        {
          EditorGUIUtility.labelWidth = 200f;
          EditorGUILayout.BeginVertical();

          GUILayout.BeginVertical();
          LogEventsCollectorEnabled =
            EditorGUILayout.Toggle(new GUIContent("Pass Console to Rider:"), LogEventsCollectorEnabled);

          GUILayout.EndVertical();
          GUILayout.Label("");

          if (!string.IsNullOrEmpty(EditorPluginInterop.LogPath))
          {
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.PrefixLabel("Log file:");
            var previous = GUI.enabled;
            GUI.enabled = previous && SelectedLoggingLevel != LoggingLevel.OFF;
            var button = GUILayout.Button(new GUIContent("Open log"));
            if (button)
            {
              //UnityEditorInternal.InternalEditorUtility.OpenFileAtLineExternal(PluginEntryPoint.LogPath, 0);
              // works much faster than the commented code, when Rider is already started
              CodeEditor.CurrentEditor.OpenProject(EditorPluginInterop.LogPath, 0, 0);
            }

            GUI.enabled = previous;
            GUILayout.EndHorizontal();
          }

          var loggingMsg =
            @"Sets the amount of Rider Debug output. If you are about to report an issue, please select Verbose logging level and attach Unity console output to the issue.";
          SelectedLoggingLevel =
            (LoggingLevel) EditorGUILayout.EnumPopup(new GUIContent("Logging Level:", loggingMsg),
              SelectedLoggingLevel);


          EditorGUILayout.HelpBox(loggingMsg, MessageType.None);

          var githubRepo = "https://github.com/JetBrains/resharper-unity";
          var caption = $"<color=#0000FF>{githubRepo}</color>";
          LinkButton(caption: caption, url: githubRepo);

          GUILayout.FlexibleSpace();
          GUILayout.BeginHorizontal();

          GUILayout.FlexibleSpace();
          var assembly = EditorPluginInterop.EditorPluginAssembly;
          if (assembly != null)
          {
            var version = assembly.GetName().Version;
            GUILayout.Label("Plugin version: " + version, ourVersionInfoStyle);
          }
          
          GUILayout.EndHorizontal();

          EditorGUILayout.EndVertical();
        }
      };
      return provider;
    }

    private static void LinkButton(string caption, string url)
    {
      var style = GUI.skin.label;
      style.richText = true;

      var bClicked = GUILayout.Button(caption, style);

      var rect = GUILayoutUtility.GetLastRect();
      rect.width = style.CalcSize(new GUIContent(caption)).x;
      EditorGUIUtility.AddCursorRect(rect, MouseCursor.Link);

      if (bClicked)
        Application.OpenURL(url);
    }
  }
}