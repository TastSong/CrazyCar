mvn clean
mvn package
rm -rf crazy_car.zip

mv ./target/crazy_car.jar crazy_car.jar

zip crazy_car.zip crazy_car.jar

scp crazy_car.zip huawei:/game/crazy_car/

mv crazy_car.jar ./target/crazy_car.jar
rm -rf crazy_car.zip

# supervisor conf --- /etc/supervisord.d
# crazy_car.ini内容如下
# [program:crazy_car]
# command=/usr/lib/jvm/jdk-17.0.5/bin/java -jar /game/crazy_car/crazy_car.jar > >/game/crazy_car/crazy_car.txt &
# autostart=true
# autorestart=true
# stderr_logfile=/var/log/crazy_car.err.log
# stdout_logfile=/var/log/crazy_car.out.log

ssh -t huawei "sudo supervisorctl stop crazy_car"
#ssh -t huawei "ps -ax | grep crazy_car | cut -c 1-5  | xargs kill -9"
ssh -t huawei "rm -rf /game/crazy_car/crazy_car.jar"
ssh -t huawei "unzip /game/crazy_car/crazy_car.zip -d /game/crazy_car/"
ssh -t huawei "sudo supervisorctl start crazy_car"


echo "Finish!!!"
