#!/bin/bash
# 在windows下使用git bash运行 首先cd 到此脚本所在文件夹即：*/CrazyCar/CrazyCarServer

ssh -t huawei "rm -rf /root/CrazyCar.sql"
scp ../CrazyCarDB/CrazyCar.sql huawei:/root/

echo "Finish!!!"

