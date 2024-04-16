package com.tastsong.crazycar.controller;

import javax.websocket.*;
import javax.websocket.server.ServerEndpoint;

import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.dto.req.ReqRoomMsg;
import com.tastsong.crazycar.dto.resp.RespRoomMsg;
import com.tastsong.crazycar.dto.resp.RespExitRoom;
import com.tastsong.crazycar.model.UserModel;
import com.tastsong.crazycar.service.*;
import org.springframework.context.ApplicationContext;
import org.springframework.stereotype.Component;

import com.tastsong.crazycar.config.ApplicationContextRegister;
import com.tastsong.crazycar.model.MatchClassModel;
import com.tastsong.crazycar.dto.resp.RespMatchRoomPlayer;
import com.tastsong.crazycar.utils.Util;

import cn.hutool.json.JSONArray;
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
    private static ConcurrentHashMap<String, ArrayList<RespMatchRoomPlayer>> roomMap = new ConcurrentHashMap<>();
    private static int onlineCount = 0;
    private static ConcurrentHashMap<String, MatchRoomWebSocket> webSocketSet = new ConcurrentHashMap<>();
    private ArrayList<RespMatchRoomPlayer> playerLists = new ArrayList<>();
    private int maxNum = 2;
    private EquipService equipService;
    private MatchRecordService matchRecordService;
    private MatchClassService matchClassService;
    private UserService userService;

    // 由于ws每个连接一个对象，所以可以有内部变量区别于KCP
    private Session WebSocketsession;
    private String id = "";
    private int curUid;
    private int curMap;
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
                    // 退出房间
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
            log.info("Match Room onClose, roomId = " + roomId + " num"+ getOnlineCount());
        }
    }
 
    // todo: 加入一个Dispatcher，使用Dispatcher进行消息分发，与token验证
    @OnMessage
    public void onMessage(String message, Session session) {
        log.info("Match Room onMessage : " + message);
        ReqRoomMsg req = JSONUtil.toBean(message, ReqRoomMsg.class);
        int msgType = req.getMsg_type();
        if (msgType == Util.msgType.MatchRoomCreate) {
            onCreateRoom(req);
        } else if (msgType == Util.msgType.MatchRoomJoin) {
            onJoinRoom(req);
        } else if (msgType == Util.msgType.MatchRoomExit) {
            onExitRoom();
        } else if (msgType == Util.msgType.MatchRoomStart) {
            onStartRoom(req);
        } else if (req.getMsg_type()  == Util.msgType.MatchRoomStatus) {
            onStatusRoom(req);
        }
    }

    private void onCreateRoom(ReqRoomMsg req) {
        curUid = req.getUid();
        roomId = req.getRoom_id();
        id = curUid + "," + roomId;
        webSocketSet.put(id, this);
        RespRoomMsg resp = getBasicRespRoomMsg();
        resp.setMsg_type(Util.msgType.MatchRoomCreate);
        if(!Util.isLegalToken(req.getToken())){
            resp.setCode(ResultCode.RC423.getCode());
        } else if (MatchRoomWebSocket.roomMap.containsKey(roomId)){
            resp.setCode(ResultCode.RC421.getCode());
        } else{
            UserModel userModel = userService.getUserByUid(curUid);
            RespMatchRoomPlayer info = matchClassService.toRespMatchRoom(curUid, userModel.getEid(), true);
            ArrayList<RespMatchRoomPlayer> list = new ArrayList<>();
            list.add(info);
            MatchRoomWebSocket.roomMap.put(roomId, list);
            resp.setCode(ResultCode.RC200.getCode());
        }
        log.info("OnCreateRoom : " + JSONUtil.toJsonStr(resp));
        sendToUser(JSONUtil.toJsonStr(resp), roomId);
    }

    private void onJoinRoom(ReqRoomMsg req) {
        curUid = req.getUid();
        roomId = req.getRoom_id();
        id = curUid + "," + roomId;
        webSocketSet.put(id, this);
        String token = req.getToken();
        RespRoomMsg resp = getBasicRespRoomMsg();
        resp.setMsg_type(Util.msgType.MatchRoomJoin);
        if(!Util.isLegalToken(token)){
            resp.setCode(ResultCode.RC423.getCode());
        } else if (!MatchRoomWebSocket.roomMap.containsKey(roomId)){
            resp.setCode(ResultCode.RC404.getCode());
        } else if (MatchRoomWebSocket.roomMap.get(roomId).size() >= maxNum){
            resp.setCode(ResultCode.RC423.getCode());
        } else{
            UserModel userModel = userService.getUserByUid(curUid);
            RespMatchRoomPlayer info = matchClassService.toRespMatchRoom(curUid, userModel.getEid(), false);
            MatchRoomWebSocket.roomMap.get(roomId).add(info);
            resp.setCode(ResultCode.RC200.getCode());
        }
        log.info("onJoinRoom : " + JSONUtil.toJsonStr(resp));
        sendToUser(JSONUtil.toJsonStr(resp), roomId);
    }

    private void onStatusRoom(ReqRoomMsg req) {
        String roomId = req.getRoom_id();
        RespRoomMsg resp = getBasicRespRoomMsg();
        resp.setMsg_type(Util.msgType.MatchRoomStatus);
        if (!MatchRoomWebSocket.roomMap.containsKey(roomId)){
            resp.setCode(ResultCode.RC404.getCode());
        } else{              
            JSONArray jsonArray = new JSONArray();
            playerLists = MatchRoomWebSocket.roomMap.get(roomId);
            jsonArray.addAll(playerLists);
            resp.setData(jsonArray);
            resp.setCode(ResultCode.RC200.getCode());
        }
        log.info("OnStatusRoom : " + JSONUtil.toJsonStr(resp));
        sendToUser(JSONUtil.toJsonStr(resp), roomId);
    }

    private void onExitRoom() {
        RespRoomMsg resp = getBasicRespRoomMsg();
        resp.setMsg_type(Util.msgType.MatchRoomExit);
        if (!MatchRoomWebSocket.roomMap.containsKey(roomId)){
            resp.setCode(ResultCode.RC404.getCode());
        } else{
            RespExitRoom data = new RespExitRoom();
            data.setExit_uid(curUid);
            JSONArray jsonArray = new JSONArray();
            playerLists = MatchRoomWebSocket.roomMap.get(roomId);
            // 不能在此处删除此Player在roomMap的数据，因为一会还需要发送给此玩家发消息
            for (RespMatchRoomPlayer playerList : playerLists) {
                if (curUid != playerList.getUid()) {
                    jsonArray.add(playerList);
                }
            }		
            data.setPlayers(jsonArray);
            resp.setData(data);
            resp.setCode(ResultCode.RC200.getCode());
        }
        log.info("onExitRoom : " + JSONUtil.toJsonStr(resp));
        sendToUser(JSONUtil.toJsonStr(resp), roomId);
    }

    private void onStartRoom(ReqRoomMsg req) {
        String roomId = req.getRoom_id();
        int mapCid = req.getCid();
        MatchClassModel infoModel = matchClassService.createOneMatch(mapCid, roomId);
        RespRoomMsg resp = getBasicRespRoomMsg();
        resp.setMsg_type(Util.msgType.MatchRoomStart);
        if (!MatchRoomWebSocket.roomMap.containsKey(roomId)){
            resp.setCode(ResultCode.RC404.getCode());
        } else{
            resp.setData(infoModel);
            resp.setCode(ResultCode.RC200.getCode());
        }
        log.info("onStartRoom : " + JSONUtil.toJsonStr(resp));
        sendToUser(JSONUtil.toJsonStr(resp), roomId);
    }

    public void sendToUser(String message, String roomId) {  	
        //String now = getNowTime();
    	for (String key : webSocketSet.keySet()) {
          try {
        	  if (key.split(",")[1].equals(roomId)){
        		  webSocketSet.get(key).sendMessage(message);
        	  }              
          } catch (IOException e) {
              log.info("Match Room sendToUser " + e.getMessage());
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

    private RespRoomMsg getBasicRespRoomMsg() {
        RespRoomMsg resp = new RespRoomMsg();
        resp.setUid(curUid);
        resp.setRoom_id(roomId);
        return resp;
    }
}
