package Util;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.security.Key;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

import javax.crypto.spec.SecretKeySpec;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;
import javax.xml.bind.DatatypeConverter;

import com.alibaba.fastjson.JSONObject;

import io.jsonwebtoken.Claims;
import io.jsonwebtoken.JwtBuilder;
import io.jsonwebtoken.Jwts;
import io.jsonwebtoken.SignatureAlgorithm;

public class Util {
	public static class JDBC{
		// MySQL 8.0 以上版本 - JDBC 驱动名及数据库 URL
		static final String JDBC_DRIVER = "com.mysql.cj.jdbc.Driver";
		static final String DB_URL = "jdbc:mysql://localhost:3306/crazy_car?"
				+ "useSSL=false&allowPublicKeyRetrieval=true&serverTimezone=UTC";

		// 数据库的用户名与密码，需要根据自己的设置
		static final String USER = "root";
		static final String PASS = "1647283556";

		public static String executeSelectString(String sql, String key) {
			//System.out.println("ExecuteSelect sql = " + sql);
			Connection conn = null;
			Statement stmt = null;
			String resultStr = null;
			try {
				// 注册 JDBC 驱动
				Class.forName(JDBC_DRIVER);

				// 打开链接
				//System.out.println("连接数据库...");
				conn = DriverManager.getConnection(DB_URL, USER, PASS);

				// 执行查询
				//System.out.println(" 实例化Statement对象...");
				stmt = conn.createStatement();
				ResultSet rs = stmt.executeQuery(sql);

				// 展开结果集数据库
				while (rs.next()) {
					// 通过字段检索
					resultStr = rs.getString(key);
					//System.out.println("ExecuteSelect : " + key + " = " + resultStr);
				}
				// 完成后关闭
				//System.out.println("ExecuteSelect  Finish");
				rs.close();
				stmt.close();
				conn.close();
				return resultStr;
			} catch (SQLException se) {
				// 处理 JDBC 错误
				se.printStackTrace();
			} catch (Exception e) {
				// 处理 Class.forName 错误
				e.printStackTrace();
				return resultStr;
			} finally {
				// 关闭资源
				try {
					if (stmt != null)
						stmt.close();
				} catch (SQLException se2) {
				} // 什么都不做
				try {
					if (conn != null)
						conn.close();
				} catch (SQLException se) {
					se.printStackTrace();
				}
			}

			System.out.println("Goodbye!");
			return resultStr;
		}
		
		public static int executeSelectInt(String sql, String key) {
			//System.out.println("ExecuteSelect sql = " + sql);
			Connection conn = null;
			Statement stmt = null;
			int resultInt = -1;
			try {
				// 注册 JDBC 驱动
				Class.forName(JDBC_DRIVER);

				// 打开链接
				//System.out.println("连接数据库...");
				conn = DriverManager.getConnection(DB_URL, USER, PASS);
				//System.out.println(" 实例化Statement对象...");
				stmt = conn.createStatement();
				ResultSet rs = stmt.executeQuery(sql);

				// 展开结果集数据库
				while (rs.next()) {
					// 通过字段检索
					resultInt = rs.getInt(key);
					//System.out.println("ExecuteSelect : " + key + " = " + resultInt);
				}
				// 完成后关闭
				//System.out.println("ExecuteSelect  Finish");
				rs.close();
				stmt.close();
				conn.close();
				return resultInt;
			} catch (SQLException se) {
				// 处理 JDBC 错误
				se.printStackTrace();
			} catch (Exception e) {
				// 处理 Class.forName 错误
				e.printStackTrace();
				return resultInt;
			} finally {
				// 关闭资源
				try {
					if (stmt != null)
						stmt.close();
				} catch (SQLException se2) {
				} // 什么都不做
				try {
					if (conn != null)
						conn.close();
				} catch (SQLException se) {
					se.printStackTrace();
				}
			}

			System.out.println("Goodbye!");
			return resultInt;
		}
		
