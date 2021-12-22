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
 * Servlet implementation class BuyAvatar
 */
public class BuyAvatar extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public BuyAvatar() {
        super();     
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 
		response.setContentType("text/html;charset=UTF-8");
		System.out.println("BuyAvatar ...");
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
		if (getJB != null && getJB.containsKey("aid")) {
			int aid = getJB.getIntValue("aid");
			if (isHasAvatar(aid, uid)) {
				outJB.put("code", 200);
				dataJB.put("star", getUserStar(uid));
			} else if (canBuyAvatar(uid, aid)) {
				bugAvatar(uid, aid);
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
	
	private boolean isHasAvatar(int aid, int uid){
		String sql = "select aid from avatar_uid where aid = "
				+  aid + " and " + " uid = " + uid + ";";
		return Util.JDBC.executeSelectInt(sql, "aid") != -1;
	}
	
	private int getUserStar(int uid){
		String sql = "select star from all_user where uid = "
				+ uid + ";";
		return Util.JDBC.executeSelectInt(sql, "star");
	}
	
	private boolean canBuyAvatar(int uid, int aid) {
		int curStar = getUserStar(uid);
		int needStar = getStarByAid(aid);
		return curStar >= needStar;		
	}
	
	private int getStarByAid(int aid) {
		String sql = "select star from avatar_name where aid = "
				+  aid + ";";
		return Util.JDBC.executeSelectInt(sql, "star");
	}
	
	private void bugAvatar(int uid, int aid) {
		int curStar = getUserStar(uid) - getStarByAid(aid);
		String sql = "update all_user set star = "
				+  curStar + " where uid = " + uid + ";";
		Util.JDBC.executeInsert(sql);

		sql = "insert into avatar_uid ( aid, uid ) values" +
                "(" + aid + "," + uid +  ");";
		Util.JDBC.executeInsert(sql);
	}
	

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException { 
		doGet(request, response);
	}

}
