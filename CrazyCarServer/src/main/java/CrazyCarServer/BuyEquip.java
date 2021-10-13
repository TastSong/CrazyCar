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
 * Servlet implementation class BuyEquip
 */
public class BuyEquip extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public BuyEquip() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html;charset=UTF-8");
		System.out.println("BuyEquip ...");
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
		if (getJB != null && getJB.containsKey("eid")) {
			int eid = getJB.getIntValue("eid");
			if (isHasEquip(eid, uid)) {
				outJB.put("code", 200);
				dataJB.put("star", getUserStar(uid));
			} else if (canBuyEquip(uid, eid)) {
				bugEquip(uid, eid);
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
	
	private boolean isHasEquip(int eid, int uid){
		String sql = "select eid from equip_uid where eid = "
				+  eid + " and " + " uid = " + uid + ";";
		return Util.JDBC.executeSelectInt(sql, "eid") != -1;
	}
	
	private int getUserStar(int uid){
		String sql = "select star from all_user where uid = "
				+ uid + ";";
		return Util.JDBC.executeSelectInt(sql, "star");
	}
	
	private boolean canBuyEquip(int uid, int eid) {
		int curStar = getUserStar(uid);
		int needStar = getStarByeid(eid);
		return curStar >= needStar;		
	}
	
	private int getStarByeid(int eid) {
		String sql = "select star from all_equip where eid = "
				+  eid + ";";
		return Util.JDBC.executeSelectInt(sql, "star");
	}
	
	private void bugEquip(int uid, int eid) {
		int curStar = getUserStar(uid) - getStarByeid(eid);
		String sql = "update all_user set star = "
				+  curStar + " where uid = " + uid + ";";
		Util.JDBC.executeInsert(sql);

		sql = "insert into equip_uid ( eid, uid ) values" +
                "(" + eid + "," + uid +  ");";
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
