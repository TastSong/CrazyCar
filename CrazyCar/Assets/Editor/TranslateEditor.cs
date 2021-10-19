using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Security.Cryptography;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using UnityEditor;
using UnityEngine;

public class TranslateEditor : EditorWindow {
    static bool isTranslating = false;
    static EditorWindow myWindow;

    // [MenuItem("Translate/Test")]
    static void test() {
        //路径  
        string fullPath = Application.dataPath + "/Resources/Language/Locales";
        //  fullPath = EditorUtility.OpenFolderPanel("", "", "");
        //获取指定路径下面的所有资源文件  
        if (Directory.Exists(fullPath)) {
            DirectoryInfo direction = new DirectoryInfo(fullPath);
            FileInfo[] files = direction.GetFiles("*", SearchOption.AllDirectories);


            Debug.Log(files.Length);
            for (int i = 0; i < 1; i++) {
                Debug.Log(files[i].FullName);
                if (!files[i].Name.EndsWith(".json"))
                    continue;
                DeleteEnd(files[i].FullName);
            }
        }
        AssetDatabase.Refresh();
    }
    [MenuItem("Window/Translate")]
    static void StartWindow() {
        myWindow = EditorWindow.GetWindow(typeof(TranslateEditor));
    }

    private string arrCountString = "";
    private int arrCount = 0;
    static public string[] key;
    static public string[] value;
    static string[] chiniseStr;
    static string[] jpStr;
    static string[] krStr;
    static string[] thStr;
    static string[] spanishStr;
    Vector2 scrollPos;

    public void OnGUI() {
        EditorGUILayout.BeginHorizontal();
        arrCountString = EditorGUILayout.TextField("请输入翻译的数量", arrCountString);
        if (GUILayout.Button("确认")) {
            try {
                arrCount = int.Parse(arrCountString);
                key = new string[arrCount];
                value = new string[arrCount];
                chiniseStr = new string[arrCount];
                jpStr = new string[arrCount];
                krStr = new string[arrCount];
            } catch {
                Debug.LogError("输入数字");
                arrCount = 0;
            }
        }
        EditorGUILayout.EndHorizontal();
        scrollPos = EditorGUILayout.BeginScrollView(scrollPos, GUILayout.Width(800), GUILayout.Height(450));
        for (int i = 0; i < arrCount; i++) {
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.BeginVertical();
            key[i] = EditorGUILayout.TextField("请输入英文的key", key[i]);
            value[i] = EditorGUILayout.TextField("请输入英文的value", value[i]);
            EditorGUILayout.EndVertical();
            EditorGUILayout.BeginVertical();
            chiniseStr[i] = EditorGUILayout.TextField("翻译出来的中文", chiniseStr[i]);
            krStr[i] = EditorGUILayout.TextField("翻译出来的韩语", krStr[i]);
            jpStr[i] = EditorGUILayout.TextField("翻译出来的日语", jpStr[i]);
            EditorGUILayout.EndVertical();
            EditorGUILayout.EndHorizontal();
            EditorGUILayout.Space();
        }
        EditorGUILayout.EndScrollView();
        if (GUILayout.Button("显示翻译")) {
            chiniseStr = new string[arrCount];
            krStr = new string[arrCount];
            jpStr = new string[arrCount];
            DoTranslate(value);

        }
        if (GUILayout.Button("添加翻译")) {
            for (int i = 0; i < arrCount; i++) {
                AddTranslate(value[i], i);
            }
        }

    }


