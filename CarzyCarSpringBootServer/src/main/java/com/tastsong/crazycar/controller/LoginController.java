package com.tastsong.crazycar.controller;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RestController;

import com.alibaba.fastjson.JSON;
import com.alibaba.fastjson.JSONObject;
import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.model.UserModel;
import com.tastsong.crazycar.service.LoginService;

@RestController
@Scope("prototype")
public class LoginController {
    @Autowired
    private LoginService loginService;

    @PostMapping(value = "/Login")
    public Result<String> login(HttpServletRequest request, HttpServletResponse response)throws ServletException, IOException{

        // response.setContentType("text/html;charset=UTF-8");
		// JSONObject getJB = new JSONObject();
		// getJB = Util.getMsgData(request);

		// PrintWriter out = response.getWriter();
		// JSONObject outJB = new JSONObject();
		// JSONObject userInfoJB = new JSONObject();
		// JSONObject equipInfoJB = new JSONObject();
		// String token = null;
		// if (getJB != null && getJB.containsKey("UserName") && getJB.containsKey("Password")
		// 		&& isExistUser(getJB.getString("UserName"))) {
		// 	String userName = getJB.getString("UserName");
		// 	if (isPasswordRight(getJB.getString("UserName"), getJB.getString("Password"))) {
		// 		outJB.put("code", 200);
		// 		token = Util.JWT.createJWTById(Util.getDataByName(userName, "uid"));
		// 		userInfoJB.put("name", getJB.getString("UserName"));
		// 		userInfoJB.put("uid", Util.getDataByName(userName, "uid"));
		// 		userInfoJB.put("aid", Util.getDataByName(userName, "aid"));
		// 		int eid = Util.getDataByName(userName, "eid");
		// 		userInfoJB.put("star", Util.getDataByName(userName, "star"));
		// 		userInfoJB.put("is_vip", (Util.getDataByName(userName, "is_vip") == 1));
		// 		int uid = Util.getDataByName(userName, "uid");
		// 		userInfoJB.put("is_superuser", isSuperuser(uid));
		// 		userInfoJB.put("travel_times", getTravelTimes(uid));       
		// 		userInfoJB.put("avatar_num", getAvatarNum(uid)); 
		// 		userInfoJB.put("map_num", getMapNum(uid)); 
				
		// 		equipInfoJB.put("eid", Util.getDataByName(userName, "eid"));
		// 		equipInfoJB.put("rid", getStrDataByEid(eid, "rid"));
		// 		equipInfoJB.put("equip_name", getStrDataByEid(eid, "equip_name"));
		// 		equipInfoJB.put("star", getIntDataByEid(eid, "star"));
		// 		equipInfoJB.put("mass", getIntDataByEid(eid, "mass"));
		// 		equipInfoJB.put("power", getIntDataByEid(eid, "power"));
		// 		equipInfoJB.put("max_power", getIntDataByEid(eid, "max_power"));
		// 		equipInfoJB.put("can_wade", getIntDataByEid(eid, "can_wade") == 1);
		// 		equipInfoJB.put("is_show", getIntDataByEid(eid, "is_show") == 1);
		// 		equipInfoJB.put("is_has", isHasEquip(eid, uid));
				
		// 		userInfoJB.put("equip_info", equipInfoJB);
		// 	} else {
		// 		outJB.put("code", 423);
		// 	}
		// } else {
		// 	outJB.put("code", 404);
		// }
		// JSONObject jb = new JSONObject();
		// jb.put("user_info", userInfoJB);
		// JSONObject dataJB = new JSONObject();
		// dataJB.put("user_info", userInfoJB);
		// dataJB.put("token", token);

		// outJB.put("data", dataJB);

		// out.println(outJB.toString());
		// out.flush();
		// out.close();

        System.out.println("getTimeTrialTimes : " + loginService.getTimeTrialTimes(1));    
        System.out.println("getTimeTrialMapNum : " + loginService.getTimeTrialMapNum(1));    
        System.out.println("getAvatarNumByUid : " + loginService.getAvatarNumByUid(1));    
        System.out.println("getEquipByEquipModel : " + JSON.toJSONString(loginService.getEquipByEid(1)));    
        System.out.println("getUserByUid : " + JSON.toJSONString(loginService.getUserByUid(44))); 
        System.out.println("isExistsUser = " + loginService.isExistsUser("Tast"));   
        System.out.println("isHasEquip = " + loginService.isHasEquip(1, 10));   
        System.out.println("isSuperuser = " + loginService.isSuperuser(1));   
        //return loginService.getUserByUid(1);
        return Result.success("Succ", "ceshi");
    }
}
