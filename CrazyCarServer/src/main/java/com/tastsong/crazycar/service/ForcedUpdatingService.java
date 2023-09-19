package com.tastsong.crazycar.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.ForcedUpdatingMapper;
import com.tastsong.crazycar.utils.Util;

@Service
public class ForcedUpdatingService {
    @Autowired
    private ForcedUpdatingMapper forcedUpdatingMapper;

    public boolean isForcedUpdating(String version, String platform) {
		try {
			String rs = forcedUpdatingMapper.getVersion(platform);
			String[] minVersionStr = rs.split("\\.");
			String[] curVersionStr = version.split("\\.");
			int minVersion = Util.getSum(minVersionStr);
			int curVersion = Util.getSum(curVersionStr);
			return (minVersion - curVersion) > 0;
		} catch (Exception e) {
			return true;
		} 
		
	}
	
	public String getURL(String platform) {
		String rs = forcedUpdatingMapper.getUrl(platform);
		if (rs== null){
			return forcedUpdatingMapper.getUrl("Defeat");
		} else{
			return rs;
		}
	}
}
