#!/bin/bash
# 在windows下使用git bash运行 首先cd 到此脚本所在文件夹即：*/CrazyCar/CrazyCarServer

ssh -t tencent "rm -rf /root/crazy_car_game/db/CrazyCar.sql"
scp ../CrazyCarDB/CrazyCar.sql tencent:/root/crazy_car_game/db/

echo "Finish!!!"

