-----------Bandit game Challenge----------------

level 0

ssh bandit0@bandit.labs.overthewire.org -p 2220
password:bandit0
ls for list all files
cat to view content of file(password for level 1)
then log out


level 1
ssh bandit1@bandit.labs.overthewire.org -p 2220
password:boJ9jbbUNNfktd78OOpsqOltutMc3MY1
ls -alps to list all files
cat ./- to view content (password for level 2)


level 2

ssh bandit2@bandit.labs.overthewire.org -p 2220
password:CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9
spaces\ in\ this\ filename this gives password for level 3


level 3

ssh bandit3@bandit.labs.overthewire.org -p 2220
password:UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK
cat .hidden to view hidden file that contains password for level 4


level 4

ssh bandit4@bandit.labs.overthewire.org -p 2220
password:pIwrPrtPN36QITSp3EQaw936yaFoFgAB
cat ./-file0i i==1,2,3,4.....
then at i=7 i got password to the next level


level 5

ssh bandit5@bandit.labs.overthewire.org -p 2220
password:koReBOKuIDDepwhWk7jZC0RTdopnAYKh
find . type-f -size  1033c ! -execute type specifises and got password for level 6


level 6

ssh bandit6@bandit.labs.overthewire.org -p 2220
password:DXjZPULLxYr17uwoI01bNLQbtFemEgo7
find -type f -user bandit7 -group bandit6 -size 33c
cat /var/lib/dpkg/info/bandit7.password this shows password for level 7


level 7

ssh bandit7@bandit.labs.overthewire.org -p 2220
password:HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs
grep millionth data.txt the password was next to "millionth"


level 8

ssh bandit8@bandit.labs.overthewire.org -p 2220
password:cvX2JJa4CFALtqS87jk27qwqGhBM9plV
cat data.txt | sort |uniq -u


level 9

ssh bandit9@bandit.labs.overthewire.org -p 2220
password:UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR
string data.txt | grep "=="  this shows string that is after large number of "=="


level 10

ssh bandit10@bandit.labs.overthewire.org -p 2220
password:truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk
base64 -d data.txt


level11

ssh bandit11@bandit.labs.overthewire.org -p 2220
password:IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR
cat data.txt | tr A-Za-z N-Za-MN-za-m


level 12

ssh bandit12@bandit.labs.overthewire.org -p 2220
password:5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu
 mkdir  /tmp/ravi
cp data.txt /tmp/ravi
xxd -r data.txt > data
mv data file.gz
gzip -d file.gz
mv file file.bz
bzip2 -d file.bz2


 level 13
 
 ssh bandit12@bandit.labs.overthewire.org -p 2220
 password:8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL
 ssh -i sshkey.private bandit14@localhost


 level 14

 ssh bandit14@bandit.labs.overthewire.org -p 2220
 password:4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e
 cat /etc/bandit_pass/bandit14


 level 15

 ssh bandit15@bandit.labs.overthewire.org -p 2220
 password:BfMYroe26WYalil77FoDi9qh59eK5xNr
 cat /etc/bandit_pass/bandit15
 ncat | grep ssl localhost 300001


 level 16
 
 cluFn7wTiGryunymYOu4RcffSxQluehd
nmap -A localhost -p 31000-320000
openssl s_client -connect localhost:31790
mkdir /tmp/abc_ssh
cd /tmp/abc_ssh
nano abc.private
chmod 600 /tmp/bandit17.key
ssh bandit17@localhost -i /tmp/bandit17.key
then connected to level 17 without any password


 level 17
 ssh bandit17@bandit.labs.overthewire.org -p 2220
 diff passwords.old passwords.new


 level 18
 ssh bandit18@bandit.labs.overthewire.org -p 2220
 password:kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd
 gives massage ====Byebye !
 Connection to localhost closed.
 ssh bandit18@bandit.labs.overthewire.org -p 2220 cat read me to get password of level 19


 level 19
 ssh bandit19@bandit.labs.overthewire.org -p 2220
 password:IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x
./bandit20-do cat /etc/bandit_pass/bandit20


 level 20
 ssh bandit20@bandit.labs.overthewire.org -p 2220
 password:GbKksEFF4yrVs6il55v6gwY5aVje5f0j
 cat /etc/bandit_pass/bandit20



 
 