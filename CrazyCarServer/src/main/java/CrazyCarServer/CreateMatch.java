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
 * Servlet implementation class CreateMatch
 */
public class CreateMatch extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public CreateMatch() {
        super(); 
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 
		response.setContentType("text/html;charset=UTF-8");
		System.out.println("BuyEquip ...");
		String token = request.getHeader("Authorization");
		if  (token == null || !Util.JWT.isLegalJWT(token)){
			System.out.println("illegal JWT");
			return;
		} 
		
		PrintWriter out = response.getWriter();
		JSONObject outJB = new JSONObject();
		outJB.put("code", 200);
		createMatch();
		out.println(outJB.toString());
		out.flush();
		out.close();	
	}
	
	private void createMatch() {
		long enrollTime =  System.currentTimeMillis()/1000;
		long startTime = enrollTime + 60;
		String sql = "insert into match_class (star, map_id, limit_time, class_name, times, start_time, enroll_time) values "
				+ "(2, 0, 60, " + "\"TastSong\"" + ", 1, " +  startTime + ", " + enrollTime + ");";
		Util.JDBC.executeInsert(sql);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
