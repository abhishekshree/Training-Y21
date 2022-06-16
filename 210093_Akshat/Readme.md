LEVEL 0
command-
ssh bandit0@bandit.labs.overthewire.org -p 2220
ssh-login to server,learnt from internet
password=boJ9jbbUNNfktd78OOpsqOltutMc3MY1

LEVEL 1
command-
ls 
cat readme
ssh bandit1@localhost
password=CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9

ls-get all files in your current directory
cd-to change current directory
file-eg. file-has ASCII text,this is used for type of file in linux
cat-to know contents of file
find-to search for a file, eg. input=find- output=-
du-used to estimate the file space, eg. du/home/akshat/test

LEVEL 2
command-
ls
cat ./-
ssh bandit2@localhost
password=UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK

To read - type of file we have to use ./-

LEVEL 3
command-
ls
cat spaces\ in\ this\ filename
ssh bandit3@localhost
password=pIwrPrtPN36QITSp3EQaw936yaFoFgAB
 
Level 4
command-
ls -a
cd inhere
cat .hidden
password=koReBOKuIDDepwhWk7jZC0RTdopnAYKh

to get hidden file we use ls -a command , then we have to go to the directory in which file is stored 

Level 5
command-
ls -l
cd inhere
file ./-*
cat ./-file07
password=DXjZPULLxYr17uwoI01bNLQbtFemEgo7

ls -l shows human readable files and to get know data type of file we use file ./* and read ascii text for password.ss

Level 6
command-
ls
cd inhere
file ./*
find -type f -size 1033c
cd ./maybehere07
ls -a
cat .file2
password=HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs
 
first we have to find the file which has size 1033c then we go in directory to read it.

Level 7
command-
find / -user bandit7 -group bandit6 -size 33c
cat /var/lib/dpkg/info/bandit7.password
password=cvX2JJa4CFALtqS87jk27qwqGhBM9plV

It is informed that the password for the next level is stored somewhere on the server. So, finding the file over the server would be a lot trickier if we are using ls. So, we will try to widen our scope of search using the find command. We are hinted that the user of the file is bandit7 and it is a part of group bandit 6. We will add this information as parameters in the find command.

Level 8
command -
ls
cat data.txt
cat data.txt | grep millionth
password=UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR
 
first we read the file, we are given the password is in neighbourhood of millionth so grep command is used for searching a particular data in the file

Level 9
command-
cat data.txt | sort | uniq -u
ssh bandit9@localhost
password=truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk

I learn these commands on internet.
 
Level 10
command-
cat data.txt
strings data.txt | grep =
password=IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR

here if we use cat then we get error-(Binary file (standard input) matches) , If we read data as strings then every special charcter or keyword which has specific meaning to the compiler will be treated as string.

Level 11
command-
cat data.txt | base64 --decode
password=5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu

base64 command is used to encode and decode data,useful in encrypting data. base64 -e for encoding and base64 -d for decoding the data.

Level 12
command-
cat data.txt | tr a-zA-Z n-za-mN-ZA-M
password=8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL

tr command is used to translate characters from set to other,
abhishek@linuxhandbook:~$ cat sample.txt
This is my life
and my file
Now if you want to convert the text into all capital letters, here’s what you need to do:

cat sample.txt | tr 'a-z' 'A-Z'
we can emit '' also.

Level 13
command-
cat data.txt
mkdir /tmp/pavan
cp data.txt /tmp/pavan
cd /tmp/pavan
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

This level has so many commands, it took 2 hours to understand, all has been learnt from its solution otherwise it becomes impossible to do in limited time frame.

Level 14
command-
ssh bandit14@localhost -i sshkey.private 
password=BfMYroe26WYalil77FoDi9qh59eK5xNr

 we are given an ssh private key. So, to get to the next level we are going to use that ssh private key. Firstly, let’s find that private key using the ls command. We found the private key. Now we will use it to get an ssh, here we use -i for going to specific server location.

Level 15
command-
cat /etc/bandit_pass/bandit14
enter this password=BfMYroe26WYalil77FoDi9qh59eK5xNr
telnet localhost 30000
password=cluFn7wTiGryunymYOu4RcffSxQluehd

telnet command is used to submit the password on the server.The telnet command is used to communicate with another host using the TELNET protocol.

Level 16
command-
openssl s_client -connect localhost:30001 -ign_eof
then enter previous password, job done mission accomplished

 We use the openssl command with parameters like s_client that implements that we are the connecting as the client using the hostname localhost at port 30001. We use -ign_eof to inhibit shutting the connection when the end of file is reached in the input.

Level 17
command-
nmap -A localhost -p 31000-32000
openssl s_client -connect localhost:31790
mkdir /tmp/akshat_ssh
cd /tmp/akshat_ssh
nano akshat.private
chmod 600 akshat.private
ssh bandit17@localhost -i akshat.private
 
we are using the nano editor to create the private key.After running the nano command, we will be prompted to press the Enter key to continue. On doing that the private key will be opened to edit using nano. Now we will paste the RSA key we found earlier. Now to exit we will press Ctrl and x keys simultaneously. There would be a prompt asking us to save the updates. We will press ‘y’ followed by this, nano will ask us if we want to rename the file.e will use the chmod command to apply the permissions equivalent to 600.

Level 18
command-
ls
diff passwords.old passwords.new
ssh bandit18@localhost
ssh -T bandit18@localhost
 
ls
cat readme

 We will use the diff command to find password.We will use the -t parameter to disable the pseudo -tty allocation. As this is making our session vulnerable to get closed.This time we got a shell, it may be not visible but it is there. We can run commands here. First, let’s try the ls command. This gives us the readme file. Upon reading that file, we get what seems like credentials for the next level. 

Level 20
command-
ls
./bandit20-do
./bandit20-do cat /etc/bandit_pass/bandit20
ssh bandit20@localhost

we start with ls command to see what we got this time. We have a file that seems like a script. We tried to run to see the working of the script. We are shown that the script runs a command as another user. Now we were informed that the password is stored at /etc/bandit_pass/. So, we run the script with the cat command to read the password for the next level. 
 


