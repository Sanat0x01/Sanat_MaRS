#BASH SCRIPT
mkdir rover_mission
cd rover_mission
touch log1.txt log2.txt log3.txt
mv log1.txt mission_log.txt
find . -type f -name “*.log”
gedit mission_rover.txt
cat mission_rover.txt
grep “ERROR” mission_rover.txt
wc -l mission_rover.txt
date
top -n 1| grep “Cpu(s)”
shutdown -h +10
