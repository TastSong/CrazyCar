package com.tastsong.crazycar.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AssetsUpdatingMapper;
import com.tastsong.crazycar.model.AssetsUpdatingModel;

@Service
public class AssetsUpdatingService {
    @Autowired
	private AssetsUpdatingMapper assetsUpdatingMapper;

	public AssetsUpdatingModel getInfo(){
		return assetsUpdatingMapper.getInfo(0);
	}

	public boolean updateInfo(AssetsUpdatingModel assetsUpdatingModel){
		return assetsUpdatingMapper.updateInfo(assetsUpdatingModel) == 1;
	}
}
