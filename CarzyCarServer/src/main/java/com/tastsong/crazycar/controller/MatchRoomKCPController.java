package com.tastsong.crazycar.controller;

import java.util.ArrayList;
import java.util.concurrent.ConcurrentHashMap;

import javax.servlet.http.HttpServlet;
import org.springframework.context.ApplicationContext;

import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.backblaze.erasure.fec.Snmp;
import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.config.ApplicationContextRegister;
import com.tastsong.crazycar.model.MatchRoomInfoModel;
import com.tastsong.crazycar.model.MatchRoomPlayerInfo;
import com.tastsong.crazycar.service.MatchService;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONObject;
import io.netty.buffer.ByteBuf;
import io.netty.buffer.Unpooled;
import io.netty.util.CharsetUtil;
import kcp.ChannelConfig;
import kcp.KcpListener;
import kcp.KcpServer;
import kcp.Ukcp;
import lombok.extern.slf4j.Slf4j;

@RestController
@Scope("prototype")
@Slf4j
@RequestMapping(value = "/v2/KCP")
public class MatchRoomKCPController extends HttpServlet implements KcpListener {
    private static final long serialVersionUID = 1L;
    private boolean isInit = false;
    private static ConcurrentHashMap<String, Ukcp> kcpSet = new ConcurrentHashMap<String, Ukcp>();

    private Ukcp uKcp;

    private static ConcurrentHashMap<String, ArrayList<MatchRoomPlayerInfo>> roomMap = new ConcurrentHashMap<String, ArrayList<MatchRoomPlayerInfo>>();
    private static int onlineCount = 0;
    private String id = "";
    private ArrayList<MatchRoomPlayerInfo> playerLists = new ArrayList<MatchRoomPlayerInfo>();
    private int maxNum = 2;
    private int curUid;
    private String roomId = "";
    private Integer startOffsetTime = 16;

    private MatchService matchService;

    /**
     * @see HttpServlet#HttpServlet()
     */
    public MatchRoomKCPController() {
        super();
    }

    @PostMapping(value = "/MatchRoom")
    public Object doGet() throws Exception {
        JSONObject data = new JSONObject();
        if (!isInit) {
            initKCP();
            isInit = true;
        }
        data.putOpt("KCP", "KCP");
        return data;
    }

    private void initKCP() {
        MatchRoomKCPController kcpRttServer = new MatchRoomKCPController();

        ChannelConfig channelConfig = new ChannelConfig();
        channelConfig.nodelay(true, 10, 2, true);
        channelConfig.setSndwnd(300);
        channelConfig.setRcvwnd(300);
        channelConfig.setMtu(512);
        channelConfig.setAckNoDelay(true);
        channelConfig.setTimeoutMillis(10000);
        channelConfig.setCrc32Check(false);
        KcpServer kcpServer = new KcpServer();
        kcpServer.init(kcpRttServer, channelConfig, 50002);
    }

    @Override
    public void onConnected(Ukcp uKcp) {
        onlineCount++;
        ApplicationContext act = ApplicationContextRegister.getApplicationContext();
        matchService = act.getBean(MatchService.class);
        log.info("Connected onlineCount = " + onlineCount);
        this.uKcp = uKcp;
    }

    @Override
    public void handleReceive(ByteBuf buf, Ukcp kcp) {
        byte[] bytes = new byte[buf.readableBytes()];
        buf.getBytes(buf.readerIndex(), bytes);
        JSONObject sendMsg = new JSONObject(buf.toString(CharsetUtil.UTF_8));
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
        curUid = message.getInt("uid");
        roomId = message.getStr("room_id");
        id = curUid + "," + roomId;
        kcpSet.put(id, this.uKcp);
        System.out.println("++++++ " + id);
        String token = message.getStr("token");
        JSONObject data = new JSONObject();
        data.putOpt("msg_type", Util.msgType.MatchRoomCreate);
        data.putOpt("uid", curUid);
        if (!Util.isLegalToken(token)) {
            data.putOpt("code", 423);
        } else if (MatchRoomKCPController.roomMap.containsKey(roomId)) {
            data.putOpt("code", 421);
        } else {
            MatchRoomPlayerInfo info = new MatchRoomPlayerInfo();
            info.uid = curUid;
            info.memberName = matchService.getUserName(curUid);
            info.aid = matchService.getAid(curUid);
            info.canWade = matchService.canWade(message.getInt("eid"));
            info.isHouseOwner = true;
            ArrayList<MatchRoomPlayerInfo> list = new ArrayList<MatchRoomPlayerInfo>();
            list.add(info);
            MatchRoomKCPController.roomMap.put(roomId, list);
            data.putOpt("code", 200);
        }
        log.info("OnCreateRoom : " + data.toString());
        sendToUser(data, roomId);
    }

