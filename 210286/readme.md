#level 0

connected to the server using ssh username@host -p port_number command
used cat to get the password to level1

boJ9jbbUNNfktd78OOpsqOltutMc3MY1

#level1

used ls to see - file and followed up with cat ./- to open - which gave me the password for level 2

CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9

#level 2

used "" to represent the entire string as one filename andd thus used cat "spaces in this filename" to read this file

UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK

#level 3

used the 'cd' command to go inside the inhere folder followed by ls -a to view all the files including the hidden ones
finally used cat .hidden to get the password for the next level!

pIwrPrtPN36QITSp3EQaw936yaFoFgAB

#level 4

used the 'cd' command to go into the inhere folder followed by ls to get all the filenames and checked the files for readable content with cd ./-filename also i found out later that find . -type f -exec grep -I could have been used

koReBOKuIDDepwhWk7jZC0RTdopnAYKhss

#level 5

used the cd command to go into the inhere directory
Finally "find . -type f -size 1033c !executable -exec file {} + | grep ASCII" was used

DXjZPULLxYr17uwoI01bNLQbtFemEgo7

#level 6

used the "find / -group -user -size" command to get the required file the only one with permission contained the password once i had the location i used "cat location" to get the pass

HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs

#level 7

used the "grep string_to_find file_to_search" with the proper arguments to get the password

cvX2JJa4CFALtqS87jk27qwqGhBM9plV

#level 8

used the "sort filename | uniq -u" command 

UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR

#level 9

"strings filename.txt" was used to extract all the text from the binary file and then the password was obtained

truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk

#level 10

"base64 -d filename.extension" was used to decode the base64 data to ASCII text
here -d is the flag to decode the data

IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR

#level 11

used the rt command to map the respective letters to their rotated letters then used cat echo filname.extension to pass on the file and get the required output.

5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu

#level 12

I logged into the level using ssh bandit12 command and create a new directore i /tmp/name according to the instructions. Now i used the cp commad to copy the data.txt file to the new directory created the exact command is "cp data.txt /tmp/name". Now i used the ssd -r command to reverse the hexdump and stored it in a new file(say f2).  I used file f2 to find the type of the file and i found that it is a gzip file thus i used zcat command to decompress the file and stored the data in another new file(say f3). After using the file command on f3 i founnd out that it is a bzip2 type of file thus i decommpressed it using bzcat and stored the data in a new file(say f4). Again use the file command to find that f4 is a gzip file thus again use zcat to store the new data in a new file(say f5). Now the file command gives us the fact that f5 is a POSIX tar file thus use the tar command to decompress it and store it in a new file(say f6). fg is the same type as f5 thus again run the same command to get the data stored in yet another new file(say f7). Now f7 is of type bzip2 thus use bzcat to decompress it and store the result in another new file(say f8). Now file tells us f8 is a gzip file thus use zcat to decompress and store the decompressed contents to yet another new file(say f9). Finally the file command on f9 lets us know that f9 is  a ASCII text file and thus we have obtained our password for the next level. Finally run "cat f9" which gives out our password for the next level!

8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL

#level 13


used ssh to login to bandit13, after the usage of the ls command found a sshkey.private file which had a rsa private key.
used the ssh -i command at bandit14@localhost to access the bandit14 user. ssh -i allowed to access using a rsa private key and sshkey.private was passed on to ssh -i as authentication.

4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e

#level 14

was already pre logged to bandit14 via level13 so now np localhost 30000 was used to connect to port 30000 after which i put in the pass for the current level to obtain the pass for the next level

BfMYroe26WYalil77FoDi9qh59eK5xNr

#level 15

connected to bandit 15 using ssh bandit15 used the openssl command to connect to localhost:30001 and gave in the current level password to get the password to the next level

cluFn7wTiGryunymYOu4RcffSxQluehd

#level 16

connected using ssh at bandit16 using the password obtained previously. Now nmap was used in the -A moded to scan all ports from 31000 to 32000 and finally port 31790 was found to be open and using ssl now openssl -connect was used to connect to localhost:31790 and after passing the current password an nrsa private key was obtained for the next level.

#level17

created a file pass.key using touch pass.key in the /tmp location then used nano command to copy and save the key to the pass.key file and then used the chmod 700 command to encrypt the key and finally used the ssh -i to connect to bandit17 at localhost to login to bandit17 by passing the pass.key RSA private key.

#level 18
 
kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd

#level 19

I used the standard login command with the -T attribute to login to the system

IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x

#level 20

I logged in using the standard ssh command. After I ran ls to find a bandit20-do following this ran it using the ./ command there was a hint to run the file as another user thus I used the ./ command to exucute followed by the cat /etc/bandit_pass/bandit20

GbKksEFF4yrVs6il55v6gwY5aVje5f0j










