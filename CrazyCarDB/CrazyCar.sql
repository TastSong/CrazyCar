CREATE DATABASE crazy_car;
use crazy_car;

CREATE TABLE IF NOT EXISTS `all_user`(
   `user_id` INT UNSIGNED AUTO_INCREMENT,
   `user_name` VARCHAR(100) NOT NULL,
   `user_password` VARCHAR(40) NOT NULL,
   `login_time` INT UNSIGNED,
    `aid` INT(4)  NOT NULL,
   PRIMARY KEY ( `user_id` )
   )ENGINE=InnoDB DEFAULT CHARSET=utf8;
INSERT INTO all_user ( user_id, user_name, user_password, login_time, aid )
                       VALUES
                       ( 1, "Tast","111111", 1629544628, 0 );
 select * from all_user;      
 
select user_password from all_user where user_name = "Tast";
/*修改原有表all_user*/
/*
ALTER TABLE all_user ADD aid INT(4)  NOT NULL;
alter table all_user drop column aid;
*/
/*avatar_index*/
CREATE TABLE IF NOT EXISTS `avatar_index`(
   `id` INT UNSIGNED AUTO_INCREMENT,
   `aid` INT NOT NULL,
   `user_id` int NOT NULL,
   PRIMARY KEY ( `id` )
   )ENGINE=InnoDB DEFAULT CHARSET=utf8;
INSERT INTO avatar_index ( aid, user_id )
				   VALUES
				   ( 0, 1 );
INSERT INTO avatar_index ( aid, user_id )
				   VALUES
				   ( 2, 1 );
INSERT INTO avatar_index ( aid, user_id )
				   VALUES
				   ( 4, 1 );
INSERT INTO avatar_index ( aid, user_id )
				   VALUES
				   ( 8, 1 );     
select aid from avatar_index where aid = 0 and user_id = 1;
select * from avatar_index;   
/*avatar_name*/
CREATE TABLE IF NOT EXISTS `avatar_name`(
   `id` INT UNSIGNED AUTO_INCREMENT,
   `aid` INT NOT NULL,
   `avatar_name` VARCHAR(40) NOT NULL,
   PRIMARY KEY ( `id` )
   )ENGINE=InnoDB DEFAULT CHARSET=utf8;
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   ( 0, "Tast" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   ( 1, "Black 1" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   ( 2, "Write 2" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   ( 3, "Write 3" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   ( 4, "Write 4" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   ( 5, "Write 5" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   ( 6, "Avatar6" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   ( 7, "Avatar7" );   
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   ( 8, "Avatar8" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   ( 9, "Avatar9" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   (10, "Avatar10" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   (11, "Avatar11" );   
 INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   (12, "Avatar12" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   (13, "Avatar13" );                
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   (14, "Avatar14" );             
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   (15, "Avatar15" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   (16, "Avatar160" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   (17, "Avatar17" );   
 INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   (18, "Avatar18" );
INSERT INTO avatar_name ( aid, avatar_name )
				   VALUES
				   (19, "Avatar19" );                                     
select * from avatar_name;                    

select * from all_user;   
update all_user set aid = 2 where user_id = 1;

CREATE TABLE IF NOT EXISTS `ab_resource`(
   `r_id` INT UNSIGNED AUTO_INCREMENT,
   `r_name` VARCHAR(100) NOT NULL,
   `r_hash` VARCHAR(40) NOT NULL,
   `r_crc` VARCHAR(40) NOT NULL,
    `r_url` VARCHAR(40) NOT NULL,
    `r_size` VARCHAR(40) NOT NULL,
   PRIMARY KEY ( `r_id` )
   )ENGINE=InnoDB DEFAULT CHARSET=utf8;
INSERT INTO ab_resource ( r_name, r_hash, r_crc, r_url, r_size)
				   VALUES
				   ( "avatar", "9370cfe1c8e8884648f086b820bca347", "1242346442", "avatar", "0.1289" );
select * from ab_resource;                     
select r_hash from ab_resource where r_name = "avatar";


