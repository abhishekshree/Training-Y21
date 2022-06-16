# ssh bandit0@bandit.labs.overthewire.org -p 2220
ls- al to show all the files.
cat readme to read the contents of the file
boJ9jbbUNNfktd78OOpsqOltutMc3MY1

# ssh bandit1@bandit.labs.overthewire.org -p 2220
ls -al ls- al to show all the files.
The passowrd was in a file named -
cat <-
CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9

# ssh bandit2@bandit.labs.overthewire.org -p 2220
ls -al
cat "spaces in this filename"
UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK

# ssh bandit3@bandit.labs.overthewire.org -p 2220
ls -al
The password is stored in a hidden file in the inhere directory.
cd inhere/
ls -al
cat ./.hidden
pIwrPrtPN36QITSp3EQaw936yaFoFgAB

# ssh bandit4@bandit.labs.overthewire.org -p 2220
The password is stored in file inside the inhere folder, most of the files in the directory as written in binary and only one of them has human readable text.
cd inhere/
ls -al
find . -type f | xargs file     //to show the files with the file type
cat ./-file07       //file07 was ASCII text
koReBOKuIDDepwhWk7jZC0RTdopnAYKh


# ssh bandit5@bandit.labs.overthewire.org -p 2220
The password for the next level is stored in a file somewhere under the inhere directory and has all of the following properties:human-readable,1033 bytes in size,not executable
cd inhere/
find . -type f -size 1033c 
The result was ./maybehere07/.file2
cat ./maybehere07/.file2
DXjZPULLxYr17uwoI01bNLQbtFemEgo7

# ssh bandit6@bandit.labs.overthewire.org -p 2220
The password for the next level is stored somewhere on the server and has all of the following properties:owned by user bandit7,owned by group bandit6,33 bytes in size
find / -type f -user bandit7 -group bandit6 -size 33c
/var/lib/dpkg/info/bandit7.password was having the password
bandit6@bandit:~$ cat /var/lib/dpkg/info/bandit7.password
HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs

# ssh bandit7@bandit.labs.overthewire.org -p 2220
The password for the next level was stored in the file data.txt next to the word millionth.
cat data.txt | grep millionth
millionth cvX2JJa4CFALtqS87jk27qwqGhBM9plV

# ssh bandit8@bandit.labs.overthewire.org -p 2220
The password for the next level was stored in the file data.txt and is the only line of text that occurs only once
sort data.txt | uniq -u     //sort the lines alphabetically and removes all duplicates from the output.
UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR

# ssh bandit9@bandit.labs.overthewire.org -p 2220
The password for the next level was stored in the file data.txt in one of the few human-readable strings, preceded by several ‘=’ characters.
cat data.txt | strings | grep ^=
This returned 3 strings:
========== password
========== ism
========== truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk
The password is truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk

# ssh bandit10@bandit.labs.overthewire.org -p 2220
The password for the next level was stored in the file data.txt, which contains base64 encoded data
cat data.txt | base64 --decode      //decodes the fie
IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR

# ssh bandit11@bandit.labs.overthewire.org -p 2220
The password for the next level was stored in the file data.txt, where all lowercase (a-z) and uppercase (A-Z) letters have been rotated by 13 positions
cat data.txt | tr '[A-Za-z]' '[N-ZA-Mn-za-m]'       //replaces every letter by the letter 13 positions ahead
5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu

# ssh bandit12@bandit.labs.overthewire.org -p 2220
The password for the next level was stored in the file data.txt, which is a hexdump of a file that has been repeatedly compressed.
