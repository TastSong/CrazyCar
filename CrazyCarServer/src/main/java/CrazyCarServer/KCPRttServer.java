package CrazyCarServer;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.concurrent.ConcurrentHashMap;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.alibaba.fastjson.JSONObject;
import com.backblaze.erasure.fec.Snmp;

import Util.Util;
import io.netty.buffer.ByteBuf;
import kcp.ChannelConfig;
import kcp.KcpListener;
import kcp.KcpServer;
import kcp.Ukcp;

/**
 * Servlet implementation class KCPServer
 */
public class KCPRttServer extends HttpServlet implements KcpListener {
	private static final long serialVersionUID = 1L;
	private boolean isInit = false;    
	private static int onlineCount = 0;
    private static ConcurrentHashMap<String, Ukcp> kcpSet = new ConcurrentHashMap<String, Ukcp>();
    /**
     * @see HttpServlet#HttpServlet()
     */
    public KCPRttServer() {
        super();
        // TODO Auto-generated constructor stub
    }

    /**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html;charset=UTF-8");
		System.out.println("Init KCP");
		String token = request.getHeader("Authorization");
		if (!Util.JWT.isLegalJWT(token)){
			System.out.println("illegal JWT");
			return;
		} 

		PrintWriter out = response.getWriter();
		JSONObject outJB = new JSONObject();
		JSONObject dataJB = new JSONObject();
		if (!isInit) {
			initKCP();
			isInit = true;
		}
		outJB.put("code", 200);
		dataJB.put("KCP", "KCP");	
		outJB.put("data", dataJB);
		out.println(outJB.toString());
		out.flush();
		out.close();
	}
	
	private void initKCP() {
		KCPRttServer kcpRttServer = new KCPRttServer();

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

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
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