    private void onJoinRoom(JSONObject message) {
        curUid = message.getInt("uid");
        roomId = message.getStr("room_id");
        id = curUid + "," + roomId;
        kcpSet.put(id, this.uKcp);
        String token = message.getStr("token");
        JSONObject data = new JSONObject();
        data.putOpt("msg_type", Util.msgType.MatchRoomJoin);
        if (!Util.isLegalToken(token)) {
            data.putOpt("code", 422);
        } else if (!MatchRoomKCPController.roomMap.containsKey(roomId)) {
            data.putOpt("code", 404);
        } else if (MatchRoomKCPController.roomMap.get(roomId).size() >= maxNum) {
            data.putOpt("code", 423);
        } else {
            MatchRoomPlayerInfo info = new MatchRoomPlayerInfo();
            info.uid = curUid;
            info.memberName = matchService.getUserName(curUid);
            info.aid = matchService.getAid(curUid);
            info.canWade = matchService.canWade(message.getInt("eid"));
            info.isHouseOwner = false;
            MatchRoomKCPController.roomMap.get(roomId).add(info);
            data.putOpt("code", 200);
        }
        log.info("OnCreateRoom : " + data.toString());
        sendToUser(data, roomId);
    }

    private void onStatusRoom(JSONObject message) {
        String roomId = message.getStr("room_id");
        JSONObject data = new JSONObject();
        data.putOpt("msg_type", Util.msgType.MatchRoomStatus);
        if (!MatchRoomKCPController.roomMap.containsKey(roomId)) {
            data.putOpt("code", 404);
        } else {
            JSONArray jsonArray = new JSONArray();
            playerLists = MatchRoomKCPController.roomMap.get(roomId);
            for (int i = 0; i < playerLists.size(); i++) {
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
        log.info("OnStatusRoom : " + data.toString());
        sendToUser(data, roomId);
    }

    private void onExitRoom() {
        JSONObject data = new JSONObject();
        data.putOpt("msg_type", Util.msgType.MatchRoomExit);
        if (!MatchRoomKCPController.roomMap.containsKey(roomId)) {
            data.putOpt("code", 404);
        } else {
            data.putOpt("exit_uid", curUid);
            JSONArray jsonArray = new JSONArray();
            playerLists = MatchRoomKCPController.roomMap.get(roomId);
            // 不能在此处删除此Player在roomMap的数据，因为一会还需要发送给此玩家发消息
            for (int i = 0; i < playerLists.size(); i++) {
                JSONObject jbItem = new JSONObject();
                jbItem.putOpt("member_name", playerLists.get(i).memberName);
                jbItem.putOpt("is_house_owner", playerLists.get(i).isHouseOwner);
                jbItem.putOpt("aid", playerLists.get(i).aid);
                jbItem.putOpt("uid", playerLists.get(i).uid);
                jbItem.putOpt("can_wade", playerLists.get(i).canWade);
                if (curUid != playerLists.get(i).uid) {
                    jsonArray.add(jbItem);
                }
            }
            data.putOpt("players", jsonArray);
            data.putOpt("code", 200);
        }
        log.info("onExitRoom : " + data.toString());
        sendToUser(data, roomId);
        exitRoom();
    }

    private void onStartRoom(JSONObject message) {
        MatchRoomInfoModel infoModel = new MatchRoomInfoModel();
        infoModel.room_id = message.getStr("room_id");
        Integer mapCid = message.getInt("cid");
        infoModel.map_id = matchService.getMatchMapMapId(mapCid);
        infoModel.limit_time = matchService.getMatchMapLimitTime(mapCid);
        infoModel.times = matchService.getMatchMapTimes(mapCid);
        infoModel.start_time = System.currentTimeMillis() / 1000 + startOffsetTime;
        infoModel.enroll_time = System.currentTimeMillis() / 1000;
        infoModel.class_name = "TastSong";
        infoModel.star = 2;
        matchService.insertMatchClass(infoModel);
        Integer cid = matchService.getMatchRoomCid(infoModel.room_id, infoModel.start_time);
        JSONObject data = new JSONObject();
        data.putOpt("msg_type", Util.msgType.MatchRoomStart);
        if (!MatchRoomKCPController.roomMap.containsKey(roomId)) {
            data.putOpt("code", 404);
        } else {
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
        log.info("onStartRoom : " + data.toString());
        sendToUser(data, roomId);
    }

    private void sendToUser(JSONObject message, String roomId) {
        for (String key : kcpSet.keySet()) {
            if (key.split(",")[1].equals(roomId)) {
                byte[] bytes = message.toString().getBytes(CharsetUtil.UTF_8);
                ByteBuf buf = Unpooled.wrappedBuffer(bytes);
                kcpSet.get(key).write(buf);
            }
        }
    }

    @Override
    public void handleException(Throwable ex, Ukcp kcp) {
        ex.printStackTrace();
    }

    @Override
    public void handleClose(Ukcp uKcp) {
        log.info("handleClose " + Snmp.snmp.toString());
        Snmp.snmp = new Snmp();
        log.info("onClose");
    }

    private void exitRoom(){
        if (!id.equals("")) {
            if (MatchRoomKCPController.roomMap.containsKey(roomId)) {
                for (int i = 0; i < MatchRoomKCPController.roomMap.get(roomId).size(); i++) {
                    if (MatchRoomKCPController.roomMap.get(roomId).get(i).uid == curUid) {
                        MatchRoomKCPController.roomMap.get(roomId).remove(i);
                        if (MatchRoomKCPController.roomMap.get(roomId).size() == 0) {
                            MatchRoomKCPController.roomMap.remove(roomId);
                        }
                        break;
                    }
                }
                log.info("onClose : " + MatchRoomKCPController.roomMap.size());
            }
            kcpSet.remove(id);
            onlineCount--; // 在线数减1
            log.info("onclose sum = " + onlineCount);
        }
    }
}
