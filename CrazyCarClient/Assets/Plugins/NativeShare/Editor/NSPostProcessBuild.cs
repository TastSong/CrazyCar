using System.IO;
using UnityEditor;
using UnityEngine;
#if UNITY_IOS
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
#endif

namespace NativeShareNamespace
{
	[System.Serializable]
	public class Settings
	{
		private const string SAVE_PATH = "ProjectSettings/NativeShare.json";

		public bool AutomatedSetup = true;
		public string PhotoLibraryUsageDescription = "The app requires access to Photos to save media to it.";

		private static Settings m_instance = null;
		public static Settings Instance
		{
			get
			{
				if( m_instance == null )
				{
					try
					{
						if( File.Exists( SAVE_PATH ) )
							m_instance = JsonUtility.FromJson<Settings>( File.ReadAllText( SAVE_PATH ) );
						else
							m_instance = new Settings();
					}
					catch( System.Exception e )
					{
						Debug.LogException( e );
						m_instance = new Settings();
					}
				}

				return m_instance;
			}
		}

		public void Save()
		{
			File.WriteAllText( SAVE_PATH, JsonUtility.ToJson( this, true ) );
		}

#if UNITY_2018_3_OR_NEWER
		[SettingsProvider]
		public static SettingsProvider CreatePreferencesGUI()
		{
			return new SettingsProvider( "Project/yasirkula/Native Share", SettingsScope.Project )
			{
				guiHandler = ( searchContext ) => PreferencesGUI(),
				keywords = new System.Collections.Generic.HashSet<string>() { "Native", "Share", "Android", "iOS" }
			};
		}
#endif

#if !UNITY_2018_3_OR_NEWER
		[PreferenceItem( "Native Share" )]
#endif
		public static void PreferencesGUI()
		{
			EditorGUI.BeginChangeCheck();

			Instance.AutomatedSetup = EditorGUILayout.Toggle( "Automated Setup", Instance.AutomatedSetup );

			EditorGUI.BeginDisabledGroup( !Instance.AutomatedSetup );
			Instance.PhotoLibraryUsageDescription = EditorGUILayout.DelayedTextField( new GUIContent( "Photo Library Usage Description", "Shown to user when they select the 'Save to Photos' option in share sheet" ), Instance.PhotoLibraryUsageDescription );
			EditorGUI.EndDisabledGroup();

			if( EditorGUI.EndChangeCheck() )
				Instance.Save();
		}
	}

	public class NSPostProcessBuild
	{
#if UNITY_IOS
		[PostProcessBuild]
		public static void OnPostprocessBuild( BuildTarget target, string buildPath )
		{
			if( !Settings.Instance.AutomatedSetup )
				return;

			if( target == BuildTarget.iOS )
			{
				string plistPath = Path.Combine( buildPath, "Info.plist" );

				PlistDocument plist = new PlistDocument();
				plist.ReadFromString( File.ReadAllText( plistPath ) );

				PlistElementDict rootDict = plist.root;
				rootDict.SetString( "NSPhotoLibraryUsageDescription", Settings.Instance.PhotoLibraryUsageDescription );
				rootDict.SetString( "NSPhotoLibraryAddUsageDescription", Settings.Instance.PhotoLibraryUsageDescription );

				File.WriteAllText( plistPath, plist.WriteToString() );
			}
		}
#endif
	}
}