using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Utils;

public class GameHelper : MonoBehaviour {
	#region Log
	public KeyCode toggleKey = KeyCode.BackQuote;
	public bool openOnStart = false;
	public bool shakeToOpen = true;
	public float shakeAcceleration = 3f;
	public bool clampLogCount = false;
	public int maxLogCount = 1000;

	private readonly GUIContent clearLabel = new GUIContent("Clear", "Clear the contents of the console.");
	private readonly GUIContent HideLabel = new GUIContent("Hide", "Hide the contents");
	private readonly GUIContent collapseLabel = new GUIContent("Collapse", "Hide repeated messages.");

	private bool isCollapsed;
	private bool isLogPanelVisible;
	private Vector2 scrollPosition;

	private Dictionary<LogType, Color> logTypeColors = new Dictionary<LogType, Color>
	{
		{ LogType.Assert, Color.white },
		{ LogType.Error, Color.red },
		{ LogType.Exception, Color.red },
		{ LogType.Log, Color.white },
		{ LogType.Warning, Color.yellow },
	};
	private Dictionary<LogType, bool> logTypeFilters = new Dictionary<LogType, bool>
	{
		{ LogType.Assert, true },
		{ LogType.Error, true },
		{ LogType.Exception, true },
		{ LogType.Log, true },
		{ LogType.Warning, true },
	};

	private List<LogInfo> logs = new List<LogInfo>();
	private ConcurrentQueue<LogInfo> queuedLogs = new ConcurrentQueue<LogInfo>();
	#endregion

	#region Road
	private string roadId = "1";
	private bool roadDir;
	#endregion

	#region Normal
	private const int margin = 50;
	private const string windowTitle = "GameHelper";
	private float windowHeight = 150;
	private bool showAllBtn = false;
	private Rect windowRect = new Rect(margin, margin, Screen.width - (margin * 2), Screen.height - (margin * 2));
	#endregion

	void OnDisable() {
		Application.logMessageReceivedThreaded -= HandleLogThreaded;
	}

	void OnEnable() {
		Application.logMessageReceivedThreaded += HandleLogThreaded;
	}

	void Start() {
		isLogPanelVisible = openOnStart;
	}

	public void SetLogPanelStatus(bool show) {
		isLogPanelVisible = show;
	}

	void OnGUI() {
		if (!isLogPanelVisible) {
			// 不显示log
			float width = 300.0f;
			float btnHeight = 45.0f;
			GUILayout.Window(0, new Rect(Screen.width / 2 - width, 0, width, windowHeight), (int windowID) => {
				if (showAllBtn) {
					if (GUILayout.Button("Show", GUILayout.Width(width), GUILayout.Height(btnHeight))) {
						SetLogPanelStatus(true);
					}
				}
				showAllBtn = GUILayout.Toggle(showAllBtn, "    Show All Btn");
				windowHeight = showAllBtn ? 140.0f : 30.0f;
			}, windowTitle);
		} else {
			// 显示log
			windowRect = GUILayout.Window(1, windowRect, DrawWindow, windowTitle);
		}
	}

	void Update() {
		UpdateQueuedLogs();
		if (Input.GetKeyDown(toggleKey)) {
			isLogPanelVisible = !isLogPanelVisible;
		}
		if (shakeToOpen && Input.acceleration.sqrMagnitude > shakeAcceleration) {
			isLogPanelVisible = !isLogPanelVisible;
		}
	}

	/************************************* Log ****************************************/
	void UpdateQueuedLogs() {
		LogInfo log;
		while (queuedLogs.TryDequeue(out log)) {
			ShowLogItem(log);
		}
	}

	void ShowLogItem(LogInfo log) {
		var lastLog = logs.Count == 0 ? null : logs.Last();
		bool isDuplicateOfLastLog = log != null ? log.EqualsTo(lastLog) : false;

		if (isDuplicateOfLastLog) {
			log.count = lastLog.count + 1;
			logs[logs.Count - 1] = log;
		} else {
			logs.Add(log);
			if (clampLogCount) {
				RemoveUnnecessaryLogs();
			}
		}
	}

	void DrawWindow(int windowID) {
		DrawLogList();
		DrawToolbar();
	}