		public static List<Integer> executeSelectAllInt(String sql, String key) {
			//System.out.println("ExecuteSelect sql = " + sql);
			Connection conn = null;
			Statement stmt = null;
			List<Integer> resultList = new ArrayList<Integer>();
			try {
				// 注册 JDBC 驱动
				Class.forName(JDBC_DRIVER);

				// 打开链接
				//System.out.println("连接数据库...");
				conn = DriverManager.getConnection(DB_URL, USER, PASS);

				// 执行查询
				//System.out.println(" 实例化Statement对象...");
				stmt = conn.createStatement();
				ResultSet rs = stmt.executeQuery(sql);

				// 展开结果集数据库
				while (rs.next()) {
					// 通过字段检索
					resultList.add(rs.getInt(key));
					//System.out.println("ExecuteSelect : " + key + " = " + rs.getInt(key));
				}
				// 完成后关闭
				//System.out.println("ExecuteSelect  Finish");
				rs.close();
				stmt.close();
				conn.close();
				return resultList;
			} catch (SQLException se) {
				// 处理 JDBC 错误
				se.printStackTrace();
			} catch (Exception e) {
				// 处理 Class.forName 错误
				e.printStackTrace();
				return resultList;
			} finally {
				// 关闭资源
				try {
					if (stmt != null)
						stmt.close();
				} catch (SQLException se2) {
				} // 什么都不做
				try {
					if (conn != null)
						conn.close();
				} catch (SQLException se) {
					se.printStackTrace();
				}
			}

			System.out.println("Goodbye!");
			return resultList;
		}
		
		public static void executeInsert(String sql) {
			Connection conn = null;
			System.out.println("Execute Insert sql = " + sql);	
			try {
				// 注册 JDBC 驱动
				Class.forName(JDBC_DRIVER);
				conn = DriverManager.getConnection(DB_URL, USER, PASS);

				PreparedStatement pst = conn.prepareStatement(sql);
	            pst.executeUpdate();
				//System.out.println(" ExecuteInsert Finish " + pst);
				conn.close();
				return;
			} catch (SQLException se) {
				// 处理 JDBC 错误
				se.printStackTrace();
			} catch (Exception e) {
				// 处理 Class.forName 错误
				e.printStackTrace();
				return;
			} finally {
				// 关闭资源
				try {
					if (conn != null)
						conn.close();
				} catch (SQLException se) {
					se.printStackTrace();
				}
			}

			System.out.println("Goodbye!");
			return;
		}
	}
	
	public static class JWT {

	    // The secret key. This should be in a property file NOT under source
	    // control and not hard coded in real life. We're putting it here for
	    // simplicity.
	    private static String SECRET_KEY = "oeRaQQ7Wo24sDqKSX3IM9ASGmdGPmkTd9jo1QTy4b7P9Ze5_9hKolVX8xNrQDcNRfVEdTZNOuOyqEGhXEbdJI-ZQ19k_o9MI0y3eZN2lp9jow55FfXMiINEdt1XR85VipRLSOkT6kSpzs2x-jbLDiz9iFVzkd81YKxMgPA7VfZeQUm4n-mOmnWMaVX30zGFU4L3oPBctYKkl4dYfqYWqRNfrgPJVi5DGFjywgxx0ASEiJHtV72paI3fDR2XwlSkyhhmY-ICjCRmsJN4fX1pdoL8a18-aQrvyu4j0Os6dVPYIoPvvY0SAZtWYKHfM15g7A3HD4cVREf9cUsprCRK93w";

