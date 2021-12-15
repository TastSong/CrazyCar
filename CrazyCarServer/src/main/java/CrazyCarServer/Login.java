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
 * Servlet implementation class Login
 */
public class Login extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public Login() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html;charset=UTF-8");
		JSONObject getJB = new JSONObject();
		getJB = Util.getMsgData(request);

		PrintWriter out = response.getWriter();
		JSONObject outJB = new JSONObject();
		JSONObject userInfoJB = new JSONObject();
		JSONObject equipInfoJB = new JSONObject();
		String token = null;
		if (getJB != null && getJB.containsKey("UserName") && getJB.containsKey("Password")
				&& isExistUser(getJB.getString("UserName"))) {
			String userName = getJB.getString("UserName");
			if (isPasswordRight(getJB.getString("UserName"), getJB.getString("Password"))) {
				outJB.put("code", 200);
				token = Util.JWT.createJWTById(Util.getDataByName(userName, "uid"));
				userInfoJB.put("name", getJB.getString("UserName"));
				userInfoJB.put("uid", Util.getDataByName(userName, "uid"));
				userInfoJB.put("aid", Util.getDataByName(userName, "aid"));
				int eid = Util.getDataByName(userName, "eid");
				userInfoJB.put("star", Util.getDataByName(userName, "star"));
				userInfoJB.put("is_vip", (Util.getDataByName(userName, "is_vip") == 1));
				int uid = Util.getDataByName(userName, "uid");
				userInfoJB.put("travel_times", getTravelTimes(uid));       
				userInfoJB.put("avatar_num", getAvatarNum(uid)); 
				userInfoJB.put("map_num", getMapNum(uid)); 
				
				equipInfoJB.put("eid", Util.getDataByName(userName, "eid"));
				equipInfoJB.put("rid", getStrDataByEid(eid, "rid"));
				equipInfoJB.put("equip_name", getStrDataByEid(eid, "equip_name"));
				equipInfoJB.put("star", getIntDataByEid(eid, "star"));
				equipInfoJB.put("mass", getIntDataByEid(eid, "mass"));
				equipInfoJB.put("speed", getIntDataByEid(eid, "speed"));
				equipInfoJB.put("max_speed", getIntDataByEid(eid, "max_speed"));
				equipInfoJB.put("is_show", getIntDataByEid(eid, "is_show") == 1);
				equipInfoJB.put("is_has", isHasEquip(eid, uid));
				
				userInfoJB.put("equip_info", equipInfoJB);
			} else {
				outJB.put("code", 423);
			}
		} else {
			outJB.put("code", 404);
		}
		JSONObject jb = new JSONObject();
		jb.put("user_info", userInfoJB);
		JSONObject dataJB = new JSONObject();
		dataJB.put("user_info", userInfoJB);
		dataJB.put("token", token);

		outJB.put("data", dataJB);

		out.println(outJB.toString());
		out.flush();
		out.close();
	}

	private boolean isPasswordRight(String userName, String password) {
		String sql = "select user_password from all_user where user_name = " + "\"" + userName + "\";";
		String rs = Util.JDBC.executeSelectString(sql, "user_password");
		if (rs == null) {
			return false;
		} else {
			return rs.equals(password);
		}
	}

	private boolean isExistUser(String userName) {
		String sql = "select user_password from all_user where user_name = " + "\"" + userName + "\";";
		String rs = Util.JDBC.executeSelectString(sql, "user_password");
		return rs != null;
	}
	
	private int getTravelTimes(int uid) {
		String sql = "select record_time from time_trial_record where uid = " + uid + ";";
		return Util.JDBC.executeSelectAllInt(sql, "record_time").size();
	}
	
	private int getAvatarNum(int uid) {
		String sql = "select aid from avatar_uid where uid = " + uid + ";";
		return Util.JDBC.executeSelectAllInt(sql, "aid").size();
	}
	
	private int getMapNum(int uid) {
		String sql = "select cid from time_trial_user_map where uid = " + uid + ";";
		System.out.print("===== " + sql);
		return Util.JDBC.executeSelectAllInt(sql, "cid").size();
	}
	
	private int getIntDataByEid(int eid, String key) {
		String sql = "select " + key + " from all_equip where eid = "
				+  eid + ";";
		return Util.JDBC.executeSelectInt(sql, key);
	}
	
	private String getStrDataByEid(int eid, String key){
		String sql = "select " + key +" from all_equip where eid = " + eid + ";";
		return Util.JDBC.executeSelectString(sql, key);
	}
	
	private boolean isHasEquip(int eid, int uid){
		String sql = "select eid from equip_uid where eid = "
				+  eid + " and " + " uid = " + uid + ";";
		return Util.JDBC.executeSelectInt(sql, "eid") != -1;
	}	

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
