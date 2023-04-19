#!/bin/bash
source ~/.bash_profile
mvn clean
mvn package

rm -rf crazy_car.zip

mv ./target/crazy_car.jar crazy_car.jar

zip crazy_car.zip crazy_car.jar

scp crazy_car.zip tencent:/root/crazy_car_game/

mv crazy_car.jar ./target/crazy_car.jar
rm -rf crazy_car.zip

ssh -t tencent "ps -ax | grep crazy_car | cut -c 1-5  | xargs kill -9"
ssh -t tencent "rm -rf /root/crazy_car_game/crazy_car.jar"
ssh -t tencent "unzip /root/crazy_car_game/crazy_car.zip -d /root/crazy_car_game/"
ssh -t tencent "nohup java -jar /root/crazy_car_game/crazy_car.jar >/root/crazy_car_game/crazy_car.txt &"


echo "Finish!!!"

