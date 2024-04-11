package com.tastsong.crazycar.service;

import cn.hutool.core.convert.Convert;
import cn.hutool.core.date.DateUtil;
import cn.hutool.core.util.ObjUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.tastsong.crazycar.dto.req.ReqUpdateTimeTrialClass;
import com.tastsong.crazycar.dto.resp.RespTimeTrialClass;
import com.tastsong.crazycar.mapper.TimeTrialClassMapper;
import com.tastsong.crazycar.mapper.TimeTrialClassRecordMapper;
import com.tastsong.crazycar.model.TimeTrialClassModel;
import com.tastsong.crazycar.model.TimeTrialClassRecordModel;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.ArrayList;
import java.util.List;

@Slf4j
@Service
public class TimeTrialClassService {
    @Autowired
    private TimeTrialClassMapper timeTrialClassMapper;
    @Autowired
    private TimeTrialClassRecordMapper timeTrialClassRecordMapper;

    @Autowired
    private UserService userService;

    public RespTimeTrialClass toRespTimeTrialClass(TimeTrialClassModel model, int uid) {
        RespTimeTrialClass resp = new RespTimeTrialClass();
        resp.setTimes(model.getTimes());
        resp.setCid(model.getCid());
        resp.setStar(model.getStar());
        resp.setHas_water(model.isHas_water());
        resp.setLimit_time(model.getLimit_time());
        resp.setClass_name(model.getClass_name());
        resp.setMap_id(model.getMap_id());
        resp.set_has(hasClass(uid, model.getCid()));
        return resp;
    }

    public List<RespTimeTrialClass> getTimeTrialClassList(int uid){
        List<TimeTrialClassModel> timeTrialClassModels = timeTrialClassMapper.selectList(null);
        List<RespTimeTrialClass> resp = new ArrayList<>();
        for (TimeTrialClassModel timeTrialClassModel : timeTrialClassModels) {
            resp.add(toRespTimeTrialClass(timeTrialClassModel, uid));
        }
        return resp;
    }

    public List<TimeTrialClassModel> getAllTimeTrialClass(){
        return timeTrialClassMapper.selectList(null);
    }

    public boolean updateTimeTrialClassInfo(TimeTrialClassModel timeTrialClassModel){
        return timeTrialClassMapper.updateById(timeTrialClassModel) == 1;
    }

    public TimeTrialClassModel toTimeTrialClassModel(ReqUpdateTimeTrialClass resp){
        TimeTrialClassModel timeTrialClassModel = getTimeTrialClass(resp.getCid());
        if (ObjUtil.isEmpty(timeTrialClassModel)) {
            return null;
        }
        timeTrialClassModel.setCid(resp.getCid());
        timeTrialClassModel.setMap_id(resp.getMap_id());
        timeTrialClassModel.setClass_name(resp.getClass_name());
        timeTrialClassModel.setStar(resp.getStar());
        timeTrialClassModel.setHas_water(resp.isHas_water());
        timeTrialClassModel.setLimit_time(resp.getLimit_time());
        timeTrialClassModel.setTimes(resp.getTimes());
        return timeTrialClassModel;
    }

    private int getNeedStar(int aid){
        return timeTrialClassMapper.selectById(aid).getStar();
    }

    public boolean canBuyClass(int uid, int aid) {
        int hasStar = userService.getUserStar(uid);
        log.info("canBuyTimeTrialClass hasStar : " + hasStar);
        int needStar = getNeedStar(aid);
        log.info("canBuyTimeTrialClass needStar : " + needStar);
		return hasStar >= needStar;
	}

    public boolean buyClass(int uid, int aid){
        int curStar = userService.getUserStar(uid) - getNeedStar(aid);
        userService.updateUserStar(uid, curStar);
        try {
            addTimeTrialClassForUser(uid, aid);
        } catch (Exception e) {
            log.error(e.getMessage());
        }
        return addTimeTrialClassForUser(uid, aid);
    }

    public boolean addTimeTrialClassForUser(int uid, int cid){
        TimeTrialClassRecordModel timeTrialClassRecordModel = new TimeTrialClassRecordModel();
        timeTrialClassRecordModel.setCid(cid);
        timeTrialClassRecordModel.setUid(uid);
        timeTrialClassRecordModel.setUpdate_time(DateUtil.currentSeconds());
        return timeTrialClassRecordMapper.insert(timeTrialClassRecordModel) > 0;
    }

    public int getTimeTrialClassNumByUid(int uid){
        QueryWrapper<TimeTrialClassRecordModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(TimeTrialClassRecordModel::getUid, uid);
        return Convert.toInt(timeTrialClassRecordMapper.selectCount(queryWrapper));
    }

    public TimeTrialClassModel getTimeTrialClass(int cid){
        return timeTrialClassMapper.selectById(cid);
    }

    public boolean hasClass(int uid, int cid) {
        QueryWrapper<TimeTrialClassRecordModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(TimeTrialClassRecordModel::getUid, uid);
        queryWrapper.lambda().eq(TimeTrialClassRecordModel::getCid, cid);
        log.info("hasTimeTrialClass: " + timeTrialClassRecordMapper.exists(queryWrapper));
        return timeTrialClassRecordMapper.exists(queryWrapper);
    }

    public boolean giveReward(int uid, int cid){
        TimeTrialClassModel model = getTimeTrialClass(cid);
        if (ObjUtil.isEmpty(model)) {
            return false;
        }
        return userService.updateUserStar(uid, model.getStar() + userService.getUserStar(uid));
    }
}
