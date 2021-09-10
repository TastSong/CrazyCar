package com.CrazyCarServer;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.alibaba.fastjson.JSONArray;
import com.alibaba.fastjson.JSONObject;

/**
 * Servlet implementation class TimeTrialRank
 */
@WebServlet("/TimeTrialRank")
public class TimeTrialRank extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public TimeTrialRank() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html");
		System.out.println("TimeTrialResult ...");
		String token = request.getHeader("Authorization");
		if (!Util.JWT.isLegalJWT(token)){
			System.out.println("illegal JWT");
			return;
		} 
		
		JSONObject getJB = new JSONObject();
		getJB = Util.getMsgData(request);
		int cid = getJB.getInteger("cid");
		InitRank(cid);
		int userNum = GetUserNum(cid);

		PrintWriter out = response.getWriter();
		JSONObject outJB = new JSONObject();
		outJB.put("code", 200);
		JSONArray jsonArray = new JSONArray();
		for (int i = 0; i < userNum; i++){
			JSONObject jbItem = new JSONObject();
			jbItem.put("name", GetNameByUid(cid, i + 1));
			jbItem.put("aid", GetAidByUid(cid, i + 1));
			jbItem.put("complete_time", GetCompleteTime(cid, i + 1));
			jbItem.put("rank", i + 1);
			jsonArray.add(jbItem);
		}		
		
		outJB.put("data", jsonArray);

		out.println(outJB.toString());
		out.flush();
		out.close();
	}
	
	private void InitRank(int cid) {
		String sql = "drop table if exists time_trial_rank_" + cid +";";
		Util.JDBC.ExecuteInsert(sql);
		sql = "create table  time_trial_rank_" + cid +" as select * from "
				+ " (select user_rank.*, @rank_num  := @rank_num  + 1 "
				+ "as rank_num from ( select * from (select uid, min(complete_time) "
				+ "as complete_time from time_trial_record where cid =  " + cid + " and "
				+ "complete_time != -1  group by uid) "
				+ "as min_time order by complete_time asc ) as user_rank, (select @rank_num:= 0) r)  as all_user_rank;";
		Util.JDBC.ExecuteInsert(sql);
	}
	
	private int GetUserNum(int cid) {
		String sql = "select count(rank_num) as rank_count from  time_trial_rank_" + cid + ";";
		return Util.JDBC.ExecuteSelectInt(sql, "rank_count");
	}
	
	
	private String GetNameByUid(int cid, int rank){
		int uid = GetUid(cid, rank);
		String sql = "select user_name from all_user where user_id = "
				+ uid + ";";
		return Util.JDBC.ExecuteSelectString(sql, "user_name");
	}
	
	private int GetAidByUid(int cid, int rank){
		int uid = GetUid(cid, rank);
		String sql = "select aid from all_user where user_id = "
				+ uid + ";";
		return Util.JDBC.ExecuteSelectInt(sql, "aid");
	}
	
	private int GetCompleteTime(int cid, int rank) {	
		String sql = "select complete_time from time_trial_rank_" + cid +" where rank_num = " + rank + ";";
		return Util.JDBC.ExecuteSelectInt(sql, "complete_time");
	}

	private int GetUid(int cid, int rank) {	
		String sql = "select uid from time_trial_rank_" + cid +" where rank_num = " + rank + ";";
		return Util.JDBC.ExecuteSelectInt(sql, "uid");
	}
	
	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
