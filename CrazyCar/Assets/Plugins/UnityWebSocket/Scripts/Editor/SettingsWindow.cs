using UnityEngine;
using UnityEditor;
using UnityEngine.Networking;
using System.IO;
using System;

namespace UnityWebSocket.Editor
{
    internal class SettingsWindow : EditorWindow
    {
        internal static readonly int[] ASM_MEMORY_SIZE = new int[] { 256, 512, 1024 };
        internal static readonly int[] LINKER_TARGET = new int[] { 0, 2 };
        static SettingsWindow window = null;
        [MenuItem("Tools/UnityWebSocket/Preferences...", priority = 100)]
        internal static void Open()
        {
            if (window != null)
            {
                window.Close();
            }

            window = GetWindow<SettingsWindow>(true, "UnityWebSocket");
            window.minSize = window.maxSize = new Vector2(600, 310);
            window.Show();
            window.BeginCheck();
        }

        private void OnGUI()
        {
            DrawLogo();
            DrawVersion();
            DrawSeparator(80);
            DrawFixSettings();
            DrawMemorySelector();
            DrawLinkerTargetSelector();
            DrawSeparator(186);
            DrawHelper();
            DrawFooter();
        }

        private void DrawLogo()
        {
            var logo = new Texture2D(1200, 1200);
            logo.LoadImage(Convert.FromBase64String(LOGO_BASE64.VALUE));
            var logoPos = new Rect(10, 10, 66, 66);
            GUI.DrawTexture(logoPos, logo);

            var title = "<color=#3A9AD8><b>UnityWebSocket</b></color>";
            var titlePos = new Rect(80, 28, 500, 50);
            GUI.Label(titlePos, title, TextStyle(24));
        }

        private void DrawSeparator(int y)
        {
            EditorGUI.DrawRect(new Rect(10, y, 580, 1), Color.white * 0.5f);
        }

        private GUIStyle TextStyle(int fontSize = 10, TextAnchor alignment = TextAnchor.UpperLeft, float alpha = 0.85f)
        {
            var style = new GUIStyle();
            style.fontSize = fontSize;
            style.normal.textColor = (EditorGUIUtility.isProSkin ? Color.white : Color.black) * alpha;
            style.alignment = alignment;
            style.richText = true;
            return style;
        }

        private void DrawVersion()
        {
            GUI.Label(new Rect(440, 10, 150, 10), "Current Version: " + Settings.VERSION, TextStyle(alignment: TextAnchor.MiddleLeft));
            if (string.IsNullOrEmpty(latestVersion))
            {
                GUI.Label(new Rect(440, 30, 150, 10), "Checking for Updates...", TextStyle(alignment: TextAnchor.MiddleLeft));
            }
            else if (latestVersion == "unknown")
            {

            }
            else
            {
                GUI.Label(new Rect(440, 30, 150, 10), "Latest Version: " + latestVersion, TextStyle(alignment: TextAnchor.MiddleLeft));
                if (Settings.VERSION == latestVersion)
                {
                    if (GUI.Button(new Rect(440, 50, 150, 18), "Check Update"))
                    {
                        latestVersion = "";
                        changeLog = "";
                        BeginCheck();
                    }
                }
                else
                {
                    if (GUI.Button(new Rect(440, 50, 150, 18), "Update to | " + latestVersion))
                    {
                        ShowUpdateDialog();
                    }
                }
            }
        }

        private void ShowUpdateDialog()
        {
            var code = EditorUtility.DisplayDialog("UnityWebSocket",
                "Update UnityWebSocket now?\n" + changeLog,
                "Update Now", "Cancel");

            if (code)
            {
                UpdateVersion();
            }
        }

        private void UpdateVersion()
        {
            var packagePath = Path.Combine(Application.dataPath, "../Packages/manifest.json");
            if (File.Exists(packagePath))
            {
                var txt = File.ReadAllText(packagePath);
                // via git
                var index = txt.IndexOf("\"" + Settings.PACKAGE_NAME + "\": \"" + Settings.GITHUB + ".git");
                if (index != -1)
                {
                    var end_index = txt.IndexOf("\"", index + 1);
                    end_index = txt.IndexOf("\"", end_index + 1);
                    end_index = txt.IndexOf("\"", end_index + 1);
                    var old_str = txt.Substring(index, end_index - index + 1);
                    var new_str = string.Format("\"{0}\": \"{1}#{2}\"", Settings.PACKAGE_NAME, Settings.UPM_URL, latestVersion);
                    txt = txt.Replace(old_str, new_str);
                    File.WriteAllText(packagePath, txt);
                    AssetDatabase.Refresh();
                    return;
                }
            }

            // via releases
            Application.OpenURL(Settings.GITHUB + "/releases");
        }

