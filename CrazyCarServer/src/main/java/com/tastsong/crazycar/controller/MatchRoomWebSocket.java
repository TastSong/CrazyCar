package com.tastsong.crazycar.controller;

import javax.websocket.*;
import javax.websocket.server.ServerEndpoint;

import com.tastsong.crazycar.service.*;
import org.springframework.context.ApplicationContext;
import org.springframework.stereotype.Component;

import com.tastsong.crazycar.config.ApplicationContextRegister;
import com.tastsong.crazycar.model.MatchClassModel;
import com.tastsong.crazycar.dto.resp.RespMatchRoomPlayer;
import com.tastsong.crazycar.utils.Util;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONObject;
import cn.hutool.json.JSONUtil;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.extern.slf4j.Slf4j;

import java.io.IOException;
import java.util.ArrayList;
import java.util.concurrent.ConcurrentHashMap;

@ServerEndpoint("/websocket/MatchRoomWebSocket")
@Data
@Slf4j
@NoArgsConstructor
@Component
public class MatchRoomWebSocket {
    private static ConcurrentHashMap<String, ArrayList<RespMatchRoomPlayer>> roomMap = new ConcurrentHashMap<String, ArrayList<RespMatchRoomPlayer>>();
    private static int onlineCount = 0;
    private static ConcurrentHashMap<String, MatchRoomWebSocket> webSocketSet = new ConcurrentHashMap<String, MatchRoomWebSocket>();
    //与某个客户端的连接会话，需要通过它来给客户端发送数据
    private JSONObject sendMsg = new JSONObject(); 
    private ArrayList<RespMatchRoomPlayer> playerLists = new ArrayList<RespMatchRoomPlayer>();
    private int maxNum = 2;
    private EquipService equipService;
    private MatchRecordService matchRecordService;
    private MatchClassService matchClassService;
    private UserService userService;

    // 由于ws每个连接一个对象，所以可以有内部变量区别于KCP
    private Session WebSocketsession;
    private String id = "";
    private int curUid;
    private String roomId = "";
    
    // id = uid + "," + room_id
    @OnOpen
    public void onOpen(Session WebSocketsession, EndpointConfig config) {
        this.WebSocketsession = WebSocketsession;
        addOnlineCount();     
        
        ApplicationContext act = ApplicationContextRegister.getApplicationContext();
        equipService = act.getBean(EquipService.class);
        matchRecordService = act.getBean(MatchRecordService.class);
        matchClassService = act.getBean(MatchClassService.class);
        userService = act.getBean(UserService.class);
        log.info("Match Room onOpen, num = " + getOnlineCount());
    }
 

    @OnClose
    public void onClose() {
        if (!id.isEmpty()) {
            if (MatchRoomWebSocket.roomMap.containsKey(roomId)){
                for(int i = 0;i < MatchRoomWebSocket.roomMap.get(roomId).size(); i ++){
                    if(MatchRoomWebSocket.roomMap.get(roomId).get(i).getUid() == curUid){
                        MatchRoomWebSocket.roomMap.get(roomId).remove(i);
                        if(MatchRoomWebSocket.roomMap.get(roomId).isEmpty()){
                            MatchRoomWebSocket.roomMap.remove(roomId);
                        }
                        break;
                    }
                }
                log.info("onClose : " + MatchRoomWebSocket.roomMap.size());
            } 
            webSocketSet.remove(id); 
            id = "";
            subOnlineCount();           
            log.info("Match Room onClose, num = " + getOnlineCount());
        }
    }
 
    // todo: 加入一个Dispatcher，使用Dispatcher进行消息分发，与token验证
    @OnMessage
    public void onMessage(String message, Session session) {
        log.info("Match Room onMessage : " + message);
        sendMsg = JSONUtil.parseObj(message);
    	int msgType = sendMsg.getInt("msg_type");
        if (msgType == Util.msgType.MatchRoomCreate) {
            onCreateRoom(sendMsg);
        } else if (msgType == Util.msgType.MatchRoomJoin) {
            onJoinRoom(sendMsg);
        } else if (msgType == Util.msgType.MatchRoomExit) {
            onExitRoom();
        } else if (msgType == Util.msgType.MatchRoomStart) {
            onStartRoom(sendMsg);
        } else if (msgType == Util.msgType.MatchRoomStatus) {
            onStatusRoom(sendMsg);
        }
    }

    private void onCreateRoom(JSONObject message) {
        curUid = message.getInt("uid");
        roomId = message.getStr("room_id");
        id = curUid + "," + roomId;
        webSocketSet.put(id, this);
        String token = message.getStr("token");
        JSONObject data = new JSONObject();			
        data.putOpt("msg_type", Util.msgType.MatchRoomCreate);
        data.putOpt("uid", curUid);
        if(!Util.isLegalToken(token)){
            data.putOpt("code", 423);
        } else if (MatchRoomWebSocket.roomMap.containsKey(roomId)){
			data.putOpt("code", 421);
        } else{
            int eid = message.getInt("eid");
            RespMatchRoomPlayer info = matchClassService.toRespMatchRoom(curUid, eid, true);
            ArrayList<RespMatchRoomPlayer> list = new ArrayList<>();
            list.add(info);
            MatchRoomWebSocket.roomMap.put(roomId, list);
            data.putOpt("code", 200);
        }
        log.info("OnCreateRoom : " + data.toString());
        sendToUser(data.toString(), roomId);
    }

