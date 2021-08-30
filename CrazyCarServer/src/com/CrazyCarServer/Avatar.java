package com.CrazyCarServer;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.alibaba.fastjson.JSONArray;
import com.alibaba.fastjson.JSONObject;

/**
 * Servlet implementation class Avatar
 */
@WebServlet("/Avatar")
public class Avatar extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Avatar() {
        super();
        // TODO Auto-generated constructor stub
    }

    private int user_id = 0;
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		// TODO Auto-generated method stub
		response.setContentType("text/html");
		System.out.println("Avatar ...");
		BufferedReader br = new BufferedReader(new InputStreamReader(request.getInputStream(),"utf-8"));
		String line = null;
		StringBuilder sb = new StringBuilder();
		while ((line = br.readLine()) != null) {
			sb.append(line);
		}
		System.out.println(sb.toString());
		JSONObject json = JSONObject.parseObject(sb.toString());
		String userName = null;
		if(!sb.toString().isEmpty() && json.containsKey("UserName")){
			userName = json.getString("UserName");
		} else {
			return;
		}
	
		PrintWriter out = response.getWriter();	
		
        JSONObject jsonObject = new JSONObject();
		jsonObject.put("code", 200);
		
        JSONObject jbData = new JSONObject();        
        jbData.put("current_aid", Util.GetIdByName(userName, "aid"));
        
		JSONArray jsonArray = new JSONArray();
		List<Integer> allAid = GetAllAvatarID();
		user_id = Util.GetIdByName(userName, "user_id");
		for (int i = 0; i < allAid.size(); i++){
			JSONObject jbItem = new JSONObject();
			jbItem.put("is_has", IshasAvatar(allAid.get(i)));
			jbItem.put("aid", allAid.get(i));
			jbItem.put("name", GetAvatarName(allAid.get(i)));
			jsonArray.add(jbItem);
		}		
		jbData.put("avatars", jsonArray);
		jsonObject.put("data", jbData);
		
        //jsonArray.add(jsonObject);
	    //String jsonOutput = jsonArray.toJSONString();
		out.println(jsonObject.toString());	
		out.flush();
		out.close();
	}	
	
	private List<Integer> GetAllAvatarID(){
		String sql = "select aid from avatar_name;";
		return Util.JDBC.ExecuteSelectAllInt(sql, "aid");
	}
	
	private boolean IshasAvatar(int aid){
		String sql = "select aid from avatar_index where aid = "
				+  aid + " and " + " user_id = " + user_id + ";";
		return Util.JDBC.ExecuteSelectInt(sql, "aid") != -1;
	}
	
	private String GetAvatarName(int aid){
		String sql = "select avatar_name from avatar_name where aid = " + aid + ";";
		return Util.JDBC.ExecuteSelectString(sql, "avatar_name");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
