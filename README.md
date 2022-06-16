**LEVEL 0**
>login using ssh
ssh bandit0@bandit.labs.overthewire.org -p 2220
>we are now logged in the level 0
>We are given that password is in the file readme so we open it
>cat command is used to open files with the syntax depending on the name of file
cat readme
*/ password : boJ9jbbUNNfktd78OOpsqOltutMc3MY1/*
> we get out to log in the next bandit
exit

**LEVEL 1**
ssh bandit1@bandit.labs.overthewire.org -p 2220
>we check the files by using the ls command which shows non hidden files
ls
> we get output as - hence we open it now to open this kind of named file
> we use cat ./-{rest of file name}
cat ./-
*/ password : CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9/*
exit


**LEVEL 2**
ssh bandit2@bandit.labs.overthewire.org -p 2220
>file name is given as "spaces in this filename"
> syntax for this is cat "{file name}"
cat "spaces in this filename"
*/password : UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK /*
exit

**LEVEL 3**
ssh bandit3@bandit.labs.overthewire.org -p 2220
>we are given that file is in hidden 
>hidden files start with the keyword . eg : .mynameistarun
>to see the presence we use ls -a
ls
> we see that there is a folder inhere
>cd command takes us into it
cd inhere
ls -a
> we see that here is the hidden file .hidden
cat .hidden
*/password : pIwrPrtPN36QITSp3EQaw936yaFoFgAB /*
exit

**LEVEL 4**
ssh bandit4@bandit.labs.overthewire.org -p 2220
>here also it is stored in the inhere folder
cd inhere
ls
> we can either go through each file and stop when we find an ASCII test
> I found this command file ./-file0*  which tells you which file has what kind of text
file ./-file0*
>It shows that only -file07 has ascii test so open it
cat ./-file07
*/password : koReBOKuIDDepwhWk7jZC0RTdopnAYKh /*
exit

**LEVEL 5**
ssh bandit5@bandit.labs.overthewire.org -p 2220
>password somewhere in the inhere directory
cd inhere
> given properties of the file so we use the find command where we can specify the demands of the file attributes
>here it is 1033 c non executable and human readable
find type -f {for it being a type of file} ! -executable {FALSE executable} size 1033c
> we get the address as the output here its ./maybehere07/.file2
>open it after going to the maybehere07
cd maybehere07
cat .file2
*/ password : DXjZPULLxYr17uwoI01bNLQbtFemEgo7 /*
exit

**LEVEL 6**
ssh bandit6@bandit.labs.overthewire.org -p 2220
> now we are given a user of the file as bandit7 and group as bandit6
> size is 33 bytes
find / -user bandit7 -group bandit6 -size 33c
>we get a bizzare output but there is a line of password as /var/lib/dpkg/info/bandit7.password
 cat /var/lib/dpkg/info/bandit7.password
 */ password : HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs /*

exit

**LEVEL 7**
ssh bandit7@bandit.labs.overthewire.org -p 2220
> here we are given that the password is next to the word millionth
>so we use the command grep that finds the line by the keyword that we provide it
grep millionth data.txt
*/password : cvX2JJa4CFALtqS87jk27qwqGhBM9plV /*
exit


**LEVEL 8**
ssh bandit8@bandit.labs.overthewire.org -p 2220
>here we are given that the line of password occurs only once
> we use uniq -u which removes all the adjacent lines if they are repeated
>to get them to be in adjacent manner we sort them out first
sort data.txt | uniq -u
*/ password : UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR /*
exit


**LEVEL 9**
ssh bandit9@bandit.labs.overthewire.org -p 2220
>here we are given that the password is after multiple '=' characters
>we use the word grep ^{character} to filter out the lines
>but we have to filter out the strings also as there are non readable texts also
strings data.txt | grep ===
*/ password : truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk /*
exit



**LEVEL 10**
ssh bandit10@bandit.labs.overthewire.org -p 2220
>here the data is encoded in base64 which is basically converting into ascii then into binary then taking every 6 digits and converting into numbers then base64 table
>to decode back we use base64 -d command
base64 -d data.txt
*/ password : IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR /*
exit


**LEVEL 11**
ssh bandit11@bandit.labs.overthewire.org -p 2220
> here we are given that it is rotates by 13 
>we rotate it again by 13 as it will give us original one
cat data.txt | tr '[A-Za-z]' '[N-ZA-Mn-za-m]'
*/ password : 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu /*
exit


**LEVEL 12**
ssh bandit12@bandit.labs.overthewire.org -p 2220
>here the file is a hexdump and is compressed many times
>we can view the file if it was just hexdump but to decompress it we have to save the hexdump that we can do by making another file so that we can edit it
>to create we use the hint mkdir /tmp/{name you want i used rungo}
mkdir /tmp/rungo
>we copy data.txt
cp data.txt /tmp/rungo
cd /tmp/rungo
>we reverse the hexdump using xxd -r {file} {file where we want it to be placed}
xxd -r data.txt ans    {i name it ans}
>we repeatedly check the type of file and unzip it in required format
> gzip -> gz named then gzip -d {file}
> bzip2 -> bz2 named then bzip -d {file}
> tar archive -> extract it -> tar named then tar -xf {file}
mv ans ans.gz
gzip -d ans.gz
file ans
mv ans ans.bz2
bzip2 -d ans.bz2
file ans
mv ans ans.gz
gzip -d ans.gz
file ans
mv ans ans.tar
tar -xf ans.tar
file data5.bin
mv data5.bin data5.tar
tar -xf data5.tar
file data6.bin
mv data6.bin data6.tar
tar -xf data6.tar
file data8.bin
mv data8.bin data8.gz
gzip -d data8.gz
file data8
cat data8
>we finally retrieve the passcode for it
*/ password : 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL /*
exit


**LEVEL 13**
ssh bandit13@bandit.labs.overthewire.org -p 2220
>here we are told that next level can be opened by bandit14 on host as localhost
>hence we use bandit14@localhost as the id to access the ssh private key given to us
>we use the ssh -i then sshkey.private
ssh -i sshkey.private bandit14@localhost
cd /etc/bandit_pass/bandit14
*/ password : 4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e /*
exit


**LEVEL 14**
ssh bandit14@bandit.labs.overthewire.org -p 2220
>we are to access a port 30000 on localhost
> we use the openssl and s_client
>s_client helps us to connect to a port
>the command for s_client includes openssl in start
openssl s_client -connect localhost:30000
>we then submit the password as told and get the credentials
*/ password : BfMYroe26WYalil77FoDi9qh59eK5xNr /*
exit


**LEVEL 15**
ssh bandit15@bandit.labs.overthewire.org -p 2220
>here we are to do the same 
*/ password : cluFn7wTiGryunymYOu4RcffSxQluehd /*
exit



**LEVEL 16**
ssh bandit16@bandit.labs.overthewire.org -p 2220
>we have to see which ports are open first
>we use the command nmap as nmap -p{to search for required ports} {ports} {hostnae}
nmap -p 31000-32000 localhost
>we get a few port's details we check out each port using the openssl s_client command
>we find that only one port 31790 is SSL YES and we also get a private RSA key
>we then do the following to store it and use it
mkdir /tmp/hello
cd /tmp/hello
nano sshkey.private
>we enter the private key and press the ctrl + X to exit it
chmod 500 sshkey.private
ssh -i ./sshkey.private bandit17@localhost
>we are logged in the 17th level automatically



**LEVEL 17**
ls
>we have two files and one unique line i passwords.new is the password
>we use the diff command
diff passwords.new passwords.old
>the first line is the line in passwords.new that is not in passwords.old
*/ password : kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd /*
exit
exit


**LEVEL 18**
ssh bandit18@bandit.labs.overthewire.org -p 2220
>we fill password but we are kicked out as it was said
>I searched and came across this command to log you in bash.rc problem
>ssh -t username@hostname /bin/sh
ssh -t bandit18@bandit.labs.overthewire.org -p 2220 /bin/sh
>this logged me in then i filled in the password and bam! i was in 18th level
ls
cat readme
*/ password : IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x /*
exit


**LEVEL 19**
ssh bandit19@bandit.labs.overthewire.org -p 2220
>here we have to work withbandit20-do
ls
>we see that it is red highlighted that implies that we have to work using its name
./bandit20-do
>we get a hint that we have to use ./bandit20-do {id}
./bandit20-do cat /etc/bandit_pass/
*/ password : GbKksEFF4yrVs6il55v6gwY5aVje5f0j /*
exit


**LEVEL 20**
ssh bandit20@bandit.labs.overthewire.org -p 2220
