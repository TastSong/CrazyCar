#!/bin/bash
# 在windows下使用git bash运行 首先cd 到此脚本所在文件夹即：*/crazy_car/CrazyCarServer
mvn clean
mvn package

rm -rf crazy_car.zip

mv ./target/crazy_car.jar crazy_car.jar

zip crazy_car.zip crazy_car.jar

scp crazy_car.zip tencent:/root/crazy_car_game/

mv crazy_car.jar ./target/crazy_car.jar
rm -rf crazy_car.zip

# crazy_car.ini内容如下
# [program:crazy_car]
# command=/usr/lib/jvm/jdk-17.0.5/bin/java -jar /root/crazy_car_game/crazy_car.jar > >/root/crazy_car_game/crazy_car.txt &
# autostart=true
# autorestart=true
# stderr_logfile=/var/log/crazy_car.err.log
# stdout_logfile=/var/log/crazy_car.out.log

ssh -t tencent "sudo supervisorctl stop crazy_car"
#ssh -t tencent "ps -ax | grep crazy_car | cut -c 1-5  | xargs kill -9"
ssh -t tencent "rm -rf /root/crazy_car_game/crazy_car.jar"
ssh -t tencent "unzip /root/crazy_car_game/crazy_car.zip -d /root/crazy_car_game/"
ssh -t tencent "sudo supervisorctl start crazy_car"

echo "Finish!!!"

