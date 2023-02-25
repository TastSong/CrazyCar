#!/bin/bash
# 在windows下使用git bash运行 首先cd 到此脚本所在文件夹即：*/crazy_car/CrazyCarServer
mvn clean
mvn package

rm -rf crazy_car.zip

mv ./target/crazy_car.jar crazy_car.jar

zip crazy_car.zip crazy_car.jar

scp crazy_car.zip huawei:/root/crazy_car_game/

mv crazy_car.jar ./target/crazy_car.jar
rm -rf crazy_car.zip

ssh -t huawei "ps -ax | grep crazy_car | cut -c 1-5  | xargs kill -9"
ssh -t huawei "rm -rf /root/crazy_car_game/crazy_car.jar"
ssh -t huawei "unzip /root/crazy_car_game/crazy_car.zip -d /root/crazy_car_game/"
ssh -t huawei "nohup java -jar /root/crazy_car_game/crazy_car.jar >/root/crazy_car_game/crazy_car.txt &"

echo "Finish!!!"