        private void DrawMemorySelector()
        {
            var ms_index = -1;
            var memoryArrayStr = new string[ASM_MEMORY_SIZE.Length];
            for (int i = 0; i < ASM_MEMORY_SIZE.Length; i++)
            {
                if (ASM_MEMORY_SIZE[i] == PlayerSettings.WebGL.memorySize)
                    ms_index = i;
                memoryArrayStr[i] = ASM_MEMORY_SIZE[i].ToString();
            }
            GUI.Label(new Rect(330, 90, 100, 18), "Memory Size:", TextStyle(10, TextAnchor.MiddleRight));
            ms_index = EditorGUI.Popup(new Rect(440, 90, 150, 18), ms_index, memoryArrayStr);
            if (ms_index >= 0 && ASM_MEMORY_SIZE[ms_index] != PlayerSettings.WebGL.memorySize)
            {
                PlayerSettings.WebGL.memorySize = ASM_MEMORY_SIZE[ms_index];
            }
        }

        private void DrawLinkerTargetSelector()
        {
            var _index = -1;
            var lstStr = new string[LINKER_TARGET.Length];
            for (int i = 0; i < LINKER_TARGET.Length; i++)
            {
                if (LINKER_TARGET[i] == (int)PlayerSettings.WebGL.linkerTarget)
                    _index = i;
                lstStr[i] = ((WebGLLinkerTarget)LINKER_TARGET[i]).ToString();
            }
            GUI.Label(new Rect(330, 110, 100, 18), "Linker Target:", TextStyle(10, TextAnchor.MiddleRight));
            _index = EditorGUI.Popup(new Rect(440, 110, 150, 18), _index, lstStr);
            if (_index >= 0 && LINKER_TARGET[_index] != (int)PlayerSettings.WebGL.linkerTarget)
            {
                PlayerSettings.WebGL.linkerTarget = (WebGLLinkerTarget)LINKER_TARGET[_index];
            }
        }

        private void DrawFixSettings()
        {
            bool isLinkTargetFixed;
            bool isMemorySizeFixed;
            bool isDecompressionFallbackFixed;
            PlayerSettingsChecker.GetSettingsFixed(out isLinkTargetFixed, out isMemorySizeFixed, out isDecompressionFallbackFixed);
            bool isAllFixed = isLinkTargetFixed && isMemorySizeFixed && isDecompressionFallbackFixed;
            if (isAllFixed)
            {
                var str = "All Settings Fixed:";
                str += "\n√  PlayerSettings.WebGL.linkerTarget = " + PlayerSettings.WebGL.linkerTarget + ";";
                str += "\n√  PlayerSettings.WebGL.memorySize = " + PlayerSettings.WebGL.memorySize + ";";
                str += "\n√  PlayerSettings.WebGL.decompressionFallback = true;";
                EditorGUI.HelpBox(new Rect(10, 90, 330, 86), str, MessageType.Info);
                GUI.enabled = false;
                GUI.Button(new Rect(440, 158, 150, 18), "All Fixed");
                GUI.enabled = true;
                return;
            }

            var fixStr = "In order to run UnityWebSocket normally, we must fix some SETTINGS below:";
            if (isLinkTargetFixed)
                fixStr += "\n√  PlayerSettings.WebGL.linkerTarget = " + PlayerSettings.WebGL.linkerTarget + ";";
            else
                fixStr += "\n×  PlayerSettings.WebGL.linkerTarget = [Appropriate Value];";

            if (isMemorySizeFixed)
                fixStr += "\n√  PlayerSettings.WebGL.memorySize = " + PlayerSettings.WebGL.memorySize + ";";
            else
                fixStr += "\n×  PlayerSettings.WebGL.memorySize = [Appropriate Value];";

            if (isDecompressionFallbackFixed)
                fixStr += "\n√  PlayerSettings.WebGL.decompressionFallback = true;";
            else
                fixStr += "\n×  PlayerSettings.WebGL.decompressionFallback = false;";

            EditorGUI.HelpBox(new Rect(10, 90, 330, 86), fixStr, MessageType.Warning);

            if (GUI.Button(new Rect(440, 158, 150, 18), "Auto Fix"))
            {
#if UNITY_2018_1_OR_NEWER
                if (!isLinkTargetFixed)
                    PlayerSettings.WebGL.linkerTarget = (WebGLLinkerTarget)2;
#endif

                if (!isMemorySizeFixed)
                    PlayerSettings.WebGL.memorySize = ASM_MEMORY_SIZE[0];

#if UNITY_2020_1_OR_NEWER
                if (!isDecompressionFallbackFixed)
                    PlayerSettings.WebGL.decompressionFallback = true;
#endif
            }
        }

