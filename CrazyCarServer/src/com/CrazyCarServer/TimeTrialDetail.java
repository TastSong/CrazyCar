package com.CrazyCarServer;

import java.io.IOException;
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
 * Servlet implementation class TimeTrialDetail
 */
@WebServlet("/TimeTrialDetail")
public class TimeTrialDetail extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public TimeTrialDetail() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html");
		System.out.println("TimeTrialDetail ...");
		String token = request.getHeader("Authorization");
		if (!Util.JWT.isLegalJWT(token)){
			System.out.println("illegal JWT");
			return;
		}		
	
		PrintWriter out = response.getWriter();	
		
        JSONObject jsonObject = new JSONObject();
		jsonObject.put("code", 200);		
        
		JSONArray jsonArray = new JSONArray();
		List<Integer> allCid = GetAllClassID();
		for (int i = 0; i < allCid.size(); i++){
			JSONObject jbItem = new JSONObject();
			jbItem.put("cid", allCid.get(i));
			jbItem.put("map_id", GetIntData(allCid.get(i), "map_id"));
			jbItem.put("difficulty", GetIntData(allCid.get(i), "difficulty"));
			jbItem.put("limit_time", GetIntData(allCid.get(i), "limit_time"));
			jbItem.put("name", GetClassName(allCid.get(i)));
			jsonArray.add(jbItem);
		}		
		jsonObject.put("data", jsonArray);
		
        //jsonArray.add(jsonObject);
	    //String jsonOutput = jsonArray.toJSONString();
		out.println(jsonObject.toString());	
		out.flush();
		out.close();
	}
	
	private List<Integer> GetAllClassID(){
		String sql = "select cid from time_trial_class;";
		return Util.JDBC.ExecuteSelectAllInt(sql, "cid");
	}
	
	private int GetIntData(int cid, String key) {
		String sql = "select " + key + " from time_trial_class where cid = "
				+  cid + ";";
		return Util.JDBC.ExecuteSelectInt(sql, key);
	}
	
	private String GetClassName(int cid){
		String sql = "select class_name from time_trial_class where cid = " + cid + ";";
		return Util.JDBC.ExecuteSelectString(sql, "class_name");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
