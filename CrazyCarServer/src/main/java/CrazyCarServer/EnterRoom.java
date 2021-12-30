package CrazyCarServer;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;

import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import Util.Util;
import com.alibaba.fastjson.JSONObject;

/**
 * Servlet implementation class EnterRoom
 */
public class EnterRoom extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public EnterRoom() {
        super();   
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException { 
		response.setContentType("text/html;charset=UTF-8");
		
		int uid = 0;
		String token = request.getHeader("Authorization");
		System.out.println("+++++++ " + token);
		if (token == null || !Util.JWT.isLegalJWT(token)){
			System.out.println("illegal JWT");
			return;
		} else{
			uid = Util.JWT.getJWTId(token);
		}
		
		JSONObject getJB = new JSONObject();
		getJB = Util.getMsgData(request);

		PrintWriter out = response.getWriter();
		JSONObject outJB = new JSONObject();
		JSONObject dataJB = new JSONObject();
		int cid = getJB.getIntValue("cid");
		GameType gameType = GameType.values()[getJB.getIntValue("GameType")];
		NetType netType = NetType.values()[getJB.getIntValue("NetType")];

		if (gameType == GameType.Match){
			if(Util.getDataByUid(uid, "is_vip") == 1) {
				outJB.put("code", 200);
			} else{
				outJB.put("code", 423);
			}

			if(netType == NetType.WebSocket){
				System.out.println("EnterRoom cid = " + cid + " GameType = " + gameType.name() + " NetType = " + netType.name());
				dataJB.put("num", MatchWebSocket.getOnlineCount());
			} else{
				dataJB.put("num", 0);
			}	
		} else{
			if(isHasTimeTrialClass(cid, uid)) {
				outJB.put("code", 200);
			} else{
				outJB.put("code", 423);
			}

			dataJB.put("num", 0);
		}

		outJB.put("data", dataJB);

		out.println(outJB.toString());
		out.flush();
		out.close();			
	}

	private boolean isHasTimeTrialClass(int cid, int uid){
		String sql = "select cid from time_trial_user_map where cid = "
				+  cid + " and " + " uid = " + uid + ";";
		return Util.JDBC.executeSelectInt(sql, "cid") != -1;
	}
	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {		 
		doGet(request, response);
	}

}
