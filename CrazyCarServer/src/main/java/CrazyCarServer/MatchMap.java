package CrazyCarServer;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.List;

import javax.servlet.ServletException;

import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import Util.Util;
import com.alibaba.fastjson.JSONArray;
import com.alibaba.fastjson.JSONObject;

/**
 * Servlet implementation class TimeTrialDetail
 */
public class MatchMap extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public MatchMap() {
        super();
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 
		response.setContentType("text/html;charset=UTF-8");
		System.out.println("MatchMap ...");
		String token = request.getHeader("Authorization");
		if  (token == null || !Util.JWT.isLegalJWT(token)){
			System.out.println("illegal JWT");
			return;
		} 	
	
		PrintWriter out = response.getWriter();	
		
        JSONObject jsonObject = new JSONObject();
		jsonObject.put("code", 200);		
        
		JSONArray jsonArray = new JSONArray();
		List<Integer> allCid = getAllClassID();
		for (int i = 0; i < allCid.size(); i++){
			JSONObject jbItem = new JSONObject();
			jbItem.put("cid", allCid.get(i));
			jbItem.put("map_id", getIntData(allCid.get(i), "map_id"));
			jbItem.put("has_water", getIntData(allCid.get(i), "has_water") == 1);
			jbItem.put("star", getIntData(allCid.get(i), "star"));
			jbItem.put("limit_time", getIntData(allCid.get(i), "limit_time"));
			jbItem.put("name", getClassName(allCid.get(i)));
			jbItem.put("times", getIntData(allCid.get(i), "times"));
			jsonArray.add(jbItem);
		}		
		jsonObject.put("data", jsonArray);
		
        //jsonArray.add(jsonObject);
	    //String jsonOutput = jsonArray.toJSONString();
		out.println(jsonObject.toString());	
		out.flush();
		out.close();
	}
	
	private List<Integer> getAllClassID(){
		String sql = "select cid from match_map;";
		return Util.JDBC.executeSelectAllInt(sql, "cid");
	}
	
	private int getIntData(int cid, String key) {
		String sql = "select " + key + " from match_map where cid = "
				+  cid + ";";
		return Util.JDBC.executeSelectInt(sql, key);
	}
	
	private String getClassName(int cid){
		String sql = "select class_name from match_map where cid = " + cid + ";";
		return Util.JDBC.executeSelectString(sql, "class_name");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}

