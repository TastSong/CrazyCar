package com.tastsong.crazycar.controller;

import java.util.concurrent.ConcurrentHashMap;

import javax.servlet.http.HttpServlet;

import cn.hutool.core.convert.Convert;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.backblaze.erasure.fec.Snmp;
import com.tastsong.crazycar.utils.Util;

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
public class KCPRttController extends HttpServlet implements KcpListener {
    private boolean isInit = false;
    private static int onlineCount = 0;
    private static final ConcurrentHashMap<String, Ukcp> kcpSet = new ConcurrentHashMap<>();
    private static final ConcurrentHashMap<String, JSONObject> createPlayerMsgMap = new ConcurrentHashMap<String, JSONObject>();

    private Ukcp uKcp;
    // 当前发消息的人员编号
    private String id = "";

    /**
     * @see HttpServlet#HttpServlet()
     */
    public KCPRttController() {
        super();
    }

    @PostMapping(value = "/RttServer")
    public Object doGet() throws Exception {
        JSONObject data = new JSONObject();
        if (!isInit) {
            initKCP();
            log.info("KCPRttController KCP initKCP");
            isInit = true;
        }
        data.putOpt("KCP", "KCP");
        return data;
    }

    private void initKCP() {
        KCPRttController kcpRttServer = new KCPRttController();

        ChannelConfig channelConfig = new ChannelConfig();
        channelConfig.nodelay(true, 10, 2, true);
        channelConfig.setSndwnd(300);
        channelConfig.setRcvwnd(300);
        channelConfig.setMtu(512);
        channelConfig.setAckNoDelay(true);
        channelConfig.setTimeoutMillis(10000);
        channelConfig.setCrc32Check(false);
        KcpServer kcpServer = new KcpServer();
        kcpServer.init(kcpRttServer, channelConfig, 50001);
    }

    @Override
    public void onConnected(Ukcp uKcp) {
        onlineCount++;
        log.info("Connected onlineCount = " + onlineCount);
        this.uKcp = uKcp;
    }

    @Override
    public void handleReceive(ByteBuf buf, Ukcp kcp) {
        byte[] bytes = new byte[buf.readableBytes()];
        buf.getBytes(buf.readerIndex(), bytes);
        JSONObject sendMsg = new JSONObject(buf.toString(CharsetUtil.UTF_8));
        int msgType = sendMsg.getInt("msg_type");
        if (msgType == Util.msgType.CreatePlayer) {
            onCreatePlayer(sendMsg);
        } else {
            sendToUser(sendMsg);
        }
    }

    private void onCreatePlayer(JSONObject data) {
        int uid = data.getInt("uid");
        int cid = data.getInt("cid");
        id = uid + "," + cid;
        log.info("Match onOpen id = " + id);
        kcpSet.put(id, this.uKcp);
        createPlayerMsgMap.put(id, data);
        for (String key : createPlayerMsgMap.keySet()) {
            if (key.split(",")[1].equals(Convert.toStr(cid))) {
                sendToUser(createPlayerMsgMap.get(key));
            }
        }
    }

    private void sendToUser(JSONObject message) {
        String cid = message.getStr("cid");
        int uid = message.getInt("uid");

        for (String key : kcpSet.keySet()) {
            if (!key.split(",")[0].equals(Convert.toStr(uid)) && key.split(",")[1].equals(cid)) {
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
        if (!id.isEmpty()) {
            kcpSet.remove(id);  //从set中删除
            createPlayerMsgMap.remove(id);
            onlineCount--;           //在线数减1
            log.info("onclose sum = " + onlineCount);
        }
    }
}