	void DrawLogList() {
		scrollPosition = GUILayout.BeginScrollView(scrollPosition);
		GUILayout.BeginVertical();
		// filter logs
		var visibleLogs = logs.Where((LogInfo log) => { return logTypeFilters[log.type]; });
		foreach (LogInfo log in visibleLogs) {
			DrawLog(log);
		}
		GUILayout.EndVertical();
		var innerScrollRect = GUILayoutUtility.GetLastRect();
		GUILayout.EndScrollView();


		var outerScrollRect = GUILayoutUtility.GetLastRect();
		if (Event.current.type == EventType.Repaint && IsScrolledToBottom(innerScrollRect, outerScrollRect)) {
			ScrollToBottom();
		}

		GUI.contentColor = Color.white;
	}

	void DrawLog(LogInfo log) {
		GUI.contentColor = logTypeColors[log.type];
		if (isCollapsed) {
			DrawCollapsedLog(log);
		} else {
			DrawExpandedLog(log);
		}
	}

	void DrawCollapsedLog(LogInfo log) {
		GUILayout.BeginHorizontal();

		GUILayout.Label(log.GetFinalMessage());
		GUILayout.FlexibleSpace();
		GUILayout.Label(log.count.ToString(), GUI.skin.box);

		GUILayout.EndHorizontal();
	}

	void DrawExpandedLog(LogInfo log) {
		for (var i = 0; i < log.count; i += 1) {
			GUILayout.Label(log.GetFinalMessage());
		}
	}

	void DrawToolbar() {
		GUILayout.BeginHorizontal();

		if (GUILayout.Button(clearLabel)) {
			logs.Clear();
		}
		if (GUILayout.Button(HideLabel)) {
			SetLogPanelStatus(false);
		}

		foreach (LogType logType in Enum.GetValues(typeof(LogType))) {
			var currentState = logTypeFilters[logType];
			var label = logType.ToString();
			logTypeFilters[logType] = GUILayout.Toggle(currentState, label, GUILayout.ExpandWidth(false));
			GUILayout.Space(20);
		}

		isCollapsed = GUILayout.Toggle(isCollapsed, collapseLabel, GUILayout.ExpandWidth(false));

		GUILayout.EndHorizontal();
	}

	bool IsScrolledToBottom(Rect innerScrollRect, Rect outerScrollRect) {
		var innerScrollHeight = innerScrollRect.height;

		var outerScrollHeight = outerScrollRect.height - GUI.skin.box.padding.vertical;

		if (outerScrollHeight > innerScrollHeight) {
			return true;
		}

		return Mathf.Approximately(innerScrollHeight, scrollPosition.y + outerScrollHeight);
	}

	void ScrollToBottom() {
		scrollPosition = new Vector2(0, Int32.MaxValue);
	}

	void RemoveUnnecessaryLogs() {
		var amountToRemove = logs.Count - maxLogCount;
		if (amountToRemove <= 0) {
			return;
		}
		logs.RemoveRange(0, amountToRemove);
	}

	void HandleLogThreaded(string message, string stackTrace, LogType type) {
		var log = new LogInfo {
			count = 1,
			message = message,
			stackTrace = stackTrace,
			type = type,
		};
		queuedLogs.Enqueue(log);
	}
	/************************************* Log ****************************************/
}

public class LogInfo {
	public int count;
	public string message;
	public string stackTrace;
	public LogType type;

	private const int MaxMessageLength = 16382;

	public bool EqualsTo(LogInfo log) {
		if (log == null)
			return false;
		return message == log.message && stackTrace == log.stackTrace && type == log.type;
	}

	public string GetFinalMessage() {
		if (string.IsNullOrEmpty(message))
			return "";
		return message.Length <= MaxMessageLength ? message : message.Substring(0, MaxMessageLength);
	}
}

public class ConcurrentQueue<T> {
	private readonly System.Object queueLock = new System.Object();
	private readonly Queue<T> queue = new Queue<T>();

	public void Enqueue(T item) {
		lock (queueLock) {
			queue.Enqueue(item);
		}
	}

	public bool TryDequeue(out T result) {
		lock (queueLock) {
			if (queue.Count == 0) {
				result = default(T);
				return false;
			}

			result = queue.Dequeue();
			return true;
		}
	}
}