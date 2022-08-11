package com.tastsong.crazycar.controller;

import javax.websocket.*;
import javax.websocket.server.ServerEndpoint;

import org.springframework.stereotype.Component;

import com.tastsong.crazycar.Util.Util;

import cn.hutool.json.JSONObject;
import cn.hutool.json.JSONUtil;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.extern.slf4j.Slf4j;

import java.io.IOException;
import java.util.concurrent.ConcurrentHashMap;


@ServerEndpoint("/websocket/MatchWebSocket")
@Data
@Slf4j
@NoArgsConstructor
@Component
public class MatchWebSocket {
	//静态变量，用来记录当前在线连接数。应该把它设计成线程安全的。
    private static int onlineCount = 0;
    //concurrent包的线程安全Set，用来存放每个客户端对应的MyWebSocket对象。若要实现服务端与单一客户端通信的话，可以使用Map来存放，其中Key可以为用户标识
    private static ConcurrentHashMap<String, MatchWebSocket> webSocketSet = new ConcurrentHashMap<String, MatchWebSocket>();
    private static ConcurrentHashMap<String, JSONObject> createPlayerMsgMap = new ConcurrentHashMap<String, JSONObject>();
    //与某个客户端的连接会话，需要通过它来给客户端发送数据
    private Session WebSocketsession;
    //当前发消息的人员编号
    private String id = "";
 
    /**
     * 连接建立成功调用的方法
     *
     * @param session 可选的参数。session为与某个客户端的连接会话，需要通过它来给客户端发送数据
     */
    @OnOpen
    public void onOpen(Session WebSocketsession, EndpointConfig config) {
        this.WebSocketsession = WebSocketsession; 
        addOnlineCount();           //在线数加1
        log.info("Match onOpen num = " + getOnlineCount());
    }
 
    /**
     * 连接关闭调用的方法
     */ 
    @OnClose
    public void onClose() {
        if (!id.equals("")) {
            webSocketSet.remove(id);  //从set中删除
            createPlayerMsgMap.remove(id);
            subOnlineCount();           //在线数减1
            log.info("onclose sum = " + getOnlineCount());
        }
    }
 
    /**
     * 收到客户端消息后调用的方法
     *
     * @param message 客户端发送过来的消息
     * @param session 可选的参数
     */
    @OnMessage
    public void onMessage(String message, Session session) {
        JSONObject sendMsg = JSONUtil.parseObj(message);
        Integer msgType = sendMsg.getInt("msg_type");
        if(msgType == Util.msgType.CreatePlayer){
            onCreatePlayer(sendMsg);
        } else{
            sendToUser(sendMsg);
        }
    }
    /**
     * 给指定的人发送消息
     * @param message
     */
    public void sendToUser(JSONObject message) {
    	String cid = message.getStr("cid");
        Integer uid = message.getInt("uid");
    	
        //String now = getNowTime();
    	for (String key : webSocketSet.keySet()) {
          try {
        	  if (!key.split(",")[0].equals(uid.toString()) && key.split(",")[1].equals(cid)){
        		  webSocketSet.get(key).sendMessage(message);
        	  }              
          } catch (IOException e) {
              e.printStackTrace();
          }
       }     
    }

    private void onCreatePlayer(JSONObject data){
        Integer uid = data.getInt("uid");
        Integer cid = data.getInt("cid");
        id = uid+ "," + cid;
        log.info("Match onOpen id = " + id);
        webSocketSet.put(id, this);
        createPlayerMsgMap.put(id, data);
        for (String key : createPlayerMsgMap.keySet()) {
            if (key.split(",")[1].equals(cid.toString())){
                sendToUser(createPlayerMsgMap.get(key));
            }              
         }   
    }

    /**
     * 发生错误时调用
     *
     * @param session
     * @param error
     */
    @OnError
    public void onError(Session session, Throwable error) {
        log.info("Match Websocket onError");
        error.printStackTrace();
    }
    /**
     * 这个方法与上面几个方法不一样。没有用注解，是根据自己需要添加的方法。
     *
     * @param message
     * @throws IOException
     */
    public void sendMessage(JSONObject message) throws IOException {
        this.WebSocketsession.getBasicRemote().sendText(message.toString());
        //this.session.getAsyncRemote().sendText(message);
    }
    public static synchronized int getOnlineCount() {
        return onlineCount;
    }
    public static synchronized void addOnlineCount() {
    	MatchWebSocket.onlineCount++;
    }
    public static synchronized void subOnlineCount() {
    	MatchWebSocket.onlineCount--;
    }
}

