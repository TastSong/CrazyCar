using UnityEngine;
using System.Collections;
using System;
using System.IO;

namespace cn.mob.unity3d.sdkporter
{
	public class MOBXCodeEditorModel
	{
        public string MobAppKey;

        public Hashtable permissions;
		public ArrayList folders;
		ArrayList comparisonFolders;
		public Hashtable buildSettings;
		public ArrayList frameworks;
		public ArrayList LSApplicationQueriesSchemes;
		public Hashtable infoPlistSet;
		ArrayList comparisonFrameworks;
		public ArrayList sysFrameworks;
		public Hashtable fileFlags;
		Hashtable platformConfList;
        public ArrayList platformJsList;

		public ArrayList URLSchemes;
		ArrayList comparisonURLSchemes;

        public bool isOpenRestoreScene;
        public ArrayList associatedDomains;
        public bool isHaveApple;
        public string entitlementsPath;

        public MOBXCodeEditorModel ()
		{
            MobAppKey = "";

            infoPlistSet = new Hashtable ();
			permissions = new Hashtable ();
			folders = new ArrayList ();
			comparisonFolders = new ArrayList ();
			buildSettings = new Hashtable ();
			frameworks = new ArrayList ();
			comparisonFrameworks = new ArrayList ();
			LSApplicationQueriesSchemes = new ArrayList ();
			URLSchemes = new ArrayList ();
			comparisonURLSchemes = new ArrayList ();
			sysFrameworks = new ArrayList ();
			fileFlags = new Hashtable ();
			SetPlatformConfList ();

            platformJsList = new ArrayList();

            isOpenRestoreScene = false;
            associatedDomains = new ArrayList();
            entitlementsPath = "";
        }

		//for shareSDK
		private void SetPlatformConfList()
		{
			string[] files = Directory.GetFiles(Application.dataPath , "All.pltpds", SearchOption.AllDirectories);
			if(files.Length > 0)
			{
				string filePath = files[0];
				FileInfo fileInfo = new FileInfo( filePath );
				if (fileInfo.Exists) 
				{
					StreamReader sReader = fileInfo.OpenText ();
					string contents = sReader.ReadToEnd();
					sReader.Close();
					sReader.Dispose();
					platformConfList = (Hashtable)MiniJSON.jsonDecode( contents );
				} 
				else 
				{
					platformConfList = new Hashtable();
				}
			}
		}

		public void LoadMobpds()
		{
			string[] files = Directory.GetFiles(Application.dataPath , "*.mobpds", SearchOption.AllDirectories);
			foreach( string filePath in files ) 
			{
				//读取配置
				ReadMobpds (filePath);
			}
		}
		private void ReadMobpds(string filePath)
		{
			ReadMobpds (filePath,"",null,null);
		}
		//读取配置debug.logdebug.log
		private void ReadMobpds(string filePath,string appkey,string savefilePath, Hashtable deviceInfo)
		{
			FileInfo fileInfo = new FileInfo( filePath );
            
			if(fileInfo.Exists)
			{
				StreamReader sReader = fileInfo.OpenText();
				string contents = sReader.ReadToEnd();
				sReader.Close();
				sReader.Dispose();
				Hashtable datastore = (Hashtable)MiniJSON.jsonDecode( contents );
                //savefilePath

                
                int index = filePath.LastIndexOf("\\");
                if (index == -1) {
                    index = filePath.LastIndexOf("/");
                }
                if (savefilePath == null)
				{
					savefilePath = filePath;
					savefilePath = savefilePath.Substring (0,index);

				}
                
                
                //permissionsreplaceAppKeydebug.logdebug.log
                AddPrmissions (datastore);
				//LSApplicationQueriesSchemes
				AddLSApplicationQueriesSchemes (datastore,appkey,deviceInfo);
				//folders
				AddFolders (datastore,savefilePath);
				//buildSettings
				AddBuildSettings (datastore);
				//系统库添加
				AddSysFrameworks(datastore);
				//添加非系统 Framework 配置需要设置指定参数
				AddFrameworks (datastore,savefilePath);
				//添加 URLSchemes
				AddURLSchemes(datastore,appkey,deviceInfo);
				//添加 InfoPlistSet
				AddInfoPlistSet(datastore,appkey, deviceInfo);
				//子平台
				AddPlatformConf(datastore,savefilePath);
				//添加 fileFlags 一些需要特殊设置编译标签的文件 如ARC下MRC
				AddFileFlags(datastore);

                //添加场景还原
                AddRestoreScene(datastore, savefilePath);

                //添加associatedDomains
                AddAssociatedDomains(datastore, savefilePath);
            }
        }

		//文件路径debug.log
		private void AddFileFlags(Hashtable dataSource)
		{
			string dataKey = "fileFlags";
			if(dataSource.ContainsKey(dataKey))
			{
				Hashtable tempArrayList = (Hashtable)dataSource[dataKey];
				foreach (string fileName in tempArrayList.Keys)
				{
					if(!fileFlags.ContainsKey(fileName))
					{
						string flag = (string)tempArrayList[fileName];
						fileFlags.Add (fileName, flag);
					}
				}
			}
		}

