-- 禁用这个模式（但这可能会导致数据不一致问题）
SET GLOBAL sql_mode=(SELECT REPLACE(@@sql_mode,'ONLY_FULL_GROUP_BY',''));

DROP DATABASE IF EXISTS crazy_car;
create database crazy_car charset=utf8mb4 collate=utf8mb4_general_ci;
use crazy_car;

-- MySQL dump 10.13  Distrib 8.0.32, for Linux (x86_64)
--
-- Host: localhost    Database: crazy_car
-- ------------------------------------------------------
-- Server version	8.0.32

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `admin_users`
--

DROP TABLE IF EXISTS `admin_users`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `admin_users` (
                               `uid` int unsigned NOT NULL AUTO_INCREMENT,
                               `user_password` varchar(100) NOT NULL,
                               `user_name` varchar(100) NOT NULL,
                               `des` varchar(1000) NOT NULL,
                               `routes` text,
                               PRIMARY KEY (`uid`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `admin_users`
--

LOCK TABLES `admin_users` WRITE;
/*!40000 ALTER TABLE `admin_users` DISABLE KEYS */;
INSERT INTO `admin_users` VALUES (1,'123456','admin','Super Administrator. Have access to view all pages.','[ { \"redirect\":\"/form/index\", \"level\":0, \"parentId\":0, \"path\":\"/form\", \"component\":\"Layout\", \"createTime\":\"2020-02-07T08:29:13.000+00:00\", \"children\":[ { \"path\":\"form\", \"component\":\"form/index\", \"meta\":{ \"icon\":\"form\", \"title\":\"Form\" }, \"name\":\"Form\" } ], \"meta\":{ \"icon\":\"form\", \"title\":\"Form\" }, \"id\":68 }, { \"redirect\":\"/permission/role\", \"path\":\"/permission\", \"component\":\"Layout\", \"children\":[ { \"path\":\"role\", \"component\":\"permission/role\", \"meta\":{ \"title\":\"Role Permission\" }, \"name\":\"RolePermission\" } ], \"meta\":{ \"icon\":\"lock\", \"title\":\"Permission\" }, \"alwaysShow\":true } ]'),
                                 (2,'123456','editor','Normal Editor. Can see all pages except permission page','[{\"redirect\":\"/form/index\",\"level\":0,\"parentId\":0,\"path\":\"/form\",\"component\":\"Layout\",\"createTime\":\"2020-02-07T08:29:13.000+00:00\",\"children\":[{\"path\":\"form\",\"component\":\"form/index\",\"meta\":{\"icon\":\"form\",\"title\":\"form\"},\"name\":\"form\"}],\"meta\":{\"icon\":\"form\",\"title\":\"form\"},\"name\":\"form\",\"id\":21}]'),
                                 (3,'123456','visitor','Just a visitor. Can only see the home page and the document page','[{\"redirect\":\"/form/index\",\"level\":0,\"parentId\":0,\"path\":\"/form\",\"component\":\"Layout\",\"createTime\":\"2020-02-07T08:29:13.000+00:00\",\"children\":[{\"path\":\"form\",\"component\":\"form/index\",\"meta\":{\"icon\":\"form\",\"title\":\"form\"},\"name\":\"form\"}],\"meta\":{\"icon\":\"form\",\"title\":\"form\"},\"name\":\"form\",\"id\":21}]');
/*!40000 ALTER TABLE `admin_users` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `equip`
--

DROP TABLE IF EXISTS `equip`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `equip` (
                             `eid` int unsigned NOT NULL AUTO_INCREMENT,
                             `rid` varchar(100) NOT NULL,
                             `equip_name` varchar(100) NOT NULL,
                             `star` int NOT NULL,
                             `mass` int NOT NULL,
                             `power` int NOT NULL,
                             `max_power` int NOT NULL,
                             `can_wade` int NOT NULL,
                             `is_show` int NOT NULL,
                             PRIMARY KEY (`eid`)
) ENGINE=InnoDB AUTO_INCREMENT=16 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `equip`
--

LOCK TABLES `equip` WRITE;
/*!40000 ALTER TABLE `equip` DISABLE KEYS */;
INSERT INTO `equip` VALUES (1,'R_Car_F1_Blue','F1 Blue',3,20,70,96,0,1),
                               (2,'R_Car_MonsterTruck_Red','Monster Red',2,20,78,86,0,1),
                               (3,'R_Car_OffRoadTruck_Orange','RoadTruck Orange',12,21,98,93,1,1),
                               (4,'R_Car_SprintCar_White','SprintCar White',10,20,96,92,1,1),
                               (5,'R_Car_StockCar_Red','StockCar Red',4,18,78,88,0,0),
                               (6,'R_Car_StockCar_White','StockCar White',48,15,100,120,1,1),
                               (7,'R_Car_OffRoadTruck_Orange_2','RoadTruck Orange2',4,21,80,93,0,1),
                               (8,'R_Car_SprintCar_White_2','SprintCar White2',5,20,82,92,0,1);
/*!40000 ALTER TABLE `equip` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `user`
--

DROP TABLE IF EXISTS `user`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `user` (
                            `uid` int unsigned NOT NULL AUTO_INCREMENT,
                            `user_name` varchar(100) NOT NULL,
                            `user_password` varchar(40) NOT NULL,
                            `login_time` bigint NOT NULL,
                            `aid` int NOT NULL,
                            `star` int NOT NULL,
                            `is_vip` int NOT NULL,
                            `eid` int NOT NULL,
                            PRIMARY KEY (`uid`)
) ENGINE=InnoDB AUTO_INCREMENT=5000001 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user`
--

LOCK TABLES `user` WRITE;
/*!40000 ALTER TABLE `user` DISABLE KEYS */;
INSERT INTO `user` VALUES (1,'Tast','96e79218965eb72c92a549dd5a330112',1629544628,2,99,1,1),
                              (2,'song','96e79218965eb72c92a549dd5a330112',1629544634,2,88,1,2),
                              (3,'阿宋小娇妻','96e79218965eb72c92a549dd5a330112',1629544655,3,66,1,3),
                              (4,'Lory','96e79218965eb72c92a549dd5a330112',1629544666,4,12,0,1);
/*!40000 ALTER TABLE `user` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `assets_updating`
--

DROP TABLE IF EXISTS `assets_updating`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `assets_updating` (
                                   `id` int NOT NULL,
                                   `update_time` bigint NOT NULL,
                                   `is_on` int NOT NULL,
                                   `url` varchar(1000) NOT NULL,
                                   PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `assets_updating`
--

LOCK TABLES `assets_updating` WRITE;
/*!40000 ALTER TABLE `assets_updating` DISABLE KEYS */;
INSERT INTO `assets_updating` VALUES (0,1633519472,0,'http://tastsong.top/crazy_car_addressable');
/*!40000 ALTER TABLE `assets_updating` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `avatar`
--

DROP TABLE IF EXISTS `avatar`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `avatar` (
                          `aid` int unsigned NOT NULL AUTO_INCREMENT,
                          `rid` varchar(100) NOT NULL,
                          `avatar_name` varchar(40) NOT NULL,
                          `star` int NOT NULL,
                          PRIMARY KEY (`aid`)
) ENGINE=InnoDB AUTO_INCREMENT=27 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `avatar`
--

LOCK TABLES `avatar` WRITE;
/*!40000 ALTER TABLE `avatar` DISABLE KEYS */;
INSERT INTO `avatar` VALUES (1,'0','Tast 0',3),
                            (2,'1','Black 1',2),
                            (3,'2','Write 2',4),
                            (4,'3','Write 3',5),
                            (5,'4','Write 4',6),
                            (6,'5','Write 5',4),
                            (7,'6','Avatar6',2),
                            (8,'7','Avatar7',100),
                            (9,'8','Avatar8',1),
                            (10,'9','Avatar9',3),
                            (11,'11','Avatar11',3),
                            (12,'12','Avatar12',5),
                            (13,'13','Avatar13',6),
                            (14,'14','Avatar14',5),
                            (15,'15','Avatar15',2),
                            (16,'16','Avatar160',3),
                            (17,'17','Avatar17',5),
                            (18,'18','Avatar18',2),
                            (19,'19','Avatar19',4);
/*!40000 ALTER TABLE `avatar` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `avatar_record`
--

DROP TABLE IF EXISTS `avatar_record`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `avatar_record` (
                                 `id` bigint unsigned NOT NULL AUTO_INCREMENT,
                                 `aid` int NOT NULL,
                                 `uid` int NOT NULL,
                                 `update_time` bigint,
                                 PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=19 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `avatar_record`
--

LOCK TABLES `avatar_record` WRITE;
/*!40000 ALTER TABLE `avatar_record` DISABLE KEYS */;
INSERT INTO `avatar_record` VALUES (1,1,1,1702374103),
                                   (2,2,1,1702374103),
                                   (3,5,1,1702374103),
                                   (4,9,1,1702374103),
                                   (5,17,1,1702374103),
                                   (6,18,1,1702374103),
                                   (7,15,1,1702374103),
                                   (8,16,1,1702374103),
                                   (9,2,2,1702374103),
                                   (10,3,3,1702374103),
                                   (11,4,4,1702374103);
/*!40000 ALTER TABLE `avatar_record` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `equip_record`
--

DROP TABLE IF EXISTS `equip_record`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `equip_record` (
                             `id` bigint unsigned NOT NULL AUTO_INCREMENT,
                             `eid` int NOT NULL,
                             `uid` int NOT NULL,
                             `update_time` bigint NOT NULL,
                             PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=18 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `equip_record`
--

LOCK TABLES `equip_record` WRITE;
/*!40000 ALTER TABLE `equip_record` DISABLE KEYS */;
INSERT INTO `equip_record` VALUES (1,1,1,1702459368),
                               (2,2,1,1702459368),
                               (3,3,1,1702459368),
                               (4,1,2,1702459368),
                               (5,2,2,1702459368),
                               (6,1,3,1702459368),
                               (7,3,3,1702459368),
                               (8,5,3,1702459368),
                               (9,1,4,1702459368),
                               (10,2,4,1702459368);
/*!40000 ALTER TABLE `equip_record` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `version`
--

DROP TABLE IF EXISTS `version`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `version` (
                                   `id` int unsigned NOT NULL AUTO_INCREMENT,
                                   `platform` varchar(100) NOT NULL,
                                   `version` varchar(100) NOT NULL,
                                   `rule` int NOT NULL,
                                   `update_time` bigint NOT NULL,
                                   `url` varchar(1000) NOT NULL,
                                   PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=13 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `version`
--

LOCK TABLES `version` WRITE;
/*!40000 ALTER TABLE `version` DISABLE KEYS */;
INSERT INTO `version` VALUES (1,'Android','9.5.0',10000,1633519472,'https://www.pgyer.com/xlbk'),
                                     (2,'ios','9.5.0',10000,1633519472,'https://www.pgyer.com/rRut'),
                                     (3,'WebGL','9.5.0',10000,1633519472,'https://www.pgyer.com/rRut'),
                                     (4,'PC','9.5.0',9999,1633519472,'https://github.com/TastSong/CrazyCar/releases/latest'),(12,'Defeat','0.0.0',10000,'1633519472121','https://github.com/TastSong/CrazyCar/releases/latest');
/*!40000 ALTER TABLE `version` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `match_class`
--

DROP TABLE IF EXISTS `match_class`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `match_class` (
                               `cid` int unsigned NOT NULL AUTO_INCREMENT,
                               `star` int NOT NULL,
                               `map_id` int NOT NULL,
                               `room_id` varchar(40) DEFAULT NULL,
                               `limit_time` int NOT NULL,
                               `class_name` varchar(40) NOT NULL,
                               `times` int NOT NULL,
                               `start_time` bigint NOT NULL,
                               `enroll_time` bigint NOT NULL,
                               PRIMARY KEY (`cid`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `match_class`
--

LOCK TABLES `match_class` WRITE;
/*!40000 ALTER TABLE `match_class` DISABLE KEYS */;
INSERT INTO `match_class` VALUES (1,2,0,'1111',60,'基地卡通',1,1633519470,1633519470),
                                 (2,1,1,'0011',70,'几何风光',3,1633519472,1633519472),
                                 (3,2,0,'1121',120,'TastSong',1,1652146822,1652146792);
/*!40000 ALTER TABLE `match_class` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `match_map`
--

DROP TABLE IF EXISTS `match_map`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `match_map` (
                             `cid` int unsigned NOT NULL AUTO_INCREMENT,
                             `star` int NOT NULL,
                             `map_id` int NOT NULL,
                             `has_water` int NOT NULL,
                             `limit_time` int NOT NULL,
                             `class_name` varchar(40) NOT NULL,
                             `times` int NOT NULL,
                             PRIMARY KEY (`cid`)
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `match_map`
--

LOCK TABLES `match_map` WRITE;
/*!40000 ALTER TABLE `match_map` DISABLE KEYS */;
INSERT INTO `match_map` VALUES (1,2,0,0,88,'基地卡通',1),
                               (2,14,1,1,96,'水上乐园',1),
                               (3,3,2,0,80,'曲折前行',2),
                               (4,22,3,0,100,'蜿蜒驰骋',2),
                               (5,4,4,0,90,'砥砺前行',2),
                               (6,1,5,0,90,'几何风光',2);
/*!40000 ALTER TABLE `match_map` ENABLE KEYS */;
UNLOCK TABLES;


--
-- Table structure for table `match_record`
--

DROP TABLE IF EXISTS `match_record`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `match_record` (
                                `id` bigint unsigned NOT NULL AUTO_INCREMENT,
                                `uid` int NOT NULL,
                                `cid` int NOT NULL,
                                `complete_time` int NOT NULL,
                                `record_time` bigint NOT NULL,
                                PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `match_record`
--

LOCK TABLES `match_record` WRITE;
/*!40000 ALTER TABLE `match_record` DISABLE KEYS */;
INSERT INTO `match_record` VALUES (1,1,1,22,1629544628),
                                  (2,1,1,-1,1629544628),
                                  (3,1,1,14,1629544644),
                                  (4,2,1,14,1629544644),
                                  (5,3,1,10,1629544644),
                                  (6,4,1,16,1658476385);
/*!40000 ALTER TABLE `match_record` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `superuser`
--

DROP TABLE IF EXISTS `superuser`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `superuser` (
                             `uid` int unsigned NOT NULL AUTO_INCREMENT,
                             PRIMARY KEY (`uid`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `superuser`
--

LOCK TABLES `superuser` WRITE;
/*!40000 ALTER TABLE `superuser` DISABLE KEYS */;
INSERT INTO `superuser` VALUES (1);
/*!40000 ALTER TABLE `superuser` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `time_trial_class`
--

DROP TABLE IF EXISTS `time_trial_class`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `time_trial_class` (
                                    `cid` int unsigned NOT NULL AUTO_INCREMENT,
                                    `star` int NOT NULL,
                                    `map_id` int NOT NULL,
                                    `has_water` int NOT NULL,
                                    `limit_time` int NOT NULL,
                                    `class_name` varchar(40) NOT NULL,
                                    `times` int NOT NULL,
                                    PRIMARY KEY (`cid`)
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `time_trial_class`
--

LOCK TABLES `time_trial_class` WRITE;
/*!40000 ALTER TABLE `time_trial_class` DISABLE KEYS */;
INSERT INTO `time_trial_class` VALUES (1,2,0,0,88,'基地卡通',2),
                                      (2,14,1,1,96,'水上乐园',2),
                                      (3,3,2,0,80,'曲折前行',2),
                                      (4,22,3,0,100,'蜿蜒驰骋',2),
                                      (5,4,4,0,90,'砥砺前行',2),
                                      (6,1,5,0,90,'几何风光',2);
/*!40000 ALTER TABLE `time_trial_class` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `time_trial_record`
--

DROP TABLE IF EXISTS `time_trial_record`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `time_trial_record` (
                                     `id` bigint unsigned NOT NULL AUTO_INCREMENT,
                                     `uid` int NOT NULL,
                                     `cid` int NOT NULL,
                                     `complete_time` int NOT NULL,
                                     `record_time` bigint NOT NULL,
                                     PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=16 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `time_trial_record`
--

LOCK TABLES `time_trial_record` WRITE;
/*!40000 ALTER TABLE `time_trial_record` DISABLE KEYS */;
INSERT INTO `time_trial_record` VALUES (1,1,1,22,1629544628),
                                       (2,1,1,14,1629544644),
                                       (3,1,1,-1,1629544628),
                                       (4,1,0,14,1629544644),
                                       (5,2,1,15,1629544644),
                                       (6,2,1,14,1629544644),
                                       (7,3,1,10,1658332800),
                                       (8,4,1,16,1658474034);
/*!40000 ALTER TABLE `time_trial_record` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `time_trial_class_record`
--

DROP TABLE IF EXISTS `time_trial_class_record`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `time_trial_class_record` (
                                       `id` bigint unsigned NOT NULL AUTO_INCREMENT,
                                       `cid` int NOT NULL,
                                       `uid` int NOT NULL,
                                        `update_time` bigint NOT NULL,
                                       PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=15 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `time_trial_class_record`
--

LOCK TABLES `time_trial_class_record` WRITE;
/*!40000 ALTER TABLE `time_trial_class_record` DISABLE KEYS */;
INSERT INTO `time_trial_class_record` VALUES (1,1,1, 1702543584),
                                         (2,2,1, 1702543584),
                                         (3,3,1, 1702543584),
                                         (4,1,2, 1702543584),
                                         (5,1,3, 1702543584),
                                         (6,1,5, 1702543584),
                                         (7,1,4, 1702543584);
/*!40000 ALTER TABLE `time_trial_class_record` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `user_login_record`
--
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE IF NOT EXISTS  `user_login_record` (
                                     `id` bigint unsigned NOT NULL AUTO_INCREMENT,
                                     `uid` int NOT NULL,
                                     `login_time` bigint NOT NULL,
                                     `place` varchar(100) DEFAULT NULL,
                                     `device` varchar(100) DEFAULT NULL,
                                     PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=15 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user_login_record`
--

LOCK TABLES `user_login_record` WRITE;
/*!40000 ALTER TABLE `user_login_record` DISABLE KEYS */;
INSERT INTO `user_login_record` VALUES (1,1,1658471682,'山东，青岛','ios'),
                                       (2,1,1658385282,'山东，青岛','ios'),
                                       (3,2,1658288609,'山东，青岛','ios'),
                                       (4,1,1658202210,'山东，青岛','ios'),
                                       (5,3,1658202210,'山东，青岛','ios'),
                                       (6,1,1658202210,'山东，青岛','ios'),
                                       (7,1,1658332801,'山东，青岛','ios');
/*!40000 ALTER TABLE `user_login_record` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-12-13  9:31:31



