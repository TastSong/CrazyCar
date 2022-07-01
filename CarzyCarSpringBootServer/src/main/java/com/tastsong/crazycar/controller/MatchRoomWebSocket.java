package com.tastsong.crazycar.controller;

import javax.websocket.*;
import javax.websocket.server.PathParam;
import javax.websocket.server.ServerEndpoint;

import org.springframework.context.ApplicationContext;
import org.springframework.stereotype.Component;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.ApplicationContextRegister;
import com.tastsong.crazycar.model.MatchRoomInfoModel;
import com.tastsong.crazycar.service.MatchService;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONObject;
import cn.hutool.json.JSONUtil;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.io.IOException;
import java.util.ArrayList;
import java.util.concurrent.ConcurrentHashMap;



@ServerEndpoint("/websocket/MatchRoomWebSocket/{id}")
@Data
@NoArgsConstructor
@Component
public class MatchRoomWebSocket {
    public class MatchRoomPlayerInfo{
        public Integer uid;
        public String memberName;
        public Integer aid;
        public boolean isHouseOwner;
        public boolean canWade;
    }

    private static ConcurrentHashMap<String, ArrayList<MatchRoomPlayerInfo>> roomMap = new ConcurrentHashMap<String, ArrayList<MatchRoomPlayerInfo>>();
    private static int onlineCount = 0;
    private static ConcurrentHashMap<String, MatchRoomWebSocket> webSocketSet = new ConcurrentHashMap<String, MatchRoomWebSocket>();
    //与某个客户端的连接会话，需要通过它来给客户端发送数据
    private Session WebSocketsession;
    private String id = "";
    private JSONObject sendMsg = new JSONObject(); 
    private ArrayList<MatchRoomPlayerInfo> playerLists = new ArrayList<MatchRoomPlayerInfo>();
    private int maxNum = 2;
    private int curUid;
    private String roomId = "";
    private Integer startOffsetTime = 16;

    private MatchService matchService;
    
    // id = uid + "," + room_id
    @OnOpen
    public void onOpen(@PathParam(value = "id") String param, Session WebSocketsession, EndpointConfig config) {
        System.out.println(param);
        id = param;//接收到发送消息的人员编号
        curUid = Integer.parseInt(id.split(",")[0]);
        roomId = id.split(",")[1];
        this.WebSocketsession = WebSocketsession;
        webSocketSet.put(param, this);
        addOnlineCount();     
        
        ApplicationContext act = ApplicationContextRegister.getApplicationContext();
        matchService = act.getBean(MatchService.class);
        System.out.println("有新连接加入！当前在线人数为" + getOnlineCount());
    }
 

    @OnClose
    public void onClose() {
        if (!id.equals("")) {
            if (MatchRoomWebSocket.roomMap.containsKey(roomId)){
                for(int i = 0;i < MatchRoomWebSocket.roomMap.get(roomId).size(); i ++){
                    if(MatchRoomWebSocket.roomMap.get(roomId).get(i).uid == curUid){
                        MatchRoomWebSocket.roomMap.get(roomId).remove(i);
                        if(MatchRoomWebSocket.roomMap.get(roomId).size() == 0){
                            MatchRoomWebSocket.roomMap.remove(roomId);
                        }
                        break;
                    }
                }
                System.out.println("onClose : " + MatchRoomWebSocket.roomMap.size());
            } 
            webSocketSet.remove(id); 
            subOnlineCount();           
            System.out.println("有一连接关闭！当前在线人数为" + getOnlineCount());
        }
    }
 
    @OnMessage
    public void onMessage(String message, Session session) {
        System.out.println("onMessage : " + message);
        sendMsg = JSONUtil.parseObj(message);
    	Integer msgType = sendMsg.getInt("msg_type");
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
        Integer uid = message.getInt("uid");
        String roomId = message.getStr("room_id");
        String token = message.getStr("token");
        JSONObject data = new JSONObject();			
        data.putOpt("msg_type", Util.msgType.MatchRoomCreate);
        if(!Util.isLegalToken(token)){
            data.putOpt("code", 423);
        } else if (MatchRoomWebSocket.roomMap.containsKey(roomId)){
			data.putOpt("code", 421);
        } else{
            MatchRoomPlayerInfo info = new MatchRoomPlayerInfo();
            info.uid = uid;
            info.memberName = matchService.getUserName(uid);
            info.aid = matchService.getAid(uid);
            info.canWade = matchService.canWade(message.getInt("eid"));
            info.isHouseOwner = true;
            ArrayList<MatchRoomPlayerInfo> list = new ArrayList<MatchRoomPlayerInfo>();
            list.add(info);
            MatchRoomWebSocket.roomMap.put(roomId, list);
            data.putOpt("code", 200);
        }
        System.out.println("OnCreateRoom : " + data.toString());
        sendToUser(data.toString(), roomId);
    }