    private void onJoinRoom(JSONObject message) {
        curUid = message.getInt("uid");
        roomId = message.getStr("room_id");
        id = curUid + "," + roomId;
        webSocketSet.put(id, this);
        String token = message.getStr("token");
        JSONObject data = new JSONObject();			
        data.putOpt("msg_type", Util.msgType.MatchRoomJoin);
        if(!Util.isLegalToken(token)){
            data.putOpt("code", 422);
        } else if (!MatchRoomWebSocket.roomMap.containsKey(roomId)){
			data.putOpt("code", 404);
        } else if (MatchRoomWebSocket.roomMap.get(roomId).size() >= maxNum){
            data.putOpt("code", 423);
        } else{
            int eid = message.getInt("eid");
            RespMatchRoomPlayer info = matchClassService.toRespMatchRoom(curUid, eid, false);
            MatchRoomWebSocket.roomMap.get(roomId).add(info);
            data.putOpt("code", 200);    
        }
        log.info("OnCreateRoom : " + data);
        sendToUser(data.toString(), roomId);
    }

    private void onStatusRoom(JSONObject message) {
        String roomId = message.getStr("room_id");
        JSONObject data = new JSONObject();			
        data.putOpt("msg_type", Util.msgType.MatchRoomStatus);
        if (!MatchRoomWebSocket.roomMap.containsKey(roomId)){
			data.putOpt("code", 404);     
        } else{              
            JSONArray jsonArray = new JSONArray();
            playerLists = MatchRoomWebSocket.roomMap.get(roomId);
            jsonArray.addAll(playerLists);
            data.putOpt("players", jsonArray);
            data.putOpt("code", 200);
        }
        log.info("OnStatusRoom : " + data.toString());
        sendToUser(data.toString(), roomId);
    }

    private void onExitRoom() {
        JSONObject data = new JSONObject();			
        data.putOpt("msg_type", Util.msgType.MatchRoomExit);
        if (!MatchRoomWebSocket.roomMap.containsKey(roomId)){
			data.putOpt("code", 404);     
        } else{    
            data.putOpt("exit_uid", curUid);            
            JSONArray jsonArray = new JSONArray();
            playerLists = MatchRoomWebSocket.roomMap.get(roomId);
            // 不能在此处删除此Player在roomMap的数据，因为一会还需要发送给此玩家发消息
            for (RespMatchRoomPlayer playerList : playerLists) {
                if (curUid != playerList.getUid()) {
                    jsonArray.add(playerList);
                }
            }		
            data.putOpt("players", jsonArray);
            data.putOpt("code", 200);
        }
        log.info("onExitRoom : " + data.toString());
        sendToUser(data.toString(), roomId);
    }

    private void onStartRoom(JSONObject message) {
        String roomId = message.getStr("room_id");
        int mapCid = message.getInt("cid");
        MatchClassModel infoModel = matchClassService.createOneMatch(mapCid, roomId);
        JSONObject data = new JSONObject();
        data.putOpt("msg_type", Util.msgType.MatchRoomStart);
        if (!MatchRoomWebSocket.roomMap.containsKey(roomId)){
			data.putOpt("code", 404);
        } else{
            data.putOpt("cid", infoModel.getCid());
            data.putOpt("name", infoModel.getClass_name());
            data.putOpt("star", infoModel.getStar());
            data.putOpt("map_id", infoModel.getMap_id());
            data.putOpt("limit_time", infoModel.getLimit_time());
            data.putOpt("times", infoModel.getTimes());
            data.putOpt("start_time", infoModel.getStart_time());
            data.putOpt("enroll_time", infoModel.getEnroll_time());
            data.putOpt("code", 200);
        }
        log.info("onStartRoom : " + data.toString());
        sendToUser(data.toString(), roomId);
    }

    public void sendToUser(String message, String roomId) {  	
        //String now = getNowTime();
    	for (String key : webSocketSet.keySet()) {
          try {
        	  if (key.split(",")[1].equals(roomId)){
        		  webSocketSet.get(key).sendMessage(message);
        	  }              
          } catch (IOException e) {
              e.printStackTrace();
          }
       }     
    }

    @OnError
    public void onError(Session session, Throwable error) {
        log.info("onError app strong back");
    }

    public void sendMessage(String message) throws IOException {
        this.WebSocketsession.getBasicRemote().sendText(message);
        //this.session.getAsyncRemote().sendText(message);
    }
    public static synchronized int getOnlineCount() {
        return onlineCount;
    }
    public static synchronized void addOnlineCount() {
    	MatchRoomWebSocket.onlineCount++;
    }
    public static synchronized void subOnlineCount() {
    	MatchRoomWebSocket.onlineCount--;
    }
}
