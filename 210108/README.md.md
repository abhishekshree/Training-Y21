## Host: bandit.labs.overthewire.org

## Port: 2220

## Username: bandit0

## Password: bandit0

## Level 0-1
ls -la
cat readme
get the password for next level
exit
ssh bandit1@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 1-2
ls -alps
cat ./-
get the password for next level
exit
ssh bandit2@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 2-3
ls -alps
cat 'spaces in this filename'
get the password for next level
exit
ssh bandit3@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 3-4
ls -alps
cd inhere/
ls
ls -al
cat .hidden
get the password for next level
exit
ssh bandit4@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 4-5
ls -la
cd inhere/
ls
file ./*
cat ./-file07
get the password for next level
exit
ssh bandit5@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 5-6
ls -alps
cd inhere/
ls
find . -size 1033c
cat ./maybehere07/.file2
get the password for next level
exit
ssh bandit6@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 6-7
find / -user bandit7 -group bandit6 -size 33c
cat /var/lib/dpkg/info/bandit7.password
get the password for next level
exit
ssh bandit7@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 7-8
ls -alps
cat data.txt | grep millionth
get the password for next level
exit
ssh bandit8@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 8-9
cat data.txt | sort | uniq -u
get the password for next level
exit
ssh bandit9@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 9-10
ls -alps
strings data.txt | grep =
get the password for next level
exit
ssh bandit10@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 10-11
ls -alps
cat data.txt | base64 --decode
get the password for next level
exit
ssh bandit11@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 11-12
ls -alps
cat data.txt | tr a-zA-Z n-za-mN-ZA-M
get the password for next level
exit
ssh bandit12@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 12-13
ls
cat data.txt
mkdir /tmp/Amkrit12
cp data.txt /tmp/Amkrit12
cd /tmp/Amkrit12
ls
file data.txt
xxd -r data.txt data1
file data1
mv data1 data2.gz
gzip -d data2.gz
file data2
mv data2 data3.bz2
bzip2 -d data3.bz2
file data3
mv data3 data4.gz
gzip -d data4.gz
file data4
tar -xvf data4
file data5.bin
tar -xvf data5.bin
file data6.bin
mv data6.bin data7.bz2
bzip2 -d data7.bz2
file data7
tar -xvf data7
file data8.bin
mv data8.bin data9.gz
gzip -d data9.gz
file data9
cat data9
get the password for next level
exit
ssh bandit13@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 13-14
ls
ssh bandit14@bandit.labs.overthewire.org -p 2220 -i sshkey.private
ls -la
cat /etc/bandit_pass/bandit14
get the password for next level
exit
ssh bandit14@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 14-15

cat /etc/bandit_pass/bandit14
telnet localhost 30000
get the password for next level
exit
ssh bandit15@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 15-16
openssl s_client -connect localhost:30001 -ign_eof
get the password for next level
exit
ssh bandit16@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 16-17
nmap -A localhost -p 31000-32000
openssl s_client -connect localhost:31790
mkdir /tmp/Amkrit12_ssh
cd /tmp/Amkrit12_ssh
nano Amkrit12.private
chmod 600 Amkrit12.private
get the password for next level
exit
ssh bandit17@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

 ## Level 17-18
ls
diff passwords.old passwords.new
get the password for next level
exit
ssh bandit18@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 18-19
ssh -T bandit18@localhost
ls
cat readme
get the password for next level
exit
ssh bandit19@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 19-20
ls
./bandit20-do
./bandit20-do cat /etc/bandit_pass/bandit20
get the password for next level
exit
ssh bandit20@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## Level 20-21
ls
./suconnect
./suconnect 4444
nc -lvp 4444
get the password for next level
exit
ssh bandit21@bandit.labs.overthewire.org -p 2220(#enter in another level)
enter password got from previous level

## bLevel 21-22
cd /etc/cron.d/
ls
cat cronjob_bandit22
cat /usr/bin/cronjob_bandit22.sh
cat /tmp/t7O6lds9S0RqQh9aMcz6ShpAoZKF7fgv
