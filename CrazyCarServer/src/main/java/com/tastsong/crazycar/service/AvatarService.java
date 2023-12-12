package com.tastsong.crazycar.service;

import java.util.List;

import cn.hutool.core.convert.Convert;
import cn.hutool.core.date.DateUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.tastsong.crazycar.mapper.AvatarRecordMapper;
import com.tastsong.crazycar.model.AvatarRecordModel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AvatarMapper;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.AvatarModel;

@Service
public class AvatarService {
    @Autowired
    private AvatarMapper avatarMapper;
    @Autowired
    private AvatarRecordMapper avatarRecordMapper;

    @Autowired
    private UserMapper userMapper;

    public List<AvatarModel> getAvatarList(int uid){
        List<AvatarModel> avatarModels = avatarMapper.selectList(null);
        for (int i = 0; i < avatarModels.size(); i++){
            avatarModels.get(i).set_has(hasAvatar(uid, avatarModels.get(i).getAid()));
        }
        return avatarModels;
    }

    public List<AvatarModel> getAllAvatar() {
        return avatarMapper.selectList(null);
    }

    public List<AvatarModel> getAvatarInfos(){
        List<AvatarModel> avatarModels = avatarMapper.selectList(null);
        return avatarModels;
    }

    public boolean updateAvatarInfo(AvatarModel avatarModel){
        return avatarMapper.updateById(avatarModel) == 1;
    }

    public int getCurAidByUid(int uid){
        return userMapper.getUserByUid(uid).aid;
    }

    public int getUserStar(int uid){
        return userMapper.getUserByUid(uid).star;
    }

    private int getNeedStar(int aid){
        return avatarMapper.selectById(aid).getStar();
    }

    public boolean canBuyAvatar(int uid, int aid) {
		return getUserStar(uid) >= getNeedStar(aid);		
	}

    public boolean buyAvatar(int uid, int aid){
        int curStar = getUserStar(uid) - getNeedStar(aid);
        userMapper.updateUserStar(uid, curStar);
        return addAvatarForUser(uid, aid);
    }

    public boolean addAvatarForUser(int uid, int aid){
        AvatarRecordModel avatarRecordModel = new AvatarRecordModel();
        avatarRecordModel.setAid(aid);
        avatarRecordModel.setUid(uid);
        avatarRecordModel.setUpdateTime(DateUtil.currentSeconds());
        return avatarRecordMapper.insert(avatarRecordModel) == 1;
    }

    public int getAvatarNumByUid(int uid){
        QueryWrapper<AvatarRecordModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(AvatarRecordModel::getUid, uid);
        return Convert.toInt(avatarRecordMapper.selectCount(queryWrapper));
    }

    public boolean hasAvatar(int uid, int aid) {
        QueryWrapper<AvatarRecordModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(AvatarRecordModel::getUid, uid);
        queryWrapper.lambda().eq(AvatarRecordModel::getAid, aid);
        return avatarRecordMapper.exists(queryWrapper);
    }

    public void changeAvatar(int uid, int aid){
        userMapper.updateUserAid(uid, aid);
    }
}
