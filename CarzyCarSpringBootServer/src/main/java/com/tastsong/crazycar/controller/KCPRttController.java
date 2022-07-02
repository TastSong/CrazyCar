package com.tastsong.crazycar.controller;

import java.util.concurrent.ConcurrentHashMap;

import javax.servlet.http.HttpServlet;

import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.backblaze.erasure.fec.Snmp;

import cn.hutool.json.JSONObject;
import io.netty.buffer.ByteBuf;
import kcp.ChannelConfig;
import kcp.KcpListener;
import kcp.KcpServer;
import kcp.Ukcp;


@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/KCP")
public class KCPRttController extends HttpServlet implements KcpListener {
	private static final long serialVersionUID = 1L;
	private boolean isInit = false;    
	private static int onlineCount = 0;
    private static ConcurrentHashMap<String, Ukcp> kcpSet = new ConcurrentHashMap<String, Ukcp>();
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
			isInit = true;
		}
		data.putOpt("KCP", "KCP");	
        return data;
	}
	
	private void initKCP() {
		KCPRttController kcpRttServer = new KCPRttController();

        ChannelConfig channelConfig = new ChannelConfig();
        channelConfig.nodelay(true,10,2,true);
        channelConfig.setSndwnd(300);
        channelConfig.setRcvwnd(300);
        channelConfig.setMtu(512);
        channelConfig.setAckNoDelay(true);
        channelConfig.setTimeoutMillis(10000);
        channelConfig.setCrc32Check(false);
        KcpServer kcpServer = new KcpServer();
        kcpServer.init(kcpRttServer,channelConfig,50001);     
	}
	
	@Override
    public void onConnected(Ukcp uKcp) {
		String arr =  uKcp.user().getRemoteAddress().toString();
        
        if (!kcpSet.contains(arr)) {
            onlineCount++;
            System.out.println("Connected : " + arr + " onlineCount = " + onlineCount);
            kcpSet.put(arr, uKcp);//加入map中
        }
    }

    @Override
    public void handleReceive(ByteBuf buf, Ukcp kcp) {
        byte[] bytes = new  byte[buf.readableBytes()];
        buf.getBytes(buf.readerIndex(),bytes);
        //遍历HashMap
        for (String key : kcpSet.keySet()) {
            kcpSet.get(key).write(buf);
        }
    }

    @Override
    public void handleException(Throwable ex, Ukcp kcp) {
        ex.printStackTrace();
    }

    @Override
    public void handleClose(Ukcp uKcp) {
        System.out.println("handleClose " + Snmp.snmp.toString());
        Snmp.snmp  = new Snmp();
        String arr =  uKcp.user().getRemoteAddress().toString();
        if (kcpSet.contains(arr)) {
            onlineCount--;
            kcpSet.remove(arr);
        }
    }
}

