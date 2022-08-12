create database crazy_car;
use crazy_car;
SET @@global.sql_mode ='STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';
SET SQL_SAFE_UPDATES = false;

create table if not exists `all_user`(
   `uid` int unsigned auto_increment,
   `user_name` varchar(100) not null,
   `user_password` VARCHAR(40) not null,
   `login_time` long not null,
    `aid` INT(4)  not null,
    `star` int not null,
    `is_vip` int not null,
    `eid` int not null,
   primary key ( `uid` )
   )engine = innodb default charset = utf8;
insert into all_user ( uid, user_name, user_password, login_time, aid, star, is_vip, eid)
                       values
					   (1, "Tast", "96e79218965eb72c92a549dd5a330112", 1629544628, 1, 99, 1, 1);
insert into all_user ( uid, user_name, user_password, login_time, aid, star, is_vip, eid )
                       values
					   (2, "song", "96e79218965eb72c92a549dd5a330112", 1629544634, 2, 88, 1, 2);
insert into all_user ( uid, user_name, user_password, login_time, aid, star, is_vip, eid )
                       values
					   (3, "阿宋小娇妻", "96e79218965eb72c92a549dd5a330112", 1629544655, 3, 66, 1, 3);        
insert into all_user ( uid, user_name, user_password, login_time, aid, star, is_vip, eid )
                       values
					   (4, "Lory", "96e79218965eb72c92a549dd5a330112", 1629544666, 4, 12, 0, 1);                       
select* from all_user;

select user_password 
from all_user 
where user_name = "Tast";
/*修改原有表all_user*/
/*
ALTER TABLE all_user ADD aid INT(4)  not null;
alter table all_user drop column aid;
*/

/*avatar_name*/
create table if not exists `avatar_name`(
   `aid` int unsigned auto_increment,
   `rid` VARCHAR(100) not null,
   `avatar_name` VARCHAR(40) not null,
   `star` int not null,
   primary key ( `aid` )
   )engine = innodb default charset = utf8;
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("0", "Tast 0", 3);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("1", "Black 1", 2);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("2", "Write 2", 4);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("3", "Write 3", 5);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("4", "Write 4", 6);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("5", "Write 5", 4);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("6", "Avatar6", 2);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("7", "Avatar7", 100);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("8", "Avatar8", 1);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("9", "Avatar9", 3);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("11", "Avatar11", 3);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("12", "Avatar12", 5);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("13", "Avatar13", 6);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("14", "Avatar14", 5);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("15", "Avatar15", 2);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("16", "Avatar160", 3);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("17", "Avatar17", 5);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("18", "Avatar18", 2);
insert into avatar_name ( rid, avatar_name, star )
				   values
				   ("19", "Avatar19", 4);
select* from avatar_name;

select* from all_user;
update all_user 
set aid = 2 
where uid = 1;

/*avatar_uid*/
create table if not exists `avatar_uid`(
   `id` int unsigned auto_increment,
   `aid` int not null,
   `uid` int not null,
   primary key ( `id` )
   )engine = innodb default charset = utf8;
insert into avatar_uid ( aid, uid )
				   values
				   (1, 1);
insert into avatar_uid ( aid, uid )
				   values
				   (2, 1);
insert into avatar_uid ( aid, uid )
				   values
				   (5, 1);
insert into avatar_uid ( aid, uid )
				   values
				   (9, 1);
insert into avatar_uid ( aid, uid )
				   values
				   (17, 1);
insert into avatar_uid ( aid, uid )
				   values
				   (18, 1);
insert into avatar_uid ( aid, uid )
				   values
				   (15, 1);
insert into avatar_uid ( aid, uid )
				   values
				   (16, 1);
insert into avatar_uid ( aid, uid )
				   values
				   (2, 2);
insert into avatar_uid ( aid, uid )
				   values
				   (3, 3);
insert into avatar_uid ( aid, uid )
				   values
				   (4, 4);                   
select aid from
 avatar_uid 
 where aid = 1 and uid = 1;
select aid from avatar_uid where uid = 1;