    private void onJoinRoom(JSONObject message) {
        Integer uid = message.getInt("uid");
        String roomId = message.getStr("room_id");
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
            MatchRoomPlayerInfo info = new MatchRoomPlayerInfo();
            info.uid = uid;
            info.memberName = matchService.getUserName(uid);
            info.aid = matchService.getAid(uid);
            info.canWade = matchService.canWade(message.getInt("eid"));
            info.isHouseOwner = false;
            MatchRoomWebSocket.roomMap.get(roomId).add(info);
            data.putOpt("code", 200);    
        }
        System.out.println("OnCreateRoom : " + data.toString());  
        sendToUser(data.toString(), roomId);
    }

    private void onStatusRoom(JSONObject message) {
        String roomId = message.getStr("room_id");
        JSONObject data = new JSONObject();		
        System.out.println("+++onStatusRoom+++");	
        data.putOpt("msg_type", Util.msgType.MatchRoomStatus);
        if (!MatchRoomWebSocket.roomMap.containsKey(roomId)){
			data.putOpt("code", 404);     
        } else{              
            JSONArray jsonArray = new JSONArray();
            playerLists = MatchRoomWebSocket.roomMap.get(roomId);
            for (int i = 0; i < playerLists.size(); i++){
                JSONObject jbItem = new JSONObject();
                jbItem.putOpt("member_name", playerLists.get(i).memberName);
                jbItem.putOpt("is_house_owner", playerLists.get(i).isHouseOwner);
                jbItem.putOpt("aid", playerLists.get(i).aid);
                jbItem.putOpt("uid", playerLists.get(i).uid);
                jbItem.putOpt("can_wade", playerLists.get(i).canWade);
                jsonArray.add(jbItem);
            }		
            data.putOpt("players", jsonArray);
            data.putOpt("code", 200);
        }
        System.out.println("OnStatusRoom : " + data.toString());
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
            for (int i = 0; i < playerLists.size(); i++){
                JSONObject jbItem = new JSONObject();
                jbItem.putOpt("member_name", playerLists.get(i).memberName);
                jbItem.putOpt("is_house_owner", playerLists.get(i).isHouseOwner);
                jbItem.putOpt("aid", playerLists.get(i).aid);
                jbItem.putOpt("uid", playerLists.get(i).uid);
                jbItem.putOpt("can_wade", playerLists.get(i).canWade);
                if (curUid != playerLists.get(i).uid){
                    jsonArray.add(jbItem);
                }
            }		
            data.putOpt("players", jsonArray);
            data.putOpt("code", 200);
        }
        System.out.println("onExitRoom : " + data.toString());
        sendToUser(data.toString(), roomId);
    }

    private void onStartRoom(JSONObject message) {
        System.out.println("On start Room");
        MatchRoomInfoModel infoModel = new MatchRoomInfoModel();
        infoModel.room_id = message.getStr("room_id");
        Integer mapCid = message.getInt("cid");
        infoModel.map_id = matchService.getMatchMapId(mapCid);
        infoModel.limit_time = matchService.getMatchMapLimitTime(mapCid);
        infoModel.times = matchService.getMatchMapTimes(mapCid);
        infoModel.start_time = System.currentTimeMillis()/1000 + startOffsetTime;
        infoModel.enroll_time =  System.currentTimeMillis()/1000;
        infoModel.class_name = "TastSong";
        infoModel.star = 2;
        System.out.println("++++++ " + JSONUtil.toJsonStr(infoModel));
        matchService.insertMatchClass(infoModel);
        System.out.println("++++++qqqqq ");
        Integer cid = matchService.getMatchRoomCid(infoModel.room_id, infoModel.start_time);
        System.out.println("++++++cid " + cid);
        JSONObject data = new JSONObject();			
        data.putOpt("msg_type", Util.msgType.MatchRoomStart);
        if (!MatchRoomWebSocket.roomMap.containsKey(roomId)){
			data.putOpt("code", 404);   
        } else{              	
            data.putOpt("cid", cid);
            data.putOpt("name", infoModel.class_name);
            data.putOpt("star", infoModel.star);
            data.putOpt("map_id", infoModel.map_id);
            data.putOpt("limit_time", infoModel.limit_time);
            data.putOpt("times", infoModel.times);
            data.putOpt("start_time", infoModel.start_time);
            data.putOpt("enroll_time", infoModel.enroll_time);
            data.putOpt("code", 200); 
        }
        System.out.println("onStartRoom : " + data.toString());
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
        System.out.println("onError app strong back");
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
