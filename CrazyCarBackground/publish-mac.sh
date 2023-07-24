#!/bin/bash
npm run build:prod

rm -rf crazy_car_background.zip

zip crazy_car_background.zip crazy_car_background/* crazy_car_background/static/* crazy_car_background/static/css/* crazy_car_background/static/fonts/* crazy_car_background/static/img/* crazy_car_background/static/js/*

scp crazy_car_background.zip 118.195.254.13:/root/nginx/

rm -rf crazy_car_background.zip

ssh -t 118.195.254.13 "rm -rf /root/nginx/"
ssh -t 118.195.254.13 "unzip /root/nginx/crazy_car_background.zip -d /root/nginx/"

echo "Finish!!!"

