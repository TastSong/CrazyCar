package com.tastsong.crazycar.service;

import java.util.ArrayList;
import java.util.List;

import cn.hutool.core.convert.Convert;
import cn.hutool.core.date.DateUtil;
import cn.hutool.core.util.ObjUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.tastsong.crazycar.dto.req.ReqUpdateAvatar;
import com.tastsong.crazycar.dto.resp.RespAvatar;
import com.tastsong.crazycar.mapper.AvatarRecordMapper;
import com.tastsong.crazycar.model.AvatarRecordModel;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AvatarMapper;
import com.tastsong.crazycar.model.AvatarModel;

@Slf4j
@Service
public class AvatarService {
    @Autowired
    private AvatarMapper avatarMapper;
    @Autowired
    private AvatarRecordMapper avatarRecordMapper;

    @Autowired
    private UserService userService;

    public RespAvatar toRespAvatar(AvatarModel avatarModel, int uid){
        RespAvatar resp = new RespAvatar();
        resp.setAvatar_name(avatarModel.getAvatar_name());
        resp.setRid(avatarModel.getRid());
        resp.setStar(avatarModel.getStar());
        resp.setAid(avatarModel.getAid());
        resp.set_has(hasAvatar(uid, avatarModel.getAid()));
        return resp;
    }

    public List<RespAvatar> getAvatarList(int uid){
        List<AvatarModel> avatarModels = avatarMapper.selectList(null);
        List<RespAvatar> resp = new ArrayList<>();
        for (AvatarModel avatarModel : avatarModels) {
            resp.add(toRespAvatar(avatarModel, uid));
        }
        return resp;
    }

    public List<AvatarModel> getAllAvatar() {
        return avatarMapper.selectList(null);
    }

    public boolean updateAvatarInfo(AvatarModel avatarModel){
        return avatarMapper.updateById(avatarModel) == 1;
    }

    public AvatarModel toAvatarModel(ReqUpdateAvatar req) {
        AvatarModel avatarModel = avatarMapper.selectById(req.getAid());
        if (ObjUtil.isEmpty(avatarModel)) {
            return null;
        }
        avatarModel.setAvatar_name(req.getAvatar_name());
        avatarModel.setStar(req.getStar());
        avatarModel.setRid(req.getRid());
        return avatarModel;
    }


    private int getNeedStar(int aid){
        return avatarMapper.selectById(aid).getStar();
    }

    public boolean canBuyAvatar(int uid, int aid) {
        int hasStar = userService.getUserStar(uid);
        log.info("canBuyAvatar hasStar : " + hasStar);
        int needStar = getNeedStar(aid);
        log.info("canBuyAvatar needStar : " + needStar);
		return hasStar >= needStar;
	}

    public boolean buyAvatar(int uid, int aid){
        int curStar = userService.getUserStar(uid) - getNeedStar(aid);
        userService.updateUserStar(uid, curStar);
        try {
            addAvatarForUser(uid, aid);
        } catch (Exception e) {
            log.error(e.getMessage());
        }
        return addAvatarForUser(uid, aid);
    }

    public boolean addAvatarForUser(int uid, int aid){
        AvatarRecordModel avatarRecordModel = new AvatarRecordModel();
        avatarRecordModel.setAid(aid);
        avatarRecordModel.setUid(uid);
        avatarRecordModel.setUpdate_time(DateUtil.currentSeconds());
        return avatarRecordMapper.insert(avatarRecordModel) > 0;
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
        log.info("hasAvatar: " + avatarRecordMapper.exists(queryWrapper));
        return avatarRecordMapper.exists(queryWrapper);
    }

    public void changeAvatar(int uid, int aid){
        userService.updateUserAid(uid, aid);
    }
}