		//文件路径debug.log
		private void AddSysFrameworks(Hashtable dataSource)
		{
			string dataKey = "sysFramework";
			if(dataSource.ContainsKey(dataKey))
			{
				ArrayList tempArrayList = (ArrayList)dataSource[dataKey];
				foreach (string value in tempArrayList)
				{
					if(!sysFrameworks.Contains(value))
					{
						sysFrameworks.Add (value);
					}
				}
			}
		}

		//文件路径debug.log
		private void AddFrameworks(Hashtable dataSource,string path)
		{
			string dataKey = "framework";
			if(dataSource.ContainsKey(dataKey))
			{
				ArrayList tempArrayList = (ArrayList)dataSource[dataKey];
				foreach (string value in tempArrayList)
				{
					string filePath = path + value;
					if(!comparisonFrameworks.Contains(filePath))
					{
						comparisonFrameworks.Add (filePath);
						MOBPathModel pathModel = new MOBPathModel ();
						pathModel.rootPath = path;
						pathModel.savePath = value;
						pathModel.filePath = filePath;
						frameworks.Add (pathModel);
					}
				}
			}
		}

		//添加 shareSDK 子平台
		private void AddPlatformConf(Hashtable dataSource,string savefilePath)
		{
			string dataKey = "ShareSDKPlatforms";
			if (dataSource.ContainsKey (dataKey)) 
			{
				Hashtable platforms = (Hashtable)dataSource[dataKey];
				
				foreach (var key in platforms.Keys) 
				{
					
					//Debug.Log(key);
					string fileName = (string)platformConfList[key];
					platformJsList.Add(fileName + ".js");
                    
                    var files = System.IO.Directory.GetFiles(Application.dataPath , fileName + ".pltpds", System.IO.SearchOption.AllDirectories);
                    
                    if (fileName.Equals("Apple"))
                    {
                        isHaveApple = true;
                      
                    }
					if ( files.Length > 0) 
					{

						string filePath = files [0];

						string appkey = (string)platforms[key];

                        Hashtable deviceInfo = (Hashtable)dataSource["ShareSDKDeviceInfo"];
						//读取配置
						ReadMobpds (filePath,appkey,savefilePath, (Hashtable)deviceInfo[key]);
					}
						
				}
			}
		}

		//需要补充 appkey
		private string replaceAppKey(string dataStr ,string appkey, Hashtable datastore)
		{

			if (dataStr.Contains("{appkey}"))
			{
				return dataStr.Replace("{appkey}", appkey);
			}
			else if (dataStr.Contains("{appkey16}"))
			{
				int intAppkey = int.Parse(appkey);
				string temp = Convert.ToString(intAppkey, 16);
				while (temp.Length < 8)
				{
					temp = "0" + temp;
				}
				return dataStr.Replace("{appkey16}", temp.ToUpper());
			}
			else if (dataStr.Contains("{universalLink}"))
			{
				if (datastore != null)
				{
					string universalLink = (string)datastore["universalLink"];
					if (universalLink == null)
					{
						universalLink = "";
					}
					return universalLink;
				}
			}
			else if (dataStr.Contains("{redirect_uri}")) {
				string redirect_uri = (string)datastore["redirect_uri"];
				if (redirect_uri == null)
				{
					redirect_uri = "";
                }else
                {
					int index = redirect_uri.IndexOf("://");
					redirect_uri = redirect_uri.Substring(0,index);
                }
				return redirect_uri;
			}
			return dataStr;
		}

		private void AddInfoPlistSet(Hashtable dataSource,string appkey, Hashtable deviceInfo)
		{
			string dataKey = "infoPlistSet";
           
            if (dataSource.ContainsKey (dataKey)) 
			{
				Hashtable tempHashtable = (Hashtable)dataSource[dataKey];
				foreach (string key in tempHashtable.Keys) 
				{
					
					if(!infoPlistSet.ContainsKey(key))
					{
						var value = tempHashtable[key];
						if (value.GetType ().Equals (typeof(string))) {
							string valueStr = replaceAppKey ((string)value, appkey, deviceInfo);
							infoPlistSet.Add (key, valueStr);
						} else if (value.GetType ().Equals (typeof(Hashtable))) 
						{
							Hashtable temp = (Hashtable)value;
							Hashtable saveHashtable = new Hashtable ();
                            foreach (string tempKey in temp.Keys) {
								//暂时只支持1层dict
								string valueStr = (string)temp [tempKey];
                                
								valueStr = replaceAppKey (valueStr, appkey, deviceInfo);
								saveHashtable.Add (tempKey,valueStr);
							}
                           
                            infoPlistSet.Add (key, saveHashtable);
						}
					}
				}
			}
		}