	    //Sample method to construct a JWT
	    private static String createJWT(String id, String issuer, String subject, long ttlMillis) {

	        //The JWT signature algorithm we will be using to sign the token
	        SignatureAlgorithm signatureAlgorithm = SignatureAlgorithm.HS256;

	        long nowMillis = System.currentTimeMillis();
	        Date now = new Date(nowMillis);

	        //We will sign our JWT with our ApiKey secret
	        byte[] apiKeySecretBytes = DatatypeConverter.parseBase64Binary(SECRET_KEY);
	        Key signingKey = new SecretKeySpec(apiKeySecretBytes, signatureAlgorithm.getJcaName());

	        //Let's set the JWT Claims
	        JwtBuilder builder = Jwts.builder().setId(id)
	                .setIssuedAt(now)
	                .setSubject(subject)
	                .setIssuer(issuer)
	                .signWith(signatureAlgorithm, signingKey);

	        //if it has been specified, let's add the expiration
	        if (ttlMillis >= 0) {
	            long expMillis = nowMillis + ttlMillis;
	            Date exp = new Date(expMillis);
	            builder.setExpiration(exp);
	        }

	        //Builds the JWT and serializes it to a compact, URL-safe string
	        return builder.compact();
	    }

	    private static Claims decodeJWT(String jwt) {

	        //This line will throw an exception if it is not a signed JWS (as expected)
	    	Claims claims = null;
	    	
	    	try {
	    		claims = Jwts.parser()
	                    .setSigningKey(DatatypeConverter.parseBase64Binary(SECRET_KEY))
	                    .parseClaimsJws(jwt).getBody();
	    	} catch (Exception e) {
				e.printStackTrace();
			}
	        
	        return claims;
	    } 
	    
	    public static String createJWTById(int id) {

	        String jwtId = Integer.toString(id);
	        String jwtIssuer = "TastSong";
	        String jwtSubject = "CrazyCar";
	        int jwtTimeToLive = 6000000;

	        String jwt = Util.JWT.createJWT(
	                jwtId, // claim = jti 唯一身份标识，主要用来作为一次性token,从而回避重放攻击。
	                jwtIssuer, // claim = iss  签发者
	                jwtSubject, // claim = sub 所面向的用户
	                jwtTimeToLive // used to calculate expiration (claim = exp) 过期时间，这个过期时间必须要大于签发时间
	        );
	        
	        System.out.println("createAndDecodeJWT jwt = \"" + jwt.toString() + "\"");
	        return jwt;
	    }
	    
	    public static boolean isLegalJWT(String jwt) {	        	        
	        System.out.println("isLegalJWT jwt = \"" + jwt.toString() + "\"");
	        Claims claims = Util.JWT.decodeJWT(jwt);
	        if (claims == null || claims.isEmpty()){
	            System.out.println("Token 过期");
	            return false;
	        } else{
	            System.out.println("claims getId = " + claims.getId());
	            return true;
	        }
	    }
	    
	    public static int getJWTId(String jwt) {	        	        
	        System.out.println("getJWTId jwt = \"" + jwt.toString() + "\"");
	        int id = -1;
	        Claims claims = Util.JWT.decodeJWT(jwt);
	        if (claims == null || claims.isEmpty()){
	            System.out.println("Token 过期");
	            return id;
	        } else{
	            return Integer.parseInt(claims.getId());
	        }
	    }
	}
	
	public static int getDataByName(String userName, String id){
		String sql = "select " + id + " from all_user where user_name = "
				+ "\"" + userName + "\";";
		return Util.JDBC.executeSelectInt(sql, id);
	}
	
	public static int getDataByUid(int uid, String id){
		String sql = "select " + id + " from all_user where uid = "
				+ uid + ";";
		return Util.JDBC.executeSelectInt(sql, id);
	}	

	public static String getStringDataByUid(int uid, String id){
		String sql = "select " + id + " from all_user where uid = "
				+ uid + ";";
		String rs = Util.JDBC.executeSelectString(sql, id);
		return rs;
	}
	
	public static JSONObject getMsgData(HttpServletRequest request) throws ServletException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(request.getInputStream(),"utf-8"));
		String line = null;
		StringBuilder sb = new StringBuilder();
		while ((line = br.readLine()) != null) {
			sb.append(line);
		}
		System.out.println(sb.toString());
		return JSONObject.parseObject(sb.toString());
	}
	
	public static int getSum(String[] str) {
		int result = 0;
		for (int i = 0; i < str.length; i++){
			result += Integer.parseInt(str[i]) * Math.pow(10, (str.length - i -1));
		}
		return result;
	}
}

