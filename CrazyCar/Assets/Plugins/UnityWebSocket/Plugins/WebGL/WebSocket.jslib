var WebSocketLibrary =
{
	$webSocketManager:
	{
		/*
		 * Map of instances
		 *
		 * Instance structure:
		 * {
		 * 	url: string,
		 * 	ws: WebSocket
		 * }
		 */
		instances: {},

		/* Last instance ID */
		lastId: 0,

		/* Event listeners */
		onOpen: null,
		onMesssage: null,
		onError: null,
		onClose: null,

		/* Debug mode */
		debug: false
	},

	/**
	 * Set onOpen callback
	 *
	 * @param callback Reference to C# static function
	 */
	WebSocketSetOnOpen: function(callback)
	{
		webSocketManager.onOpen = callback;
	},

	/**
	 * Set onMessage callback
	 *
	 * @param callback Reference to C# static function
	 */
	WebSocketSetOnMessage: function(callback)
	{
		webSocketManager.onMessage = callback;
	},

	/**
	 * Set onMessage callback
	 *
	 * @param callback Reference to C# static function
	 */
	WebSocketSetOnMessageStr: function(callback)
	{
		webSocketManager.onMessageStr = callback;
	},

	/**
	 * Set onError callback
	 *
	 * @param callback Reference to C# static function
	 */
	WebSocketSetOnError: function(callback)
	{
		webSocketManager.onError = callback;
	},

	/**
	 * Set onClose callback
	 *
	 * @param callback Reference to C# static function
	 */
	WebSocketSetOnClose: function(callback)
	{
		webSocketManager.onClose = callback;
	},

	/**
	 * Allocate new WebSocket instance struct
	 *
	 * @param url Server URL
	 */
	WebSocketAllocate: function(url)
	{
		var urlStr = Pointer_stringify(url);
		var id = webSocketManager.lastId++;
		webSocketManager.instances[id] = {
			url: urlStr,
			ws: null
		};
		return id;
	},

	/**
	 * Remove reference to WebSocket instance
	 *
	 * If socket is not closed function will close it but onClose event will not be emitted because
	 * this function should be invoked by C# WebSocket destructor.
	 *
	 * @param instanceId Instance ID
	 */
	WebSocketFree: function(instanceId)
	{
		var instance = webSocketManager.instances[instanceId];
		if (!instance) return 0;

		// Close if not closed
		if (instance.ws !== null && instance.ws.readyState < 2)
			instance.ws.close();

		// Remove reference
		delete webSocketManager.instances[instanceId];

		return 0;
	},

	/**
	 * Connect WebSocket to the server
	 *
	 * @param instanceId Instance ID
	 */
	WebSocketConnect: function(instanceId)
	{
		var instance = webSocketManager.instances[instanceId];
		if (!instance) return -1;

		if (instance.ws !== null)
			return -2;

		instance.ws = new WebSocket(instance.url);

		instance.ws.onopen = function()
		{
			if (webSocketManager.debug)
				console.log("[JSLIB WebSocket] Connected.");
			if (webSocketManager.onOpen)
				Runtime.dynCall('vi', webSocketManager.onOpen, [ instanceId ]);
		};

		instance.ws.onmessage = function(ev)
		{
			if (webSocketManager.debug)
				console.log("[JSLIB WebSocket] Received message: ", ev.data);

			if (webSocketManager.onMessage === null)
				return;

			if (ev.data instanceof ArrayBuffer)
			{
				var dataBuffer = new Uint8Array(ev.data);
				var buffer = _malloc(dataBuffer.length);
				HEAPU8.set(dataBuffer, buffer);
				try
				{
					Runtime.dynCall('viii', webSocketManager.onMessage, [ instanceId, buffer, dataBuffer.length ]);
				}
				finally
				{
					_free(buffer);
				}
			}
			else if (ev.data instanceof Blob)
			{
				var reader = new FileReader();
				reader.addEventListener("loadend", function()
				{
						var dataBuffer = new Uint8Array(reader.result);
						var buffer = _malloc(dataBuffer.length);
						HEAPU8.set(dataBuffer, buffer);
						try
						{
							Runtime.dynCall('viii', webSocketManager.onMessage, [ instanceId, buffer, dataBuffer.length ]);
						}
						finally
						{
							reader = null;
							_free(buffer);
						}
				});
				reader.readAsArrayBuffer(ev.data);
			}
			else if(typeof ev.data == 'string')
			{
				var length = lengthBytesUTF8(ev.data) + 1;
				var buffer = _malloc(length);
				stringToUTF8(ev.data, buffer, length);
				try
				{
					Runtime.dynCall('vii', webSocketManager.onMessageStr, [ instanceId, buffer ]);
				}
				finally
				{
					_free(buffer);
				}
			}
			else
			{
				console.log("[JSLIB WebSocket] not support message type: ", (typeof ev.data));
			}
		};

		instance.ws.onerror = function(ev)
		{
			if (webSocketManager.debug)
				console.log("[JSLIB WebSocket] Error occured.");

			if (webSocketManager.onError)
			{
				var msg = "WebSocket error.";
				var length = lengthBytesUTF8(msg) + 1;
				var buffer = _malloc(length);
				stringToUTF8(msg, buffer, length);
				try
				{
					Runtime.dynCall('vii', webSocketManager.onError, [ instanceId, buffer ]);
				}
				finally
				{
					_free(buffer);
				}
			}
		};

		instance.ws.onclose = function(ev)
		{
			if (webSocketManager.debug)
				console.log("[JSLIB WebSocket] Closed, Code: " + ev.code + ", Reason: " + ev.reason);

			if (webSocketManager.onClose)
			{
				var msg = ev.reason;
				var length = lengthBytesUTF8(msg) + 1;
				var buffer = _malloc(length);
				stringToUTF8(msg, buffer, length);
				try
				{
					Runtime.dynCall('viii', webSocketManager.onClose, [ instanceId, ev.code, buffer ]);
				}
				finally
				{
					_free(buffer);
				}
			}

			instance.ws = null;
		};
		return 0;
	},

	/**
	 * Close WebSocket connection
	 *
	 * @param instanceId Instance ID
	 * @param code Close status code
	 * @param reasonPtr Pointer to reason string
	 */
	WebSocketClose: function(instanceId, code, reasonPtr)
	{
		var instance = webSocketManager.instances[instanceId];
		if (!instance) return -1;

		if (instance.ws === null)
			return -3;

		if (instance.ws.readyState === 2)
			return -4;

		if (instance.ws.readyState === 3)
			return -5;

		var reason = ( reasonPtr ? Pointer_stringify(reasonPtr) : undefined );

		try
		{
			instance.ws.close(code, reason);
		}
		catch(err)
		{
			return -7;
		}

		return 0;
	},

	/**
	 * Send message over WebSocket
	 *
	 * @param instanceId Instance ID
	 * @param bufferPtr Pointer to the message buffer
	 * @param length Length of the message in the buffer
	 */
	WebSocketSend: function(instanceId, bufferPtr, length) 
	{
		var instance = webSocketManager.instances[instanceId];
		if (!instance) return -1;

		if (instance.ws === null)
			return -3;

		if (instance.ws.readyState !== 1)
			return -6;

		instance.ws.send(HEAPU8.buffer.slice(bufferPtr, bufferPtr + length));

		return 0;
	},

	/**
	 * Send message string over WebSocket
	 *
	 * @param instanceId Instance ID
	 * @param stringPtr Pointer to the message string
	 */
	WebSocketSendStr: function(instanceId, stringPtr) 
	{
		var instance = webSocketManager.instances[instanceId];
		if (!instance) return -1;

		if (instance.ws === null)
			return -3;

		if (instance.ws.readyState !== 1)
			return -6;

		instance.ws.send(Pointer_stringify(stringPtr));

		return 0;
	},

	/**
	 * Return WebSocket readyState
	 *
	 * @param instanceId Instance ID
	 */
	WebSocketGetState: function(instanceId)
	{
		var instance = webSocketManager.instances[instanceId];
		if (!instance) return -1;

		if (instance.ws)
			return instance.ws.readyState;
		else
			return 3;
	}
};

autoAddDeps(WebSocketLibrary, '$webSocketManager');
mergeInto(LibraryManager.library, WebSocketLibrary);
