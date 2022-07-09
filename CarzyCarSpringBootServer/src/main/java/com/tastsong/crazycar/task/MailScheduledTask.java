package com.tastsong.crazycar.task;

import java.sql.Date;
import java.text.SimpleDateFormat;
import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.scheduling.annotation.Scheduled;
import org.springframework.stereotype.Component;

import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.UserLoginRecordModel;
import com.tastsong.crazycar.service.MailService;

@Component
public class MailScheduledTask {
    @Autowired
    private MailService mailService;

    @Autowired
    private UserMapper userMapper;

    @Scheduled(cron = "0 0 10 * * 1")
    public void email() {
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        Long nowTime = System.currentTimeMillis() / 1000;
        Long afterTime = nowTime - 60 * 60 * 24 * 7;

        String contentTableHead = "<html>\n<body>\n<table border=1>\n";
        String tableHead = "<tr>\n<td>Name</td>\n<td>Place</td>\n<td>Device</td>\n<td>Login Time</td>\n</tr>\n";
        String tableBody = "";
        List<UserLoginRecordModel> userLoginRecordModels = userMapper.getLoginRecordAfterTime(afterTime);
        for (int i = 0; i < userLoginRecordModels.size(); i++) {
            tableBody += "<tr>\n";
            tableBody += "<td>" + userLoginRecordModels.get(i).user_name + "</td>\n";
            tableBody += "<td>" + userLoginRecordModels.get(i).place + "</td>\n";
            tableBody += "<td>" + userLoginRecordModels.get(i).device + "</td>\n";
            String timeString = sdf.format(new Date(userLoginRecordModels.get(i).login_time * 1000));
            tableBody += "<td>" + timeString + "</td>\n";
            tableBody += "</tr>\n";
        }
        String contentTableEnd = "</table>\n</body>\n</html>";
        mailService.sendHtmlMail("tastsong@163.com", "User Login Record(" + sdf.format(new Date(afterTime * 1000)) + "-" + sdf.format(new Date(nowTime * 1000)) + ")",
                contentTableHead + tableHead + tableBody + contentTableEnd);
    }
}
