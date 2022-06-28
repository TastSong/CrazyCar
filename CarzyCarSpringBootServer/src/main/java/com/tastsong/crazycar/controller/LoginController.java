package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import com.alibaba.fastjson.JSONObject;
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
			System.out.println("" + password + "  " + userModel.user_password);
			if (password.equals(userModel.user_password)){
				userInfoModel.name = userModel.user_name;
				userInfoModel.uid = userModel.uid;
				userInfoModel.aid = userModel.aid;
				userInfoModel.star = userModel.star;
				userInfoModel.is_vip = (userModel.is_vip == 1);
				Integer uid = userModel.uid;
				userInfoModel.is_superuser = loginService.isSuperuser(uid);
				userInfoModel.travel_times = loginService.getTimeTrialTimes(uid);
				userInfoModel.avatar_num = loginService.getAvatarNumByUid(uid);
				userInfoModel.map_num = loginService.getTimeTrialMapNum(uid);
				userInfoModel.equip_info = loginService.getEquipByEid(userModel.eid);
				return userInfoModel;
			} else{
				return Result.failure(ResultCode.RC423);
			}
		} else {
			return Result.failure(ResultCode.RC404);
		}
	}
}
