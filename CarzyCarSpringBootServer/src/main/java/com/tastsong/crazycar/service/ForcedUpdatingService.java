package com.tastsong.crazycar.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.mapper.ForcedUpdatingMapper;

@Service
public class ForcedUpdatingService {
    @Autowired
    private ForcedUpdatingMapper forcedUpdatingMapper;

    public boolean isForcedUpdating(String version, String platform) {
		String rs = forcedUpdatingMapper.getVersion(platform);
		String[] minVersionStr = rs.split("\\.");
		String[] curVersionStr = version.split("\\.");
		int minVersion = Util.getSum(minVersionStr);
		int curVersion = Util.getSum(curVersionStr);
		return (minVersion - curVersion) > 0;
	}
	
	public String getURL(String platform) {
		String rs = forcedUpdatingMapper.getUrl(platform);
		return rs;
	}
}