    async void DoTranslate(string[] value) {
        for (int i = 0; i < value.Length; i++) {
            if (string.IsNullOrEmpty(value[i].Trim()) || string.IsNullOrEmpty(key[i].Trim())) {
                continue;
            }
            await Task.Delay(1000);
            Debug.Log(value + "- " + Language.ZH);
            chiniseStr[i] = TranslateStr(value[i], Language.ZH);
            await Task.Delay(1000);
            Debug.Log(value + "- " + Language.JP);
            jpStr[i] = TranslateStr(value[i], Language.JP);
            await Task.Delay(1000);
            Debug.Log(value + "- " + Language.KOR);
            krStr[i] = TranslateStr(value[i], Language.KOR);
        }
    }
    static void AddTranslate(string val, int index) {
        //路径  
        string fullPath = Application.dataPath + "/Resources/Language/Locales";
        //  fullPath = EditorUtility.OpenFolderPanel("", "", "");
        //获取指定路径下面的所有资源文件  
        if (Directory.Exists(fullPath)) {
            DirectoryInfo direction = new DirectoryInfo(fullPath);
            FileInfo[] files = direction.GetFiles("*", SearchOption.AllDirectories);
            string languageStr = "";
            //Debug.Log(files.Length);
            for (int i = 0; i < files.Length; i++) {
                Debug.Log(files[i].FullName);
                if (!files[i].Name.EndsWith(".json"))
                    continue;

                string jsonTest = File.ReadAllText(files[i].FullName);
                JsonData jsonData = JsonMapper.ToObject(jsonTest);
                string languageId = (string)jsonData["id"];

                switch (languageId) {
                    case "en":
                        languageStr = val;
                        break;
                    case "jp":
                        languageStr = jpStr[index];
                        break;
                    case "kr":
                        languageStr = krStr[index];
                        break;
                    case "zh-cn":
                        languageStr = chiniseStr[index];
                        break;
                    default:
                        break;
                }

                if (string.IsNullOrEmpty(languageStr.Trim()) || string.IsNullOrEmpty(key[index].Trim())) {
                    continue;
                }
                // string Str = jsonData.ToJson();
                IDictionary dict = new Dictionary<string, string>();
                dict = jsonData as IDictionary;
                if (dict.Contains(key[index])) {
                    myWindow = EditorWindow.GetWindow(typeof(TranslateEditor));
                    myWindow.ShowNotification(new GUIContent(files[i].FullName + "已经包含这个key"));
                    Debug.Log(files[i].FullName + "已经包含这个key:" + key[index]);
                    continue;
                }
                DeleteEnd(files[i].FullName);
                using (FileStream fs = new FileStream(files[i].FullName, FileMode.Append, FileAccess.Write)) {
                    using (StreamWriter sw = new StreamWriter(fs)) {
                        sw.WriteLine("\t\"" + key[index].Trim() + "\" : \"" + languageStr.Trim() + "\"");
                        sw.WriteLine("}");
                    }
                }



            }
        }
        AssetDatabase.Refresh();
    }
    static byte[] GetBytes(string value) {
        return System.Text.Encoding.UTF8.GetBytes(value);
    }

    static string TranslateStr(string str, Language des = Language.ZH) {
        isTranslating = true;
        return GetTranslationFromBaiduFanyi(str, Language.EN, des);
    }

    public static string GetTranslationFromBaiduFanyi(String source, Language from = Language.Auto, Language to = Language.Auto) {
        String jsonResult = String.Empty;
        String languageFrom = from.ToString().ToLower();
        String languageTo = to.ToString().ToLower();
        String appId = "20210323000739392";
        String appsecret = "QXkF2J3gy0kR8k_qFgCP";
        String randomNum = System.DateTime.Now.Millisecond.ToString();
        String md5Sign = GetMD5HashFromFile(appId + source + randomNum + appsecret);
        //Debug.Log(appId);


        String url = String.Format("http://api.fanyi.baidu.com/api/trans/vip/translate?q={0}&from={1}&to={2}&appid={3}&salt={4}&sign={5}",
            source,
            languageFrom,
            languageTo,
            appId,
            randomNum,
            md5Sign
            );
        Debug.Log(url);
        WebClient wc = new WebClient();
        try {
            jsonResult = wc.DownloadString(url);
        } catch (Exception e) {
            jsonResult = string.Empty;
            Console.WriteLine(e.Message);
        }
        Debug.Log(jsonResult);



        string strLine = jsonResult;

        Dictionary<string, object> dict = MiniJSONTranslate.Json.Deserialize(strLine) as Dictionary<string, object>;
        //Debug.Log(dict["from"].ToString());
        //Debug.Log(dict["to"].ToString());
        List<object> provinceList = dict["trans_result"] as List<object>;
        foreach (var i in provinceList) {
            Dictionary<string, object> province = i as Dictionary<string, object>;
            //Debug.Log(province["src"].ToString());
            //Debug.Log(province["dst"].ToString());
            isTranslating = false;
            return province["dst"].ToString();
        }
        return "";
    }

    public static string GetMD5HashFromFile(string strToHash) {
        try {
            MD5 md5 = new MD5CryptoServiceProvider();
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(strToHash);
            bytes = md5.ComputeHash(bytes);
            md5.Clear();

            String ret = "";
            for (int i = 0; i < bytes.Length; i++) {
                ret += Convert.ToString(bytes[i], 16).PadLeft(2, '0');
            }
            return ret;
        } catch (Exception ex) {
            Debug.Log("Message " + System.DateTime.Now.ToLongTimeString() + " :" + ex.Message);
            return "Md5 Error";
        }
    }

    static bool IsHanZi(string ch) {
        //Regex regChina = new Regex("^[^\x00-\xFF]");
        Regex regEnglish = new Regex("^[a-zA-Z]");
        if (regEnglish.IsMatch(ch))
            return false;
        return true;
    }

