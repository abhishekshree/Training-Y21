# Training-Y21

Level-0:
ssh <username>@<url> -p <port>  for accessing website
Then enter password=bandit0

Level-1;
cat readme to print the contents of the readme file(password)
password=boJ9jbbUNNfktd78OOpsqOltutMc3MY1

level-2;
cat ./<dashed file name> to print the contents of file with dashed filename
password=CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9

level-3;
cat 'file name'
to print the contents of the file name containing spaces, write the file name within the inverted commas
password=UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK

level-4;
cd inhere to enter inhere directory
ls -a to list all files including hidden files(we come to know that hidden file name is .hidden)
cat ./.hidden to print the password=pIwrPrtPN36QITSp3EQaw936yaFoFgAB

level-5;
cat ./-file0n where n varies from 1 to 9
only in -file07, we get all the characters which are human readable
password=koReBOKuIDDepwhWk7jZC0RTdopnAYKh

level-6;
find -size 1033c to find the file of size=1033 bytes.
password=DXjZPULLxYr17uwoI01bNLQbtFemEgo7

level-7;
we dont know the location, hence we will first go to root directory using cd /
find -user bandit7 -group bandit6 -size 33c 2>/dev/null command to find the file owned by user bandit7, group bandit6, of size 33 bytes and 2>/dev/null command to ignore the permission denied messages.
password=HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs

level-8;
grep 'millionth' data.txt
to print the line which start with the string millionth in the file data.txt
password=cvX2JJa4CFALtqS87jk27qwqGhBM9plV

level-9;
sort data.txt | uniq -c
to sort the file data.txt and print how many times a line is repeated
password=UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR

level-10;
strings data.txt | grep '='
strings data.txt to print the strings of printable characters in the file
grep '=' to print the lines matching the pattern'='
password=truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk

level-11;
cat data.txt | base64 -d
print the contents of file data.txt after decoding it(-d) from base64.
Password=IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR

level-12;
cat data.txt | tr 'A-Za-z' 'N-ZA-Mn-za-m'
tr 'string1' 'string2' command translates string1 into string 2.
password=5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu

level-13;
made a directory mohak123 at /tmp
then copied data.txt to mohak123
renamed it using mv
then decoded from hexdump using xxd -r(r for reverse) and printed its contents in file data
then usinf file command, got its type and saved its name accordingly. Then unzipped it using gzip -d for gz file, bzip2 for bz -d file and tar -xf for tar file(-d is for decoding).
finally did this until we get an ASCII text file and then printed the ascii text file.
password=8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL

level-14;
ssh -i <file containing key> <username>@localhost 
then we enter as user bandit14 and then print the file given
password=4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e

level-15;
echo '4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e' | nc localhost 30000
means print '4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e' on the localhost on port 30000
password=BfMYroe26WYalil77FoDi9qh59eK5xNr

level-16;
echo 'BfMYroe26WYalil77FoDi9qh59eK5xNr' | openssl s_clie
nt -connect localhost:30001 -ign_eof
print password on port 30001 on localhost by connecting through ssl
-ign_eof to ensure connection is not ended when end of file is reached.
password=cluFn7wTiGryunymYOu4RcffSxQluehd

level-17;
nmap -p 31000 32000 local host to know the open servers in this range
echo 'cluFn7wTiGryunymYOu4RcffSxQluehd' | openssl s_client -connect localhost:<port number> -quiet to know the rever is responsive or not
Finally port 31790 gave the private key.
Then made a file and copied the key into that and changed the permissions using chmod.
ssh -i sshkey.private bandit17@localhost to connect to the local host as a bandit17 user.
cat /etc/bandit_pass/bandit17 to get the password for next level.
password=xLYVMN9WE5zQ5vHacb0sZEVqbrp7nBTn

level-18;
diff password.new password.old to get the difference between the files.
password=kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd

level-19;
ssh bandit18@bandit.labs.overthewire.org -p 2220 'cat ~/readme'
if we dont write 'cat~/readme' the connection gets closed without any result. So, we add the command 'cat ~/readme' which executes before the connection gets closed and we get the password. 
password=IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x


level-20;
./bandit20-do cat /etc/bandit_pass/bandit20 to print the contents as a bandit20 user.
to acess the elements as another id, use ./(id)-do and then use commands
password=GbKksEFF4yrVs6il55v6gwY5aVje5f0j


