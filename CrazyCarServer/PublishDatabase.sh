#!/bin/bash
# 在windows下使用git bash运行 首先cd 到此脚本所在文件夹即：*/CrazyCar/CrazyCarServer

ssh -t huawei "rm -rf /game/crazy_car/CrazyCar.sql"
scp ../CrazyCarDB/CrazyCar.sql huawei:/game/crazy_car/

echo "Finish!!!"