/*time trail class*/
create table if not exists `time_trial_class`(
   `cid` int unsigned auto_increment,
   `star` int not null,  /*同Star*/
   `map_id` int not null,
   `has_water` int not null,
   `limit_time` int not null,
   `class_name` VARCHAR(40) not null,
   `times` int not null,
   primary key ( `cid` )
   )engine = innodb default charset = utf8;
insert into time_trial_class (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (2, 0, 0, 88, "基地卡通", 2);
insert into time_trial_class (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (14, 1, 1, 96, "水上乐园", 2);
insert into time_trial_class (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (3, 2, 0, 80, "曲折前行", 2);
insert into time_trial_class (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (22, 3, 0, 100, "蜿蜒驰骋", 2);
insert into time_trial_class (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (4, 4, 0, 90, "砥砺前行", 2);        
insert into time_trial_class (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (1, 5, 0, 90, "几何风光", 2);                     
select* from time_trial_class;
select cid from time_trial_class;

/*match map*/
create table if not exists `match_map`(
   `cid` int unsigned auto_increment,
   `star` int not null,  /*同Star*/
   `map_id` int not null,
   `has_water` int not null,
   `limit_time` int not null,
   `class_name` VARCHAR(40) not null,
   `times` int not null,
   primary key ( `cid` )
   )engine = innodb default charset = utf8;
insert into match_map (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (2, 0, 0, 88, "基地卡通", 1);
insert into match_map (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (14, 1, 1, 96, "水上乐园", 1);
insert into match_map (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (3, 2, 0, 80, "曲折前行", 2);
insert into match_map (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (22, 3, 0, 100, "蜿蜒驰骋", 2);
insert into match_map (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (4, 4, 0, 90, "砥砺前行", 2);        
insert into match_map (star, map_id, has_water, limit_time, class_name, times )
				   values
				   (1, 5, 0, 90, "几何风光", 2);                     
select* from match_map;
select cid from match_map;

/*time_trial_user_map*/
create table if not exists `time_trial_user_map`(
   `id` int unsigned auto_increment,
   `cid` int not null,
   `uid` int not null,
   primary key ( `id` )
   )engine = innodb default charset = utf8;
insert into time_trial_user_map ( cid, uid )
				   values
				   (1, 1);
insert into time_trial_user_map ( cid, uid )
				   values
				   (2, 1);
insert into time_trial_user_map ( cid, uid )
				   values
				   (3, 1);
 insert into time_trial_user_map ( cid, uid )
				   values
				   (1, 2);
insert into time_trial_user_map ( cid, uid )
				   values
				   (1, 3);
insert into time_trial_user_map ( cid, uid )
				   values
				   (1, 5);                   
insert into time_trial_user_map ( cid, uid )
				   values
				   (1, 4);
                   
select cid from
	time_trial_user_map 
	where cid = 1 and uid = 1;
select cid from time_trial_user_map 
	where uid = 1;
select * from time_trial_user_map;


/*time_trial_record*/
create table if not exists `time_trial_record`(
    `id` int unsigned auto_increment,
	`uid` int not null,
    `cid` int not null,
    `complete_time` int not null,
    `record_time` long not null,
   primary key ( `id` )
   )engine = innodb default charset = utf8;
insert into time_trial_record ( uid, cid, complete_time, record_time)
				   values
				   (1, 1, 22, 1629544628);
insert into time_trial_record ( uid, cid, complete_time, record_time)
				   values
				   (1, 1, 14, 1629544644);
insert into time_trial_record ( uid, cid, complete_time, record_time)
				   values
				   (1, 1, -1, 1629544628);
insert into time_trial_record ( uid, cid, complete_time, record_time)
				   values
				   (1, 0, 14, 1629544644);
insert into time_trial_record ( uid, cid, complete_time, record_time)
				   values
				   (2, 1, 15, 1629544644);
insert into time_trial_record ( uid, cid, complete_time, record_time)
				   values
				   (2, 1, 14, 1629544644);
insert into time_trial_record ( uid, cid, complete_time, record_time)
				   values
				   (3, 1, 10, 1658332800);
insert into time_trial_record ( uid, cid, complete_time, record_time)
				   values
				   (4, 1, 16, 1658474034);
select * from time_trial_record where uid = 1 ;

select COUNT(*) as count, record_time as timestamp
from time_trial_record 
where record_time > (unix_timestamp(CAST(SYSDATE()AS DATE)) - 60 * 60 * 24 * 2) 
group by FROM_UNIXTIME(record_time, '%y-%m-%d') 
order by record_time limit 2;			

/*查询自己的成绩排名*/
select
	ta.*, @rownum  := @rownum  + 1 AS rownum
from
	(
		select uid, complete_time
		from time_trial_record

		where uid = 1 and cid = 1
		order by complete_time asc
	) AS ta,
	(select @rownum:= 0) r;

/*查询自己的最好成绩*/
select complete_time 
from
 (
	select
		record.*, @rownum  := @rownum + 1 as rownum
	from
		(
			select uid, complete_time
			from time_trial_record
				where uid = 1 and cid = 1
				order by complete_time asc
		) as record,
		(select @rownum:= 0) r
) as history_rank where rownum = 1 and complete_time != -1;

/*获取记录中的所有人的排名*/
select
	user_rank.*, @rank_num  := @rank_num  + 1 as rank_num
from
	(
		select *
		from
		(select uid, min(complete_time) as complete_time
		from
			 time_trial_record
			 where cid = 1 and complete_time != -1 
			 group by uid) as min_time
		order by complete_time asc
	) as user_rank,
	(select @rank_num:= 0) r;

select complete_time 
        from
        (
            select
                record.*, @rownum  := @rownum + 1 as rownum
            from
                (
                    select uid, complete_time
                    from time_trial_record
                        where uid = 1 and cid = 2
                        order by complete_time asc
                ) as record,
                (select @rownum:= 0) r
        ) as history_rank where rownum = 1 and complete_time != -1;

drop table if exists time_trial_rank_0;
create table  time_trial_rank_0 as
select * from  (select user_rank.*, @rank_num  := @rank_num  + 1 as rank_num
				from
					(
						select *
						from
						(select uid, min(complete_time) as complete_time
						from
							 time_trial_record
							 where cid = 1 and complete_time != -1 
							 group by uid) as min_time
						order by complete_time asc
					) as user_rank,
					(select @rank_num:= 0) r)  as all_user_rank;
select rank_num from time_trial_rank_0 where uid = 1;      
select count(rank_num) as rank_count from  time_trial_rank_0;
select * from time_trial_rank_0;			
select uid from time_trial_rank_0 where rank_num = 4;

/*forced_updating*/
create table if not exists `forced_updating`(
    `id` int unsigned auto_increment,
	`platform` VARCHAR(100) not null,
    `version` VARCHAR(100) not null,
    `rule` int not null,
	`updata_time` long not null,
    `url` VARCHAR(1000) not null,
   primary key ( `id` )
   )engine = innodb default charset = utf8;
insert into forced_updating ( platform, version, rule, updata_time, url)
				   values
				   ("Android", "8.6.0", 10000, 1633519472000, "https://www.pgyer.com/xlbk");
insert into forced_updating ( platform, version, rule, updata_time, url)
				   values
				   ("ios", "8.6.0", 10000, 1633519472123, "https://www.pgyer.com/rRut");
insert into forced_updating ( platform, version, rule, updata_time, url)
				   values
				   ("WebGL", "8.6.0", 10000, 1633519472123, "https://www.pgyer.com/rRut");
insert into forced_updating ( platform, version, rule, updata_time, url)
				   values
				   ("PC", "8.6.0", 10000, 1633519472121, "https://github.com/TastSong/CrazyCar/releases/latest");    
insert into forced_updating ( platform, version, rule, updata_time, url)
				   values
				   ("Defeat", "0.0.0", 10000, 1633519472121, "https://github.com/TastSong/CrazyCar/releases/latest");                                         
select * from forced_updating;
update forced_updating
set version = "8.5.0", rule = 9999, url = "https://github.com/TastSong/CrazyCar/releases/latest"
where platform = "PC";

/*all_equip*/
create table if not exists `all_equip`(
   `eid` int unsigned auto_increment,
   `rid` VARCHAR(100) not null,
   `equip_name` VARCHAR(100) not null,
   `star` int not null,
   `mass` int not null,
   `power` int not null,
   `max_power` int not null,
   `can_wade` int not null,
   `is_show` int not null,
   primary key ( `eid` )
   )engine = innodb default charset = utf8;
insert into all_equip (rid, equip_name, star, mass, power, max_power, can_wade, is_show )
				   values
				   ("R_Car_F1_Blue", "F1 Blue", 3, 20, 70, 96, 0, 1);
insert into all_equip (rid, equip_name, star, mass, power, max_power, can_wade, is_show )
				   values
				   ("R_Car_MonsterTruck_Red", "Monster Red", 2, 20, 78, 86, 0, 1);
insert into all_equip (rid, equip_name, star, mass, power, max_power, can_wade, is_show )
				   values
				   ("R_Car_OffRoadTruck_Orange", "RoadTruck Orange", 12, 21, 98, 93, 1, 1);                
insert into all_equip (rid, equip_name, star, mass, power, max_power, can_wade, is_show )
				   values
				   ("R_Car_SprintCar_White", "SprintCar White", 10, 20, 96, 92, 1, 1);                 
insert into all_equip (rid, equip_name, star, mass, power, max_power, can_wade, is_show )
				   values
				   ("R_Car_StockCar_Red", "StockCar Red", 4, 18, 78, 88, 0, 0);
insert into all_equip (rid, equip_name, star, mass, power, max_power, can_wade, is_show )
				   values
				   ("R_Car_StockCar_White", "StockCar White", 48, 15, 100, 120, 1, 1);   
insert into all_equip (rid, equip_name, star, mass, power, max_power, can_wade, is_show )
				   values
				   ("R_Car_OffRoadTruck_Orange_2", "RoadTruck Orange2", 4, 21, 80, 93, 0, 1);   
insert into all_equip (rid, equip_name, star, mass, power, max_power, can_wade, is_show )
				   values
				   ("R_Car_SprintCar_White_2", "SprintCar White2", 5, 20, 82, 92, 0, 1);                     
select* from all_equip;

/*equip_uid*/
create table if not exists `equip_uid`(
   `id` int unsigned auto_increment,
   `eid` int not null,
   `uid` int not null,
   primary key ( `id` )
   )engine = innodb default charset = utf8;
insert into equip_uid ( eid, uid )
				   values
				   (1, 1);
insert into equip_uid ( eid, uid )
				   values
				   (2, 1);                   
insert into equip_uid ( eid, uid )
				   values
				   (3, 1);
insert into equip_uid ( eid, uid )
				   values
				   (1, 2);                   
insert into equip_uid ( eid, uid )
				   values
				   (2, 2);
insert into equip_uid ( eid, uid )
				   values
				   (1, 3);   
insert into equip_uid ( eid, uid )
				   values
				   (3, 3);    
insert into equip_uid ( eid, uid )
				   values
				   (5, 3);                    
insert into equip_uid ( eid, uid )
				   values
				   (1, 4);   
insert into equip_uid ( eid, uid )
				   values
				   (2, 4);                      
select eid from equip_uid where uid = 1;

/*match class*/
create table if not exists `match_class`(
   `cid` int unsigned auto_increment,
   `star` int not null,  /*同Star*/
   `map_id` int not null,
   `room_id` VARCHAR(40),
   `limit_time` int not null,
   `class_name` VARCHAR(40) not null,
   `times` int not null,
   `start_time` long not null,
   `enroll_time` long not null,
   primary key ( `cid` )
   )engine = innodb default charset = utf8;
insert into match_class (star, map_id, room_id, limit_time, class_name, times, start_time, enroll_time)
				   values
				   (2, 0, '1111', 60, "基地卡通", 1, 1633519470, 1633519470);
insert into match_class (star, map_id, room_id, limit_time, class_name, times, start_time, enroll_time )
				   values
				   (1, 1, '0011', 70, "几何风光", 3, 1633519472, 1633519472);
select cid from match_class where room_id = '0011' and start_time = 1633519472;
insert into match_class (star, map_id, room_id, limit_time, class_name, times, start_time, enroll_time) values (2, 0, "1121",120, "TastSong", 1, 1652146822, 1652146792);
select* from match_class;

/*match_record*/
create table if not exists `match_record`(
    `id` int unsigned auto_increment,
	`uid` int not null,
    `cid` int not null,
    `complete_time` int not null,
    `record_time` long not null,
   primary key ( `id` )
   )engine = innodb default charset = utf8;
insert into match_record ( uid, cid, complete_time, record_time)
				   values
				   (1, 1, 22, 1629544628);
insert into match_record ( uid, cid, complete_time, record_time)
				   values
				   (1, 1, -1, 1629544628);
insert into match_record ( uid, cid, complete_time, record_time)
				   values
				   (1, 1, 14, 1629544644);
insert into match_record ( uid, cid, complete_time, record_time)
				   values
				   (2, 1, 14, 1629544644);
insert into match_record ( uid, cid, complete_time, record_time)
				   values
				   (3, 1, 10, 1629544644);
insert into match_record ( uid, cid, complete_time, record_time)
				   values
				   (4, 1, 16, 1658476385);
select record_time from match_record where uid = 1 ;	

select COUNT(*) as count, record_time as timestamp
from match_record 
where record_time > (unix_timestamp(CAST(SYSDATE()AS DATE)) - 60 * 60 * 24 * 2) 
group by FROM_UNIXTIME(record_time, '%y-%m-%d') 
order by record_time limit 2;

drop table if exists match_rank_0;
create table  match_rank_0 as
select * from  (select user_rank.*, @rank_num  := @rank_num  + 1 as rank_num
				from
					(
						select *
						from
						(select uid, min(complete_time) as complete_time
						from
							 match_record
							 where cid = 1 and complete_time != -1 
							 group by uid) as min_time
						order by complete_time asc
					) as user_rank,
					(select @rank_num:= 0) r)  as all_user_rank;
select rank_num from match_rank_0 where uid = 1;      
select count(rank_num) as rank_count from  match_rank_0;
select * from match_rank_0;			
select uid from match_rank_0 where rank_num = 4;

create table if not exists `superuser`(
   `uid` int unsigned auto_increment,
   primary key ( `uid` )
   )engine = innodb default charset = utf8;
insert into superuser ( uid)
                       values
					   (1);
                
select* from superuser;

select exists (select uid from superuser where uid = 2);


create table if not exists `user_login_record`(
   `id` int unsigned auto_increment,
   `user_name` varchar(100) not null,
   `login_time` long not null,
    `place` varchar(100),
    `device` varchar(100),
   primary key ( `id` )
   )engine = innodb default charset = utf8;
insert into user_login_record (user_name, login_time, place, device)
                       values
					   ("Lrrrr", 1658471682, "山东，青岛", "ios");  
insert into user_login_record (user_name, login_time, place, device)
                       values
					   ("Tast", 1658385282, "山东，青岛", "ios");                
insert into user_login_record (user_name, login_time, place, device)
                       values
					   ("Song", 1658288609, "山东，青岛", "ios"); 
insert into user_login_record (user_name, login_time, place, device)
                       values
					   ("Tast", 1658202210, "山东，青岛", "ios"); 
insert into user_login_record (user_name, login_time, place, device)
                       values
					   ("Fete", 1658202210, "山东，青岛", "ios");                          
insert into user_login_record (user_name, login_time, place, device)
                       values
					   ("Song", 1658202210, "山东，青岛", "ios");      
insert into user_login_record (user_name, login_time, place, device)
                       values
					   ("Fete", 1658332801, "山东，青岛", "ios");                           
select* from user_login_record;
select* from user_login_record
where login_time > 1629544627;

select COUNT(*) as count, login_time as timestamp
from user_login_record 
where login_time > (unix_timestamp(CAST(SYSDATE()AS DATE)) - 60 * 60 * 24 * 2) 
group by FROM_UNIXTIME(login_time, '%y-%m-%d') 
order by login_time limit 2;

/*addressable*/
create table if not exists `assets_updating`(
    `id` int not null,
	`updata_time` long not null,
    `is_on` int not null,
    `url` VARCHAR(1000) not null,
   primary key ( `id` )
   )engine = innodb default charset = utf8;
insert into assets_updating (id, is_on, updata_time, url)
				   values
				   (0, 1, 1633519472000, "http://139.9.103.145:8081/CrazyCarSpringBootServer/Addressable");                                     
update assets_updating
set is_on = 0
where id = 0;
select * from assets_updating;




