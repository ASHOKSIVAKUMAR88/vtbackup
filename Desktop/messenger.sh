sudo apt-get update
sudo apt-get install default-jre
wget http://download.igniterealtime.org/spark/spark_2_8_2.tar.gz
sudo tar -zxvf spark_2_8_2.tar.gz -C /opt/
sudo mv /opt/Spark/ /opt/spark
cd /opt/spark/
sudo wget https://dl.dropbox.com/u/50880014/spark.png
sudo touch /usr/share/applications/spark.desktop
echo [Desktop Entry] > /usr/share/applications/spark.desktop

echo Name=Spark > /usr/share/applications/spark.desktop
echo Version=2.8.2 > /usr/share/applications/spark.desktop
echo GenericName=Spark > /usr/share/applications/spark.desktop
echo X-GNOME-FullName=Spark > /usr/share/applications/spark.desktop
echo Comment=ignite realtime Spark IM client > /usr/share/applications/spark.desktop
echo Type=Application > /usr/share/applications/spark.desktop
echo Categories=Application;Utility; > /usr/share/applications/spark.desktop
echo Path=/opt/spark > /usr/share/applications/spark.desktop
echo Exec=/bin/bash Spark > /usr/share/applications/spark.desktop
echo Terminal=false > /usr/share/applications/spark.desktop
echo StartupNotify=true > /usr/share/applications/spark.desktop
echo Icon=/opt/spark/spark.png > /usr/share/applications/spark.desktop
echo TargetEnvironment=Unity > /usr/share/applications/spark.desktop
sudo apt-get install libxtst6:i386 libxi6:i386 libxrender1:i386
sudo su
DISPLAY="$1":0.0 export DISPLAY
./Spark
