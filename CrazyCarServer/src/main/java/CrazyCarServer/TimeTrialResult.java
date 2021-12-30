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
 * Servlet implementation class TimeTrialResult
 */
public class TimeTrialResult extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public TimeTrialResult() {
        super();
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 
		response.setContentType("text/html;charset=UTF-8");
		System.out.println("TimeTrialResult ...");
		String token = request.getHeader("Authorization");
		if  (token == null || !Util.JWT.isLegalJWT(token)){
			System.out.println("illegal JWT");
			return;
		} 
		
		JSONObject getJB = new JSONObject();
		getJB = Util.getMsgData(request);

		PrintWriter out = response.getWriter();
		JSONObject outJB = new JSONObject();
		JSONObject dataJB = new JSONObject();
		if (getJB != null ) {
			outJB.put("code", 200);
			int uid = getJB.getInteger("uid");
			int cid = getJB.getInteger("cid");
			int completeTime = getJB.getInteger("complete_time");
			
			int limitTime = getClassData(cid, "limit_time");
			
			if (completeTime > 0 && completeTime < limitTime){
				dataJB.put("is_win", true);
				dataJB.put("complete_time", completeTime);
			} else{
				dataJB.put("is_win", false);
				dataJB.put("complete_time", -1);
			}	
			boolean isBreakRecord = isBreakRecord(uid, cid, completeTime);
			dataJB.put("is_break_record", isBreakRecord);
			dataJB.put("reward", isBreakRecord ? getMapStar(cid) : 0);
			if (isBreakRecord){
				setUserStar(getMapStar(cid) + getUserStar(uid), uid);
			}
			insertData(uid, cid, completeTime);
			if (isBreakRecord){
				dataJB.put("rank", getSelfRank(uid, cid, "rank_num"));
			} else {
				dataJB.put("rank", -1);
			}
			
		} else {
			outJB.put("code", 404);
		}
		
		outJB.put("data", dataJB);

		out.println(outJB.toString());
		out.flush();
		out.close();
	}
	
	private boolean isBreakRecord(int uid, int cid, int completeTime) {
		String sql = "SELECT complete_time from (SELECT record.*, @rownum  := @rownum  + 1 AS rownum FROM "
				+ "( SELECT uid, complete_time FROM time_trial_record where uid = " + uid + " and cid = " + cid + " ORDER BY complete_time ASC )"
						+ " AS record, (SELECT @rownum  := 0) r ) AS history_rank  where rownum = 1 and complete_time != -1;";

		if (completeTime == -1) {
			return false;
		} 
		
		int minTime = Util.JDBC.executeSelectInt(sql, "complete_time");
		if (minTime == -1 && completeTime != -1){
			return true;
		}		
		
		return completeTime < minTime;
	}
	
	private void insertData(int uid, int cid , int completeTime){
		String sql = "insert into time_trial_record ( uid, cid, complete_time, record_time) values (" +
                       + uid + "," +  cid + "," + completeTime + "," + System.currentTimeMillis()/1000 + ");";
		Util.JDBC.executeInsert(sql);
		return;
	}
	
	private int getClassData(int cid, String key) {
		String sql = "select " + key + " from time_trial_class where cid = "
				+  cid + ";";
		return Util.JDBC.executeSelectInt(sql, key);
	}
	
	private int getSelfRank(int uid,int cid, String key) {
		String sql = "drop table if exists time_trial_rank_" + cid +";";
		Util.JDBC.executeInsert(sql);
		sql = "create table  time_trial_rank_" + cid +" as select * from "
				+ " (select user_rank.*, @rank_num  := @rank_num  + 1 "
				+ "as rank_num from ( select * from (select uid, min(complete_time) "
				+ "as complete_time from time_trial_record where cid =  " + cid + " and "
				+ "complete_time != -1  group by uid) "
				+ "as min_time order by complete_time asc ) as user_rank, (select @rank_num:= 0) r)  as all_user_rank;";
		Util.JDBC.executeInsert(sql);
		sql = "select rank_num from time_trial_rank_" + cid +" where uid = " + uid + ";";
		return Util.JDBC.executeSelectInt(sql, key);
	}
	
	private int getMapStar(int cid) {
		String sql = "select star from time_trial_class where cid = "
				+  cid + ";";
		return Util.JDBC.executeSelectInt(sql, "star");
	}
	
	private void setUserStar(int star, int uid) {
		String sql = "update all_user set star = "
				+  star + " where uid = " + uid + ";";
		Util.JDBC.executeInsert(sql);
	}
	
	private int getUserStar(int uid) {
		String sql = "select star from all_user where uid = "
				+  uid + ";";
		return Util.JDBC.executeSelectInt(sql, "star");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