        private void DrawHelper()
        {
            GUI.Label(new Rect(330, 200, 100, 18), "GitHub:", TextStyle(10, TextAnchor.MiddleRight));
            if (GUI.Button(new Rect(440, 200, 150, 18), "UnityWebSocket"))
            {
                Application.OpenURL(Settings.GITHUB);
            }

            GUI.Label(new Rect(330, 225, 100, 18), "Report:", TextStyle(10, TextAnchor.MiddleRight));
            if (GUI.Button(new Rect(440, 225, 150, 18), "Report an Issue"))
            {
                Application.OpenURL(Settings.GITHUB + "/issues/new");
            }

            GUI.Label(new Rect(330, 250, 100, 18), "Email:", TextStyle(10, TextAnchor.MiddleRight));
            if (GUI.Button(new Rect(440, 250, 150, 18), Settings.EMAIL))
            {
                var uri = new System.Uri(string.Format("mailto:{0}?subject={1}", Settings.EMAIL, "UnityWebSocket Feedback"));
                Application.OpenURL(uri.AbsoluteUri);
            }

            GUI.Label(new Rect(330, 275, 100, 18), "QQ群:", TextStyle(10, TextAnchor.MiddleRight));
            if (GUI.Button(new Rect(440, 275, 150, 18), Settings.QQ_GROUP))
            {
                Application.OpenURL(Settings.QQ_GROUP_LINK);
            }
        }

        private void DrawFooter()
        {
            EditorGUI.DropShadowLabel(new Rect(10, 230, 400, 20), "Developed by " + Settings.AUHTOR);
            EditorGUI.DropShadowLabel(new Rect(10, 250, 400, 20), "All rights reserved");
        }

        UnityWebRequest req;
        string changeLog = "";
        string latestVersion = "";
        void BeginCheck()
        {
            req = UnityWebRequest.Get(Settings.GITHUB + "/releases/latest");
            EditorApplication.update -= VersionCheckUpdate;
            EditorApplication.update += VersionCheckUpdate;
            req.SendWebRequest();
        }

        private void VersionCheckUpdate()
        {
#if UNITY_2021_1_OR_NEWER
            if (req == null
                || req.result == UnityWebRequest.Result.ConnectionError
                || req.result == UnityWebRequest.Result.DataProcessingError
                || req.result == UnityWebRequest.Result.ProtocolError)
#elif UNITY_2018_1_OR_NEWER
            if (req == null || req.isNetworkError || req.isHttpError)
#else
            if (req == null || req.isError)
#endif
            {
                EditorApplication.update -= VersionCheckUpdate;
                latestVersion = "unknown";
                return;
            }

            if (req.isDone)
            {
                EditorApplication.update -= VersionCheckUpdate;
                latestVersion = req.url.Substring(req.url.LastIndexOf("/") + 1);

                if (Settings.VERSION != latestVersion)
                {
                    var text = req.downloadHandler.text;
                    var st = text.IndexOf("content=\"" + latestVersion);
                    st = st > 0 ? text.IndexOf("\n", st) : -1;
                    var end = st > 0 ? text.IndexOf("\" />", st) : -1;
                    if (st > 0 && end > st)
                    {
                        changeLog = text.Substring(st + 1, end - st - 1).Trim();
                        changeLog = changeLog.Replace("\r", "");
                        changeLog = changeLog.Replace("\n", "\n- ");
                        changeLog = "\nCHANGE LOG: \n- " + changeLog + "\n";
                    }
                }

                Repaint();
            }
        }
    }


    internal static class PlayerSettingsChecker
    {
        [InitializeOnLoadMethod]
        internal static void OnInit()
        {
            bool isLinkTargetFixed;
            bool isMemorySizeFixed;
            bool isDecompressionFallbackFixed;
            GetSettingsFixed(out isLinkTargetFixed, out isMemorySizeFixed, out isDecompressionFallbackFixed);
            bool isAllFixed = isLinkTargetFixed && isMemorySizeFixed && isDecompressionFallbackFixed;

            if (!isAllFixed)
            {
                EditorApplication.update -= DelayOpenWindow;
                EditorApplication.update += DelayOpenWindow;
            }
        }

        private static void DelayOpenWindow()
        {
            EditorApplication.update -= DelayOpenWindow;
            SettingsWindow.Open();
        }


        internal static bool _IsInArray(int[] array, int val)
        {
            for (int i = 0; i < array.Length; i++)
            {
                if (val == array[i])
                    return true;
            }
            return false;
        }

