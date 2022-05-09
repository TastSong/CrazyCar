package CrazyCarServer;

import javax.print.DocFlavor.INPUT_STREAM;
import javax.websocket.*;
import javax.websocket.server.PathParam;
import javax.websocket.server.ServerEndpoint;

import com.alibaba.fastjson.JSONObject;
import java.io.IOException;
import java.util.ArrayList;
import java.util.concurrent.ConcurrentHashMap;
import Util.Util;
import com.alibaba.fastjson.JSONArray;

@ServerEndpoint("/websocket/MatchRoomWebSocket/{id}")
public class MatchRoomWebSocket {
    public class MatchRoomPlayerInfo{
        public Integer uid;
        public String memberName;
        public Integer aid;
        public boolean isHouseOwner;
    }

    private static ConcurrentHashMap<String, ArrayList<MatchRoomPlayerInfo>> roomMap = new ConcurrentHashMap<String, ArrayList<MatchRoomPlayerInfo>>();
    private static int onlineCount = 0;
    private static ConcurrentHashMap<String, MatchRoomWebSocket> webSocketSet = new ConcurrentHashMap<String, MatchRoomWebSocket>();
    //与某个客户端的连接会话，需要通过它来给客户端发送数据
    private Session WebSocketsession;
    private String id = "";
    private JSONObject sendMsg = new JSONObject(); 
    private ArrayList<MatchRoomPlayerInfo> playerLists = new ArrayList<MatchRoomPlayerInfo>();
    
    // id = uid + "," + room_id
    @OnOpen
    public void onOpen(@PathParam(value = "id") String param, Session WebSocketsession, EndpointConfig config) {
        System.out.println(param);
        id = param;//接收到发送消息的人员编号
        this.WebSocketsession = WebSocketsession;
        webSocketSet.put(param, this);
        addOnlineCount();           
        System.out.println("有新连接加入！当前在线人数为" + getOnlineCount());
    }
 

    @OnClose
    public void onClose() {
        if (!id.equals("")) {
            webSocketSet.remove(id); 
            subOnlineCount();           
            System.out.println("有一连接关闭！当前在线人数为" + getOnlineCount());
        }
    }
 
    @OnMessage
    public void onMessage(String message, Session session) {
        System.out.println("onMessage : " + message);
        sendMsg = JSONObject.parseObject(message);
    	Integer msgType = sendMsg.getInteger("msg_type");
        if (msgType == Util.msgType.MatchRoomCreate) {
            OnCreateRoom(sendMsg);
        } else if (msgType == Util.msgType.MatchRoomJoin) {
            
        } else if (msgType == Util.msgType.MatchRoomExit) {

        } else if (msgType == Util.msgType.MatchRoomStart) {

        } else if (msgType == Util.msgType.MatchRoomStatus) {
            OnStatusRoom(sendMsg);
        }
    }

    private void OnCreateRoom(JSONObject message) {
        Integer uid = message.getInteger("uid");
        String roomId = message.getString("room_id");
        JSONObject data = new JSONObject();			
        data.put("msg_type", Util.msgType.MatchRoomCreate);
        if (MatchRoomWebSocket.roomMap.containsKey(roomId)){
			data.put("code", 421);
            sendToUser(data.toString(), roomId);
        } else{
            MatchRoomPlayerInfo info = new MatchRoomPlayerInfo();
            info.uid = uid;
            info.memberName = Util.getStringDataByUid(uid, "user_name");
            info.aid = Util.getDataByUid(uid, "aid");
            info.isHouseOwner = true;
            ArrayList<MatchRoomPlayerInfo> list = new ArrayList<MatchRoomPlayerInfo>();
            list.add(info);
            MatchRoomWebSocket.roomMap.put(roomId, list);
            data.put("code", 200);
            System.out.println("OnCreateRoom : " + data.toString());
            sendToUser(data.toString(), roomId);
        }
    }

    private void OnStatusRoom(JSONObject message) {
        Integer uid = message.getInteger("uid");
        String roomId = message.getString("room_id");
        JSONObject data = new JSONObject();			
        data.put("msg_type", Util.msgType.MatchRoomStatus);
        if (!MatchRoomWebSocket.roomMap.containsKey(roomId)){
			data.put("code", 404);
            System.out.println("OnStatusRoom size : " + MatchRoomWebSocket.roomMap.size());
            sendToUser(data.toString(), roomId);
        } else{              
            JSONArray jsonArray = new JSONArray();
            playerLists = MatchRoomWebSocket.roomMap.get(roomId);
            for (int i = 0; i < playerLists.size(); i++){
                JSONObject jbItem = new JSONObject();
                jbItem.put("member_name", playerLists.get(i).memberName);
                jbItem.put("is_house_owner", playerLists.get(i).isHouseOwner);
                jbItem.put("aid", playerLists.get(i).aid);
                jbItem.put("uid", playerLists.get(i).uid);
                jsonArray.add(jbItem);
            }		
            data.put("players", jsonArray);
            data.put("code", 200);
            System.out.println("OnStatusRoom : " + data.toString());
            sendToUser(data.toString(), roomId);
        }
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
        System.out.println("发生错误");
        error.printStackTrace();
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
