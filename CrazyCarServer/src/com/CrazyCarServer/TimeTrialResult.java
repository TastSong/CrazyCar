package com.CrazyCarServer;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.alibaba.fastjson.JSONObject;

/**
 * Servlet implementation class TimeTrialResult
 */
@WebServlet("/TimeTrialResult")
public class TimeTrialResult extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public TimeTrialResult() {
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

		PrintWriter out = response.getWriter();
		JSONObject outJB = new JSONObject();
		JSONObject dataJB = new JSONObject();
		if (getJB != null ) {
			outJB.put("code", 200);
			int uid = getJB.getInteger("uid");
			int cid = getJB.getInteger("cid");
			int completeTime = getJB.getInteger("complete_time");
			
			int limitTime = GetClassData(cid, "limit_time");
			
			if (completeTime > 0 && completeTime < limitTime){
				dataJB.put("is_win", true);
				dataJB.put("complete_time", completeTime);
			} else{
				dataJB.put("is_win", false);
				dataJB.put("complete_time", -1);
			}	
			boolean isBreakRecord = IsBreakRecord(uid, cid, completeTime);
			dataJB.put("is_break_record", isBreakRecord);
			InsertData(uid, cid, completeTime);
			if (isBreakRecord){
				dataJB.put("rank", 2);
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
	
	private boolean IsBreakRecord(int uid, int cid, int completeTime) {
		String sql = "SELECT complete_time from (SELECT record.*, @rownum  := @rownum  + 1 AS rownum FROM "
				+ "( SELECT uid, complete_time FROM time_trial_record where uid = " + uid + " and cid = " + cid + " ORDER BY complete_time ASC )"
						+ " AS record, (SELECT @rownum  := 0) r ) AS history_rank  where rownum = 1 and complete_time != -1;";
		// 返回-1 可能是空 ，也可能是存储的数据就是为-1
		int minTime = Util.JDBC.ExecuteSelectInt(sql, "complete_time");
		if (minTime == -1 && completeTime != -1){
			return true;
		}
		return completeTime < minTime;
	}
	
	private void InsertData(int uid, int cid , int completeTime){
		String sql = "insert into time_trial_record ( uid, cid, complete_time, record_time) values (" +
                       + uid + "," +  cid + "," + completeTime + "," + System.currentTimeMillis()/1000 + ");";
		Util.JDBC.ExecuteInsert(sql);
		return;
	}
	
	private int GetClassData(int cid, String key) {
		String sql = "select " + key + " from time_trial_class where cid = "
				+  cid + ";";
		return Util.JDBC.ExecuteSelectInt(sql, key);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