        internal static void GetSettingsFixed(out bool isLinkTargetFixed, out bool isMemorySizeFixed, out bool isDecompressionFallbackFixed)
        {
            isLinkTargetFixed = true;
            isMemorySizeFixed = true;
            isDecompressionFallbackFixed = true;

#if UNITY_2018_1_OR_NEWER
            isLinkTargetFixed = _IsInArray(SettingsWindow.LINKER_TARGET, (int)PlayerSettings.WebGL.linkerTarget);
#endif

            isMemorySizeFixed = _IsInArray(SettingsWindow.ASM_MEMORY_SIZE, PlayerSettings.WebGL.memorySize);

#if UNITY_2020_1_OR_NEWER
            isDecompressionFallbackFixed = PlayerSettings.WebGL.decompressionFallback;
#endif
        }

    }

    internal static class LOGO_BASE64
    {
        internal const string VALUE = "iVBORw0KGgoAAAANSUhEUgAAAEIAAABCCAMAAADUivDaAAAAq1BMVEUAAABKmtcvjtYzl" +
             "9szmNszl9syl9k0mNs0mNwzmNs0mNszl9szl9s0mNs0mNwzmNw0mNwyltk0mNw0mNwzl9s0mNsymNs0mNszmNwzmNwzm" +
             "NszmNs0mNwzl9w0mNwzmNw0mNs0mNs0mNwzl9wzmNs0mNwzmNs0mNwzl90zmNszmNszl9szmNsxmNszmNszmNw0mNwzm" +
             "Nw0mNs2neM4pe41mt43ouo2oOY5qfM+UHlaAAAAMnRSTlMAAwXN3sgI+/069MSCK6M/MA74h9qfFHB8STWMJ9OSdmNcI" +
             "8qya1IeF+/U0EIa57mqmFTYJe4AAAN3SURBVFjD7ZbpkppAFEa/bgVBREF2kEVGFNeZsM77P1kadURnJkr8k1Qlx1Khu" +
             "/pw7+2lwH/+YcgfMBBLG7VocwDamzH+wJBB8Qhjve2f0TdrGwjei6o4Ub/nM/APw5Z7vvSB/qrCrqbD6fBEVtigeMxks" +
             "fX9zWbj+z1jhqgSBplQ50eGo4614WXlRAzgrRhmtSfvxAn7pB0N5ObaKKZZuU5/d37IBcBgUQwqDuf7Z2gUmVAl4NGNr" +
             "/UeHxV5n39ulbaKLI86h6HilmM5M1aN126lpNhtl59yeTsp8nUMvpNC1J3bh5FtfVRk+bJrJunn5d4U4piJ/Vw9eXgsj" +
             "4ZpZaCjg9waZkIpnBWLJ44OwoNu60F2UnSaEkKv4XnAlCpm6B4F/aKMDiyGi2L8SEEAVdxNLuzmgV7nFwObEe2xQVuX+" +
             "RV1lWetga3w+cN1sXgvm4cJH8OEgZC1DPKhfF/BIymmQrMjq/x65FUeEkDup8GxoexZmznHCvANtXU/CAq13yimhQGtm" +
             "H4VCPnBBL1fTKo3CqEcvq7Lb/OwHxWTYlyw+JmjKoVvDLVOQB4pVsM8K8smgvLCxZDlIijwyOEc+nr/msMwK0+GQWGBd" +
             "tmhjv8icTds1s2ammaFh04QLLe69NK7guP6mTDMaw3o6nAX/Z7EXUskPSvWEWg4srVlp5NTDXv9Lce9HGN5eeG4nj5Yz" +
             "ACteU2wQLo4MBtJfd1nw5nG1/s9zwUQ6pykL1TQjqdeuvQW0naz2XKLYL4Cwzr4vj+OQdD96CSp7Lrynp4aeFF0xdm5q" +
             "6OFtFfPv7URxpWJNjd/N+3+I9+1klMav12Qtgbt9R2JaIopjkzaPtOFq4KxUpqfUMSFnQrySWjLoQzRZS4HMH84ME1ej" +
             "S1YJpQZ3B+sR1uCQJSBdGdCk1eAEgORR88KK05W8dh2MA+A/SKCYu3mCJ0Ek7HBx4HHeuwYy5G3x8hSMTJcOMFbinCsn" +
             "hO1V1aszGULvA0g4UFsb4VA0hAFcyo6cgLsAoT7uUtGAH5wQKQle0wuLyxLTaNyJEYwxw4wSljLK1TP8CAaOyhBMMEsj" +
             "OBoXgo7VGElFkSWL+vef1RF2YNXeRWYzQBTpkhC8KaZHhuIogArkQLKClBZjU26B2IZgGz+cpZkHl8g3fYUaW/YP2kb2" +
             "M/V97JY/vZN859n+QmO7XtC9Bf2jAAAAABJRU5ErkJggg==";
    }
}
