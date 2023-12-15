package com.tastsong.crazycar.service;

import cn.hutool.core.date.DateUtil;
import cn.hutool.core.util.ObjUtil;
import com.tastsong.crazycar.dto.req.ReqUpdateAssets;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AssetsUpdatingMapper;
import com.tastsong.crazycar.model.AssetsUpdatingModel;

@Service
public class AssetsUpdatingService {
    @Autowired
	private AssetsUpdatingMapper assetsUpdatingMapper;

	public AssetsUpdatingModel getInfo(){
		return assetsUpdatingMapper.selectList(null).get(0);
	}

	public boolean updateInfo(AssetsUpdatingModel assetsUpdatingModel){
		return assetsUpdatingMapper.updateById(assetsUpdatingModel) > 0;
	}

	public AssetsUpdatingModel toAssetsUpdatingModel(ReqUpdateAssets req){
		AssetsUpdatingModel assetsUpdatingModel = assetsUpdatingMapper.selectById(req.getId());
		if (ObjUtil.isEmpty(assetsUpdatingModel)){
			return null;
		}
		assetsUpdatingModel.setId(req.getId());
		assetsUpdatingModel.setUrl(req.getUrl());
		assetsUpdatingModel.set_on(req.is_on());
		assetsUpdatingModel.setUpdate_time(DateUtil.currentSeconds());
		return assetsUpdatingModel;
	}
}
