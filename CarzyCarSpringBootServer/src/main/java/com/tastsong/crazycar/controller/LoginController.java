package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RestController;

import com.alibaba.fastjson.JSONObject;
import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.model.UserInfoModel;
import com.tastsong.crazycar.model.UserModel;
import com.tastsong.crazycar.service.LoginService;

@RestController
@Scope("prototype")
public class LoginController {
	@Autowired
	private LoginService loginService;

	@PostMapping(value = "/Login")
	public Object login(@RequestBody JSONObject body) throws Exception {
		if (body != null && body.containsKey("UserName") && body.containsKey("Password")
				&& loginService.isExistsUser(body.getString("UserName"))) {
			String userName = body.getString("UserName")		;
			String password = body.getString("Password");
			UserInfoModel userInfoModel = new UserInfoModel();
			UserModel userModel = loginService.getUserByName(userName);
			System.out.println("login : userName = " + userName + "; password  = " + password);
			if (password.equals(userModel.user_password)){
				userInfoModel.user_name = userModel.user_name;
				userInfoModel.uid = userModel.uid;
				userInfoModel.aid = userModel.aid;
				userInfoModel.star = userModel.star;
				userInfoModel.is_vip = userModel.is_vip;
				userInfoModel.token = Util.createToken(userModel.uid);
				Integer uid = userModel.uid;
				userInfoModel.is_superuser = loginService.isSuperuser(uid);
				userInfoModel.travel_times = loginService.getTimeTrialTimes(uid);
				userInfoModel.avatar_num = loginService.getAvatarNumByUid(uid);
				userInfoModel.map_num = loginService.getTimeTrialMapNum(uid);
				userInfoModel.equip_info = loginService.getEquipByEid(userModel.eid);
				userInfoModel.equip_info.is_has = loginService.isHasEquip(userModel.eid, uid);
				return userInfoModel;
			} else{
				return Result.failure(ResultCode.RC423);
			}
		} else {
			return Result.failure(ResultCode.RC404);
		}
	}

	@GetMapping (value = "/TestJWT")
	public Object testJWT(@RequestHeader(Util.TOKEN) String token){
		System.out.println(Util.getUidByToken(token));
		return Util.isLegalToken(token);
	}
}
