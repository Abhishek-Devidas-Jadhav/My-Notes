#ip address | grep -oE [0-9]*\\.[0-9]*\\.[0-9]*\\.[0-9]*/[0-9]{2} > troll.txt
####cat troll.txt ####1
####cat troll.txt | grep -c . ####2
####echo $count #####3
#echo Write magic words
#read command
#####echo $command#####
####echo $command####4
####cat troll.txt | while read ip; do echo $ip ;done;####5
#echo "" > troll_2.txt
#cat troll.txt |while read ip; do  echo $command $ip;$command $ip | grep -oE [0-9]*\\.[0-9]*\\.[0-9]*\\.[0-9]* >> troll_2.txt;done;
####cat troll_2.txt ####5
#history -d 10#May not work without privilages
clear
echo final magic word
read command_final
#####cat troll_2.txt | while read ip_final;do echo $command_final $ip_final;$command_final $ip_final;done;######
echo host name
read host
echo path
read path
echo file
read file
cat troll_2.txt | while read ip_final;do echo $command_final $ip_final;$command_final $file $host@$ip_final:$path;done;
