package com.CrazyCarServer;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.alibaba.fastjson.JSONObject;

/**
 * Servlet implementation class BuyTimeTrialClass
 */
@WebServlet("/BuyTimeTrialClass")
public class BuyTimeTrialClass extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public BuyTimeTrialClass() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html");
		System.out.println("BuyTimeTrialClass ...");
	    int uid = 0;
		String token = request.getHeader("Authorization");
		if (!Util.JWT.isLegalJWT(token)){
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
		if (getJB != null && getJB.containsKey("cid")) {
			int cid = getJB.getIntValue("cid");
			if (isHasClass(cid, uid)) {
				outJB.put("code", 200);
				dataJB.put("star", getUserStar(uid));
			} else if (canBuyClass(uid, cid)) {
				bugClass(uid, cid);
				outJB.put("code", 200);
				dataJB.put("star", getUserStar(uid));
			} else {
				outJB.put("code", 423);
			}
		} else {
			outJB.put("code", 404);
		}			

		outJB.put("data", dataJB);

		out.println(outJB.toString());
		out.flush();
		out.close();	
	}
	
	private boolean isHasClass(int cid, int uid){
		String sql = "select cid from time_trial_user_map where cid = "
				+  cid + " and " + " uid = " + uid + ";";
		return Util.JDBC.executeSelectInt(sql, "cid") != -1;
	}
	
	private int getUserStar(int uid){
		String sql = "select star from all_user where uid = "
				+ uid + ";";
		return Util.JDBC.executeSelectInt(sql, "star");
	}
	
	private boolean canBuyClass(int uid, int cid) {
		int curStar = getUserStar(uid);
		int needStar = getStarByCid(cid);
		return curStar >= needStar;		
	}
	
	private int getStarByCid(int cid) {
		String sql = "select star from time_trial_class where cid = "
				+  cid + ";";
		return Util.JDBC.executeSelectInt(sql, "star");
	}
	
	private void bugClass(int uid, int cid) {
		int curStar = getUserStar(uid) - getStarByCid(cid);
		String sql = "update all_user set star = "
				+  curStar + " where uid = " + uid + ";";
		Util.JDBC.executeInsert(sql);

		sql = "insert into time_trial_user_map ( cid, uid ) values" +
                "(" + cid + "," + uid +  ");";
		Util.JDBC.executeInsert(sql);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
