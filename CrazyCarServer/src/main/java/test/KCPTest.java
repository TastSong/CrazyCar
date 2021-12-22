package test;

import java.io.IOException;
import java.util.concurrent.ConcurrentHashMap;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.backblaze.erasure.fec.Snmp;
import io.netty.buffer.ByteBuf;
import kcp.ChannelConfig;
import kcp.KcpListener;
import kcp.KcpServer;
import kcp.Ukcp;

/**
 * Servlet implementation class KCPJavaWebServer
 */
public class KCPTest extends HttpServlet implements KcpListener {
	private static final long serialVersionUID = 1L;

	private boolean isInit = false;
    private static int onlineCount = 0;
    private static ConcurrentHashMap<String, Ukcp> kcpSet = new ConcurrentHashMap<String, Ukcp>();
	
    /**
     * @see HttpServlet#HttpServlet()
     */
    public KCPTest() {
        super();
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 
		if (!isInit) {
			initKCP();
			isInit = true;
		}
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}
	
	private void initKCP() {
		KCPTest kcpRttExampleServer = new KCPTest();

        ChannelConfig channelConfig = new ChannelConfig();
        channelConfig.nodelay(true,10,2,true);
        //channelConfig.setConv(40001);
        channelConfig.setSndwnd(300);
        channelConfig.setRcvwnd(300);
        channelConfig.setMtu(512);
        channelConfig.setAckNoDelay(true);
        channelConfig.setTimeoutMillis(10000);
        //channelConfig.setFecDataShardCount(10);
        //channelConfig.setFecParityShardCount(3);
        //c# crc32未实现
        channelConfig.setCrc32Check(false);
        KcpServer kcpServer = new KcpServer();
        kcpServer.init(kcpRttExampleServer,channelConfig,40001);     
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 
		doGet(request, response);
	}
	
	@Override
    public void onConnected(Ukcp ukcp) {
		String arr =  ukcp.user().getRemoteAddress().toString();
        
        if (!kcpSet.contains(arr)) {
            onlineCount++;
            System.out.println("Connected : " + arr + " onlineCount = " + onlineCount);
            kcpSet.put(arr, ukcp);//加入map中
        }
    }

    @Override
    public void handleReceive(ByteBuf buf, Ukcp kcp) {
        byte[] bytes = new  byte[buf.readableBytes()];
        buf.getBytes(buf.readerIndex(),bytes);
        System.out.println("Receive: "+new String(bytes));
        
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
