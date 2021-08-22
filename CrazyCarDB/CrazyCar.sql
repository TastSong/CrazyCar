CREATE DATABASE crazy_car;
use crazy_car;
CREATE TABLE IF NOT EXISTS `all_user`(
   `user_id` INT UNSIGNED AUTO_INCREMENT,
   `user_name` VARCHAR(100) NOT NULL,
   `user_password` VARCHAR(40) NOT NULL,
   `login_time` INT UNSIGNED,
   PRIMARY KEY ( `user_id` )
   )ENGINE=InnoDB DEFAULT CHARSET=utf8;
INSERT INTO all_user ( user_id, user_name, user_password, login_time )
                       VALUES
                       ( 1, "Tast","111111", 1629544628 );
 select * from all_user;      
 INSERT INTO all_user ( user_name, user_password, login_time )
                       VALUES
                       ( "aaaa","222222", 1629544628 );
select user_password from all_user where user_name = "Tast";
DELETE FROM all_user WHERE user_id = 2;
select user_password from all_user where user_name = "Tast1";