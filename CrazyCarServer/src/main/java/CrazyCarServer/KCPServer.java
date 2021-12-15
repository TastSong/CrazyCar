package CrazyCarServer;

import java.io.IOException;
import java.io.PrintWriter;

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
import test.KCPTest;

/**
 * Servlet implementation class KCPServer
 */
public class KCPServer extends HttpServlet implements KcpListener {
	private static final long serialVersionUID = 1L;
	private boolean isInit = false;       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public KCPServer() {
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
		KCPTest kcpRttExampleServer = new KCPTest();

        ChannelConfig channelConfig = new ChannelConfig();
        channelConfig.nodelay(true,10,2,true);
        channelConfig.setConv(40001);
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
		// TODO Auto-generated method stub
		doGet(request, response);
	}
	
	@Override
    public void onConnected(Ukcp ukcp) {
        System.out.println("Connected : "+Thread.currentThread().getName()+ukcp.user().getRemoteAddress());
    }

    @Override
    public void handleReceive(ByteBuf buf, Ukcp kcp) {
        byte[] bytes = new  byte[buf.readableBytes()];
        buf.getBytes(buf.readerIndex(),bytes);
        System.out.println("Receive: "+new String(bytes));
        kcp.write(buf);
    }

    @Override
    public void handleException(Throwable ex, Ukcp kcp) {
        ex.printStackTrace();
    }

    @Override
    public void handleClose(Ukcp kcp) {
        System.out.println("handleClose " + Snmp.snmp.toString());
        Snmp.snmp  = new Snmp();
    }
}
