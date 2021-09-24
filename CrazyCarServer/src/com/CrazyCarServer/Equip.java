package com.CrazyCarServer;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.Util.Util;
import com.alibaba.fastjson.JSONArray;
import com.alibaba.fastjson.JSONObject;

/**
 * Servlet implementation class Equip
 */
@WebServlet("/Equip")
public class Equip extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Equip() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html;charset=UTF-8");
		System.out.println("Equip ...");
	    int uid = 0;
		String token = request.getHeader("Authorization");
		if (!Util.JWT.isLegalJWT(token)){
			System.out.println("illegal JWT");
			return;
		} else{
			uid = Util.JWT.getJWTId(token);
		}			
	
		PrintWriter out = response.getWriter();			
        JSONObject jsonObject = new JSONObject();
		jsonObject.put("code", 200);
		
        JSONObject jbData = new JSONObject();                
		JSONArray jsonArray = new JSONArray();
		List<Integer> allEid = getAllEquipID();
		for (int i = 0; i < allEid.size(); i++){
			JSONObject jbItem = new JSONObject();			
			jbItem.put("eid", allEid.get(i));
			jbItem.put("rid", getStrDataByEid(allEid.get(i), "rid"));
			jbItem.put("equip_name", getStrDataByEid(allEid.get(i), "equip_name"));
			jbItem.put("star", getIntDataByEid(allEid.get(i), "star"));
			jbItem.put("mass", getIntDataByEid(allEid.get(i), "mass"));
			jbItem.put("speed", getIntDataByEid(allEid.get(i), "speed"));
			jbItem.put("max_speed", getIntDataByEid(allEid.get(i), "max_speed"));
			jbItem.put("is_show", getIntDataByEid(allEid.get(i), "is_show") == 1);
			jbItem.put("is_has", isHasEquip(allEid.get(i), uid));
			jsonArray.add(jbItem);
		}		
		jbData.put("equips", jsonArray);
		jsonObject.put("data", jbData);
		
        //jsonArray.add(jsonObject);
	    //String jsonOutput = jsonArray.toJSONString();
		out.println(jsonObject.toString());	
		out.flush();
		out.close();
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
	
	private List<Integer> getAllEquipID(){
		String sql = "select eid from all_equip;";
		return Util.JDBC.executeSelectAllInt(sql, "eid");
	}
	
	private boolean isHasEquip(int eid, int uid){
		String sql = "select eid from equip_uid where eid = "
				+  eid + " and " + " uid = " + uid + ";";
		return Util.JDBC.executeSelectInt(sql, "eid") != -1;
	}	

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
