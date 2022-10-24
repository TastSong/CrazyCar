#!/bin/bash
# 在windows下使用git bash运行 首先cd 到此脚本所在文件夹即：*/CrazyCar/CrazyCarServer
mvn clean
mvn package

rm -rf CrazyCar.zip

mv ./target/CrazyCar.jar CrazyCar.jar

zip CrazyCar.zip CrazyCar.jar

scp CrazyCar.zip huawei:/root/

mv CrazyCar.jar ./target/CrazyCar.jar
rm -rf CrazyCar.zip

ssh -t huawei "ps -ax | grep CrazyCar | cut -c 1-5  | xargs kill -9"
ssh -t huawei "rm -rf /root/CrazyCar.jar"
ssh -t huawei "unzip /root/CrazyCar.zip -d /root/"
ssh -t huawei "nohup java -jar /root/CrazyCar.jar"

echo "Finish!!!"

