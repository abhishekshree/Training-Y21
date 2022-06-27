# Training-Y21
Level 0
ssh bandit0@bandit.labs.overthewire.org -p 2220 to access the website
password= bandit0

Level 1
ls for locating readme file
cat readme to read the contents of the readme file
password=boJ9jbbUNNfktd78OOpsqOltutMc3MY1
exit to exit from that website

LEVEL - 2
enter password boJ9jbbUNNfktd78OOpsqOltutMc3MY1
ls a dashed file is displayed
cat ./- to display the contents of the dashed file
password =CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9
exit

LEVEL 3
ls - there are spaces in this filename
cat 'spaces in this filename' to display the contents of the file having spaces in its name
password=UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK
exit

LEVEL-4
ls inhere file is shown
cd inhere to go to the inhere file
ls -a to display the hidden files in inhere
.hidden is the hidden file
cat .hidden to display the contents of the hidden file
password =pIwrPrtPN36QITSp3EQaw936yaFoFgAB

LEVEL 5
ls inhere is shown
cd inhere to move into inhere 
ls to print the contents of inhere
cat ./-file07 to print the contents of that file
password =koReBOKuIDDepwhWk7jZC0RTdopnAYKh

LEVEL 6
ls inhere directory is there
cd inhere to move into inhere
find -size 1033c to find a 1033 bytes size file 
./maybehere07/.file2 is shown
cd maybehere07 to get into maybehere07
cat .file2 to get the hidden file
password=DXjZPULLxYr17uwoI01bNLQbtFemEgo7

LEVEL 7
find / -user bandit7 -group bandit6 -size 33c 2>/dev/null to find the file owned by user bandit7 owned by group bandit6 33 bytes in size
/var/lib/dpkg/info/bandit7.password is shown
cat /var/lib/dpkg/info/bandit7.password to print password
password= HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs

LEVEL 8
ls  data.txt is there
grep millionth data.txt to search the specific word millionth in the file data.txt
password=cvX2JJa4CFALtqS87jk27qwqGhBM9plV

LEVEL 9
ls data.txt is shown
sort data.txt | uniq -u to print the line which occurs only once in the data.txt file
password=UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR

LEVEL 10
ls data.txt is there
strings data.txt | grep -E "=+" we use strings as it is a binary file and recursively repeated sequence of =
password=truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk

LEVEL 11
ls data.txt is there
cat data.txt | base64 -d to encode a base64 data as normal cat won't work
password=IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR

LEVEL 12
ls data.txt is there
cat data.txt | tr 'A-Za-z' 'N-ZA-Mn-za-m' to rotate by 13 alphabets like A becomes N
password= 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu

LEVEL 13
first a directory kriti123 in /tmp 
now data.txt is copied to kriti123
mv to rename it
xxd -r for decoding it from hexdump
Print its contents 
file to get the type and saving the name
gzip -d to unzip the file gz
bzip2 to unzip the file bz -d
tar -xf for tar file
now the ascii text file is printed
password=8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL

LEVEL 14
ssh -i <file containing key> <username>@localhost to get into this 
display the contents of the file
password=BfMYroe26WYalil77FoDi9qh59eK5xNr

LEVEL 15
echo '4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e' | nc localhost 30000 to print on the localhost of prt 30000
password =BfMYroe26WYalil77FoDi9qh59eK5xNr

LEVEL 16
echo 'BfMYroe26WYalil77FoDi9qh59eK5xNr' | openssl s_client -connect localhost:30001 -ign_eof to display the password on localhost of the port 30001
password=cluFn7wTiGryunymYOu4RcffSxQluehd

LEVEL 17
nmap -p 31000 32000 local host FOR open servers
echo 'cluFn7wTiGryunymYOu4RcffSxQluehd' | openssl s_client -connect localhost:<port number> -quiet to check responsive nature of server
port 31790 gives key.
Copied the file to another location and used chmod.
then ssh -i sshkey.private bandit17@localhost
cat /etc/bandit_pass/bandit17 
password=xLYVMN9WE5zQ5vHacb0sZEVqbrp7nBTn

level-18;
diff password.new password.old for difference between 2 files
password=kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd

level-19;
ssh bandit18@bandit.labs.overthewire.org -p 2220 'cat ~/readme'
'cat ~/readme' so that it implements before the connection ends.
password=IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x


level-20;
./bandit20-do cat /etc/bandit_pass/bandit20 to work as a bandit20 user.
password=GbKksEFF4yrVs6il55v6gwY5aVje5f0j
