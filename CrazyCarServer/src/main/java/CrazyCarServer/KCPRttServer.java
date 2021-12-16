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
	
	private Ukcp ukcp;
	private boolean isInit = false; 	
	private static int onlineCount = 0;
    private static ConcurrentHashMap<String, KCPRttServer> kcpServerSet = new ConcurrentHashMap<String, KCPRttServer>();
    private String id = "";
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
		System.out.println("Init KCP    1");
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
        channelConfig.setConv(40001);
        channelConfig.setSndwnd(300);
        channelConfig.setRcvwnd(300);
        channelConfig.setMtu(512);
        channelConfig.setAckNoDelay(true);
        channelConfig.setTimeoutMillis(10000);
        channelConfig.setCrc32Check(false);
        KcpServer kcpServer = new KcpServer();
        kcpServer.init(kcpRttServer,channelConfig,40001);     
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}
	
	private String uid;
	@Override
    public void onConnected(Ukcp ukcp) {
		uid = ukcp.user().getRemoteAddress().toString();
        System.out.println("Connected : " + uid);
        if (!kcpServerSet.values().contains(uid)) { 
        	this.ukcp = ukcp;
        	System.out.println("Connected : " + uid);
	    	 kcpServerSet.put(uid, this);
	    	 onlineCount++;
        }  
    }

    @Override
    public void handleReceive(ByteBuf buf, Ukcp uKcp) {
        byte[] bytes = new  byte[buf.readableBytes()];
        buf.getBytes(buf.readerIndex(),bytes);
        //System.out.println("Receive: "+new String(bytes));
        //kcp.write(buf);
        if (!kcpServerSet.values().contains(uKcp.user().getRemoteAddress().toString())) { 
        	this.ukcp = ukcp;
        	System.out.println("Connected : " + uKcp.user().getRemoteAddress().toString());
	    	 kcpServerSet.put(uKcp.user().getRemoteAddress().toString(), this);
	    	 onlineCount++;
        } 
        for (String key : kcpServerSet.keySet()) {
        	//System.out.println("Connected : " + kcpServerSet.get(key).user().getRemoteAddress().toString());
            kcpServerSet.get(key).ukcp.write(buf);
         } 
    }
    
    private void sendTOClient(String msg) {
		
	}

    @Override
    public void handleException(Throwable ex, Ukcp kcp) {
        ex.printStackTrace();
    }

    @Override
    public void handleClose(Ukcp uKcp) {
        System.out.println("handleClose " + Snmp.snmp.toString());
        if (kcpServerSet.values().contains(uKcp.user().getRemoteAddress().toString())) {
       	 kcpServerSet.remove(uKcp.user().getRemoteAddress().toString());
       	 onlineCount--;
       } 
        Snmp.snmp  = new Snmp();
    }
}
