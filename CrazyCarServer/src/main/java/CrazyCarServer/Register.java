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
 * Servlet implementation class Register
 */
public class Register extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Register() {
        super();
         
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 
		response.setContentType("text/html;charset=UTF-8");
		JSONObject getJB = Util.getMsgData(request);		
		PrintWriter out = response.getWriter();		
        JSONObject outJB = new JSONObject();
        JSONObject userInfoJB = new JSONObject();
        JSONObject equipInfoJB = new JSONObject();
        String token = null;
		if(getJB != null && getJB.containsKey("UserName") && getJB.containsKey("Password")){
			if (isExistUser(getJB.getString("UserName"))){				
		        outJB.put("code", 423);
			} else{
				registerUser(getJB.getString("UserName"), getJB.getString("Password"));
				if (isExistUser(getJB.getString("UserName"))){				
			        outJB.put("code", 200);
			        String userName = getJB.getString("UserName");
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
				} else{
			        outJB.put("code", 425);
				}
			}
		} else{
			outJB.put("code", 425);
		}
		JSONObject jb = new JSONObject();
		jb.put("user_info", userInfoJB);
		JSONObject dataJB = new JSONObject();
		dataJB.put("user_info", userInfoJB);
		dataJB.put("token", token);

		outJB.put("data", dataJB);
		System.out.println("Register " + outJB.toString());
		out.println(outJB.toString());	
		out.flush();
		out.close();
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 
		doGet(request, response);
	}
	
	private void registerUser(String userName, String password){
		int defaultAid = 1;
		int defaultCid = 0;
		int defaultStar = 14;
		int defaultVIP = 0;
		int defaultEid = 1;
		String sql = "insert into all_user ( user_name, user_password, login_time, aid, star, is_vip, eid ) values" +
                       "(\"" + userName + "\"," + "\"" + password + "\"," + System.currentTimeMillis()/1000 + 
                       "," + defaultAid + ", " + defaultStar + ", " + defaultVIP + ", " + defaultEid + ");";
		Util.JDBC.executeInsert(sql);
		sql = "select uid from all_user where user_name = "
				+ "\"" + userName + "\";";
		int uid = Util.JDBC.executeSelectInt(sql, "uid"); 
		sql = "insert into avatar_uid ( aid, uid ) values" +
                "(" + defaultAid + "," + uid +  ");";
		Util.JDBC.executeInsert(sql);

		sql = "insert into time_trial_user_map ( cid, uid ) values" +
                "(" + defaultCid + "," + uid +  ");";
		Util.JDBC.executeInsert(sql);
		
		sql = "insert into equip_uid ( eid, uid ) values" +
                "(" + defaultEid + "," + uid +  ");";
		Util.JDBC.executeInsert(sql);
		return;
	}

	private boolean isExistUser(String userName){
		String sql = "select user_password from all_user where user_name = "
				+ "\"" + userName + "\";";
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
}