    static string GetNumberAlpha(string source) {
        string pattern = @"[[""()+_*&^%$#@/{}<>]''";
        //string strRet = "";
        string results = Regex.Replace(source, pattern, " ");//source, pattern," ");
        //foreach (var v in results)
        //{
        //    strRet += v.ToString();
        //}
        return results.Replace("]", " ");
    }
    static string GetAlpha(string source) {
        string pattern = "\u2019";
        //string strRet = "";
        string results = Regex.Replace(source, pattern, "'");//source, pattern," ");
        //foreach (var v in results)
        //{
        //    strRet += v.ToString();
        //}
        return results;
    }
    async static void DoTranslateOld() {
        //路径  
        string fullPath = EditorUtility.OpenFolderPanel("", "", "");
        int TempNum = 0;

        //获取指定路径下面的所有资源文件  
        if (Directory.Exists(fullPath)) {
            DirectoryInfo direction = new DirectoryInfo(fullPath);
            FileInfo[] files = direction.GetFiles("*", SearchOption.AllDirectories);

            //Debug.Log(files.Length);
            for (int i = 0; i < files.Length; i++) {
                //.meta不管，本身不管
                if (files[i].Name.EndsWith(".meta") || files[i].Name.Equals("TranslateEditor.cs") || files[i].Name.Equals("MiniJSON.cs")) {
                    continue;
                }
                //Debug.Log( "Name:" + files[i].Name );  //打印出来这个文件夹下的所有文件
                if (files[i].Name.EndsWith(".json")) {

                    StreamReader sr = new StreamReader(files[i].FullName);

                    string str_ReadToEnd = sr.ReadToEnd();
                    //Debug.Log(str_ReadToEnd);
                    string[] SplitStr = { "\n" };
                    bool isChanged = false;
                    //按行拆分
                    string[] str_line = str_ReadToEnd.Split(SplitStr, System.StringSplitOptions.None);

                    for (int j = 0; j < str_line.Length; j++) {
                        //去头尾空白字符
                        string str_Trim = str_line[j].Trim();
                        if (str_Trim.Contains("//")) {
                            //取最后一个/再去头尾空白字符
                            str_Trim = str_Trim.Substring(str_Trim.LastIndexOf("/") + 1).Trim();
                            //Debug.Log("str_Trim:" + str_Trim);
                            //如果不是英文不进行翻译工作
                            if (IsHanZi(str_Trim)) {
                                //Debug.Log(str_Trim+"------是汉字");
                                continue;
                            }
                            string tempstr = GetNumberAlpha(str_Trim);
                            //Debug.Log(tempstr+"------不是汉字");

                            tempstr = TranslateStr(tempstr);

                            await Task.Delay(1000);
                            //Debug.Log(str_line[j].EndsWith("/n"));


                            str_line[j] = String.Concat(
                                str_line[j],
                                String.Concat(
                                    String.Concat(
                                        String.Concat(
                                            "\n",
                                        str_line[j].Substring(0, str_line[j].IndexOf("/")
                                                     )
                                                 ),
                                    "//"),
                                tempstr));
                            //str_line[j] += "//" + tempstr;
                            isChanged = true;

                            //break;
                        }


                    }

                    sr.Close();
                    sr.Dispose();
                    //Debug.Log(files[i].FullName);
                    if (isChanged) {
                        File.WriteAllLines(files[i].FullName, str_line, Encoding.UTF8);
                        TempNum++;
                    }
                }
            }
        }
        AssetDatabase.Refresh();
        Debug.Log("翻译成功,共翻译" + TempNum + "个脚本");
    }

    static void DeleteEnd(string path) {
        FileStream fileDownLoad = new FileStream(path, FileMode.Open, FileAccess.ReadWrite, FileShare.ReadWrite);


        int end = FindEndAlpha(fileDownLoad);
        fileDownLoad.SetLength(end);
        // fileDownLoad.Seek(0, System.IO.SeekOrigin.End);
        StreamWriter m_streamWriter = new StreamWriter(fileDownLoad);
        // m_streamWriter.BaseStream.Seek(0, SeekOrigin.Current);
        m_streamWriter.BaseStream.Position = end - 1;
        m_streamWriter.WriteLine(",");
        m_streamWriter.Flush();
        m_streamWriter.Close();
        fileDownLoad.Close();
        fileDownLoad.Dispose();
    }

    static int FindEndAlpha(FileStream fileDownLoad) {
        long Pos = 0;
        int Value;
        var Length = fileDownLoad.Length;
        bool HasText = false;
        do {
            Pos--;
            fileDownLoad.Seek(Pos, System.IO.SeekOrigin.End);

            //Delete_File_Lines.Write();

            Value = fileDownLoad.ReadByte();
            if (Value == 0xd || Value == 0xa) {
                if (HasText) break;
            } else
                HasText = true;
        } while (Length + Pos > 0);
        return (int)(Length + Pos);
    }
}

public class Translation {
    public string Src { get; set; }
    public string Dst { get; set; }
}

public class TranslationResult {
    public string Error_code { get; set; }
    public string Error_msg { get; set; }
    public string From { get; set; }
    public string To { get; set; }
    public string Query { get; set; }
    public Translation[] Trans_result { get; set; }
}

public enum Language {
    Auto = 0,
    ZH = 1,
    JP = 2,
    EN = 3,
    KOR = 4,
    SPA = 5,
    FRA = 6,
    TH = 7,
    ARA = 8,
    RU = 9,
    PT = 10,
    YUE = 11,
    WYW = 12,
    DE = 13,
    NL = 14,
    IT = 15,
    EL = 16
}