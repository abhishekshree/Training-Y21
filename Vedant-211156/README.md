#Training - Y21
LEVEL 0->1 :- I used the "ls" command to look for  any files and found readme file . Then I used "cat readme" command and got the password to enter bandit1 .
password :- boJ9jbbUNNfktd78OOpsqOltutMc3MY1
LEVEL 1->2 :- I used the "ls" command to look for any files and found "-" file . then I used "cat <-" command and got the password to enter bandit2 .
password :- CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9
Level 2->3 :- I used the "ls" command to look for any files and found "spaces in this filename" file , then I used "cat spaces/ in/ this/ filename" command and got the password to enter bandit3
password :- UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK
Level 3->4 :-  I used the "ls" command and found inhere directory . I then used command "cd inhere/ " to move into inhere folder then I used "ls -alts" command to see files and found the hidden file then I used "cat .hidden" to get the password.
password :- pIwrPrtPN36QITSp3EQaw936yaFoFgAB
Level 4->5 :-  I used the "ls" command and found inhere directory . I then used command "cd inhere/ " to move into inhere folder. Then I used "ls -alps" to see at all files . to know which one was human readable I used command "find . type f | xargs file " and then i got ASC11 text in front of file07 then i used command "cat ./-file07" to read the file and i got the password for bandit5 .
password :- koReBOKuIDDepwhWk7jZC0RTdopnAYKh
Level 5->6 :-  I used the "ls" command and found inhere directory . I then used command "cd inhere/ " to move into inhere folder. Then I used "ls -alps" to see at all files . then I used command specifying its features "find . -type f -size 1033c ! -executable" and got  "./maybehere07/.file2 " then i used the cat command to read the file and got password for bandit6
password :- DXjZPULLxYr17uwoI01bNLQbtFemEgo7
Level 6->7:- i used the command "find / -user bandit7 -group bandit6 -size 33c" to get a list of searches and in one of them we find "/var/lib/dpkg/info/bandit7.password" . I then read the file to get the password .
password :- HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs
Level 7->8 :-  i use the command "ls -alps" then i see the data.txt file in the list . i read the data.txt file to get a list of words with passwords in front of them . to find "millionth" word i use command "strings data.txt | grep "millionth" " and in front oh the word i have password for bandit8.
password :- cvX2JJa4CFALtqS87jk27qwqGhBM9plV
Level 8->9 :- i use the command "ls -alps" then i see the data.txt file in the list . i read the data.txt file to get a a lsit of lines but our password is the one that occurs only once . i use "man uniq" command to look into the manual for uniq command , there i see the option "--c" which will help in getting the counts of each line . i use command "sort data.txt | uniq-c" which sorts the data by the count of each line . the line with count 1 is our password . 
password :- UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR
Level 9->10 :- Since our password is after a bunch of "=" signs , I use the command "strings data.txt | grep "="". We get our password beside a bunch of "=" signs .
password :- truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk
Level 10->11 :- we need to decode base64 data in data.txt file . i use the command "man base64" to look into the manual which shows an option "-d" which allows to decode the data. then i use the command "base64 -d data.txt" to decode the data and get the password .
password :- IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR
Level 11->12 :- I read the data.txt file and find "Gur cnffjbeq vf 5Gr8L4qetPEsPk8htqjhRK8XSP6x2RHh" text then i go to cyberchef site and apply ROT13 to it and get password "5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu".
Level 12->13 :- we make a folder under tmp directory mkdir /tmp/vedant then we copy data.txt into vedant folder by command "cp data.txt /tmp/vedant" . we enter the directory by command "cd /tmp/vedant". we use ls to see file data.txt .
i reverse the hexdump of the by command "xxd -r data.txt > data" which saves it into data file . then i use command "file data"
to know the fily type of data ,  we get 
gzip compressed data, was "data2.bin"
we then move data to file.gzip and then we unzip the file with command "-d" and then we use "file file" to see the file type . i got the output as bzip2 compressed data. 
we then move the file to file.bz2 by using "mv file file.bz2" and then we unzip and use "file file" to get the output as
gzip compressed data, was "data4.bin"
we move the file to file.gz by using "mv file file.gz" and then we unzip  and use "file file" to get the output as 
POSIX tar archive (GNU)
we move file to file.tar by using "mv file file.tar" and then to  decompress it i ran used "tar -xf file.tar" and the i use "ls" to see all the files .The command gave us a file named data5.bin, I ran the "file data5.bin" and i got the output 
data5.bin: POSIX tar archive (GNU)
i removed the file.tar and data.txt by using rm command so that only data5.bin is left .
then we move data5.bin to data.tar then i decompressed the file data.tar and got new file data6.bin .
then i used command "file data6.bin" to get file type - data6.bin: bzip2 compressed data .
i moved data6.bin to data.bz2 by using "mv data6.bin data.bz2"and then unzipped the file  to get 
data6.bin: bzip2 compressed data
i moved data to data.tar and the decompressed the file to get data8.bin , after this i changed its extension and unzipped the file to get a new file data which upon running "file data" showed ASC11 text so i read th file to get the password for bandit13.
password :- 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL
Level 13->14 :- I ran "ls" I saw a file named sshkey.private which must be the SSH private key .  I ran "ssh -i sshkey.private bandit14@localhost" to log into the bandit14 .then i get the password by running " cat /etc/bandit_pass/bandit14" which is given in the level goal .
password :- 4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e
Level 14->15 :- I ran "nc localhost 30000" and then I pasted the password for bandit14 and then I received the password for bandit15 
password :- BfMYroe26WYalil77FoDi9qh59eK5xNr
Level 15->16 :- I run man ncat | gret ssl where i find the option "--ssl" which helps to connect to ssl. then we the command 
"ncat --ssl localhost 30001 " which gives us the passowrd for bandit16 .
password :- cluFn7wTiGryunymYOu4RcffSxQluehd
Level 16->17 :- i run the command "nmap localhost -p 31000-32000" to checkfor all ports and it shows ones that ahve a server listening on them .  i get 4 ports with open state . i use command "nc localhost port no." to get passwords for the 4 ports and then i use trial and error to see which port's password works and the port no. that i get is 31790.upon running it i get a RSA
PRIVATE KEY . i then created a folder with the "mkdir -p /tmp/bandit17" command and then copied the key and saved it to a file named bandit17.key then changed the file permissions with the "chmod 600 bandit17.key" command. I ran "ssh -i bandit17.key bandit17@localhost" and I was able to log into the bandit17 profile .

Level 17->18 :- There are 2 files in the homedirectory: passwords.old and passwords.new. I ran "diff password.new passwords.old" and I received the following output:

< kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd
--- 
> BS8bqB1kqkinKJjuxL6k072Qq9NRwQpR
i then tried both the passwords and but only with first one i got "Byebye!" output .
Level 18->19 :- I read the ssh manual to see if I can find a way to login .then i searched for terminal in ssh using "man ssh | grep terminal" then i tried logging in with "ssh -t bandit18@bandit.labs.overthewire.org -p 2220" and then i was able to log in and then i ran ls to see the readme file which upon reading i got the passowrd for bandit19.
password :- IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x
Level 19->20 :-  I ran "ls" and I saw the binary file named "bandit20-do". so i did with the "./bandit20-do" command. The output said "Run a command as another user" . I then ran "./bandit20-do id" which showed bandit20 id information . I run "./bandit20-do cat /etc/bandit_pass/bandit20" since only bandit20 is able to read the file . the result was the password for bandit20
password :- GbKksEFF4yrVs6il55v6gwY5aVje5f0j