		//添加 URLSchemes
		private void AddURLSchemes(Hashtable dataSource,string appkey, Hashtable deviceInfo)
		{
			string dataKey = "URLSchemes";
			if (dataSource.ContainsKey (dataKey)) 
			{
				Hashtable tempHashtable = (Hashtable)dataSource[dataKey];
				string CFBundleURLName = (string)tempHashtable["CFBundleURLName"];
				if(!comparisonURLSchemes.Contains(CFBundleURLName))
				{
					comparisonURLSchemes.Add (CFBundleURLName);
					ArrayList urlArray = (ArrayList)tempHashtable["CFBundleURLSchemes"];
					ArrayList formetArray = new ArrayList ();
					foreach(string url in urlArray)
					{
						
						string urlStr = replaceAppKey (url,appkey,deviceInfo);
						formetArray.Add(urlStr);
					}
					tempHashtable ["CFBundleURLSchemes"] = formetArray;
					URLSchemes.Add (tempHashtable);
				}
			}
		}

		//添加 LSApplicationQueriesSchemes
		private void AddLSApplicationQueriesSchemes(Hashtable dataSource,string appkey, Hashtable deviceInfo)
		{
			string dataKey = "LSApplicationQueriesSchemes";
			if(dataSource.ContainsKey(dataKey))
			{
				ArrayList tempArray = (ArrayList)dataSource[dataKey];
				foreach (string str in tempArray)
				{
					string dataStr = replaceAppKey (str,appkey,deviceInfo);
					if(!LSApplicationQueriesSchemes.Contains(dataStr))
					{
						LSApplicationQueriesSchemes.Add (dataStr);
					}
				}
			}
		}

		//添加 buildSettings
		private void AddBuildSettings(Hashtable dataSource)
		{
			string dataKey = "buildSettings";
			if(dataSource.ContainsKey(dataKey))
			{
				Hashtable tempHashtable = (Hashtable)dataSource[dataKey];
				foreach (string key in tempHashtable.Keys)
				{
					//没有的情况下
					if (!buildSettings.ContainsKey (key)) 
					{
						var value = tempHashtable [key];
						buildSettings.Add (key, value);
					} 
					else //已经存在的情况下进行比较添加
					{
						ArrayList settings = (ArrayList)tempHashtable [key];
						ArrayList targetSettings = (ArrayList)buildSettings [key];
						foreach (string setStr in settings)
						{
							if(!targetSettings.Contains(setStr))
							{
								targetSettings.Add (setStr);
							}
						}
					}
				}
			}
		}

		//设置权限
		private void AddPrmissions(Hashtable dataSource)
		{
			string dataKey = "permissions";
			if(dataSource.ContainsKey(dataKey))
			{
				Hashtable tempHashtable = (Hashtable)dataSource[dataKey];
				foreach (string key in tempHashtable.Keys)
				{
					if(!permissions.ContainsKey(key))
					{
						string value = (string)tempHashtable[key];
						permissions.Add (key,value);
					}
				}
			}
		}
		//文件路径
		private void AddFolders(Hashtable dataSource,string path)
		{
			string dataKey = "folders";
			if(dataSource.ContainsKey(dataKey))
			{
				ArrayList tempArrayList = (ArrayList)dataSource[dataKey];
				foreach (string value in tempArrayList)
				{
					string filePath = path + value;
//					Debug.LogWarning (filePath);
					if(!comparisonFolders.Contains(filePath))
					{
						comparisonFolders.Add (filePath);
						MOBPathModel pathModel = new MOBPathModel ();
						pathModel.rootPath = path;
						pathModel.savePath = value;
						pathModel.filePath = filePath;
						folders.Add (pathModel);
					}
				}
			}
		}

        //场景还原 开关及XCode下Capabilities->AssociatedDomains
        private void AddRestoreScene(Hashtable dataSource, string savefilePath)
        {
            string dataKey = "ShareSDKRestoreScene";
            if (dataSource.ContainsKey(dataKey))
            {
                Hashtable restoreSceneInfo = (Hashtable)dataSource[dataKey];
                if (restoreSceneInfo.ContainsKey("open") && int.Parse((string)restoreSceneInfo["open"]) == 1)
                {
                    isOpenRestoreScene = true;

                    var files = System.IO.Directory.GetFiles(Application.dataPath, "restoreScene.rspds", System.IO.SearchOption.AllDirectories);

                    if (files.Length > 0)
                    {
                        string filePath = files[0];

                        string appkey = MobAppKey;
                        //读取配置
                        ReadMobpds(filePath, appkey, savefilePath,null);
                    }

                    if (restoreSceneInfo.ContainsKey("Capabilitites_EntitlementsPath"))
                    {
                        entitlementsPath = (string)restoreSceneInfo["Capabilitites_EntitlementsPath"];
                    }

                    if (restoreSceneInfo.ContainsKey("Capabilitites_AssociatedDomain"))
                    {
                        associatedDomains.Add((string)restoreSceneInfo["Capabilitites_AssociatedDomain"]);
                    }
                }
            }
        }
        //XCode下Capabilities->AssociatedDomains
        private void AddAssociatedDomains(Hashtable dataSource, string savefilePath)
        {
            string dataKey = "AssociatedDomains";
            if (dataSource.ContainsKey(dataKey))
            {
                ArrayList tempArrayList = (ArrayList)dataSource[dataKey];
                foreach (string value in tempArrayList)
                {
                    associatedDomains.Add(value);
                }
            }
        }

    }
}