#!/bin/bash
npm run build:prod

rm -rf ROOT.zip

mv dist ROOT

zip ROOT.zip ROOT/* ROOT/static/* ROOT/static/css/* ROOT/static/fonts/* ROOT/static/img/* ROOT/static/js/*

scp ROOT.zip huawei:/root/tomcat-10.0.27/webapps/

mv ROOT dist
rm -rf ROOT.zip

ssh -t huawei "sh /root/tomcat-10.0.27/bin/shutdown.sh"
ssh -t huawei "rm -rf /root/tomcat-10.0.27/webapps/ROOT"
ssh -t huawei "unzip /root/tomcat-10.0.27/webapps/ROOT.zip -d /root/tomcat-10.0.27/webapps/"
ssh -t huawei "nohup sh /root/tomcat-10.0.27/bin/startup.sh"

echo "Finish!!!"

