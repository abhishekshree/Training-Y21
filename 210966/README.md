# Bandit Levels 

## level 0
```
$ ssh bandit0@bandit.labs.overthewire.org -p2220
$ bandit0
$ ls
$ cat readme
$ exit
$ ssh bandit1@bandit.labs.overthewire.org -p2220
$ boJ9jbbUNNfktd78OOpsqOltutMc3MY1
```
- installed ubuntu and setup wsl
- connected to bandit surver using ssh command
- found passward in readme file
## level 1
```
$ ls
$ cat ./-
$ exit
$ ssh bandit2@bandit.labs.overthewire.org -p2220
$ CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9
```
- connected to bandit1
- used cat command in different way for special character
## level 2
```
$ ls
$ cat "spaces in this filename"
$ exit
$ ssh bandit3@bandit.labs.overthewire.org -p2220
$ UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK
```
- connected bandit2
- used cat command for files  have space in between
## level 3
```
$ ls 
$ ls -la
$ cat inhere/
$ cd inhere
$ cat .hidden
$ exit
$ ssh bandit4@bandit.labs.overthewire.org -p2220
$ pIwrPrtPN36QITSp3EQaw936yaFoFgAB
```
- connected bandit3
- looked into folder inhere and opened .hidden file
## level 4
```
$ ls -la
$ cd inhere
$ ls
$ find . -type f | xargs file
$ cat ./-file07
$ exit
$ ssh bandit5@bandit.labs.overthewire.org -p2220
$ koReBOKuIDDepwhWk7jZC0RTdopnAYKh
```
- connected bandit4
- look into folder inhere  and applied find command for finding file
## level 5
```
$ ls -la
$ cd inhere
$ ls
$ find . -type f -size 1033c 
$ cd ./maybehere07
$ ls
$ cat ./-file2
$ exit
$ ssh bandit6@bandit.labs.overthewire.org -p2220
$ DXjZPULLxYr17uwoI01bNLQbtFemEgo7
```
- connected bandit5
- look into folder inhere and find command used such that to find file  of size 1033
## level 6
```
$ ls
$ find / -type f -user bandit7 -group bandit6 -size 33c
$ cat /var/lib/dpkg/info/bandit7.password
$ exit
$ ssh bandit7@bandit.labs.overthewire.org -p2220
$ HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs
```
- connected bandit6
- use of find command such that user is bandit7 , group is bandit6 and size is 33 
## level 7
```
$ ls -la
$ cat data.txt
$ strings data.txt | grep "millionth"
$ exit
$ ssh bandit8@bandit.labs.overthewire.org -p2220
$ cvX2JJa4CFALtqS87jk27qwqGhBM9plV
```
- connected bandit7 
- applied strings to find string "millionth"
## level 8
```
$ ls -la
$ cat data.txt
$ sort data.txt | uniq -c
$ exit 
$ ssh bandit9@bandit.labs.overthewire.org -p2220
$ UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR
```
- connected bandit8
- used sort and uniq command to find unique string
## level 9
```
$ ls -la
$ cat data.txt
$ strings data.txt | grep "="
$ exit
$ ssh bandit10@bandit.labs.overthewire.org -p2220
$ truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk
```
- connected bandit9 
- use of string command to find "=" in daata.txt file
## level 10
```
$ ls -la
$ cat data.txt
$ base64 -d data.txt
$ exit 
$ ssh bandit11@bandit.labs.overthewire.org -p2220
$ IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR
```
- connected bandit10
- use of base64 command to decode the data.txt file
## level 11
```
$ ls -la
$ cat data.txt
$ tr 'A-Za-z' 'N-ZA-Mn-za-m' <<< "Gur cnffjbeq vf 5Gr8L4qetPEsPk8htqjhRK8XSP6x2RHh"
$ exit
$ ssh bandit12@bandit.labs.overthewire.org -p2220
$ 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu
```
- connected bandit11
- us of tr command to rotate data.txt file by 13
## level 12
```
$ ls -la
$ cat data.txt
$ mkdir /tmp/build
$ cp data.txt /tmp/build/new.txt
$ cd /tmp/build
$ xxd -r new.txt > new1
$ ls 
$ mv new1 new1.gz
$ gzip -d new1.gz
$ ls
$ file new1
$ mv new1 new1.bz2
$ bzip2 -d new1.bz2
$ file new1
$ mv new1 new1.gz
$ gzip -d new1.gz
$ file new1
$ mv new1 new1.tar
$ tar xf new1.tar
$ ls
$ file new5.bin
$ rm new1.tar
$ rm new.txt
$ ls
$ file new5.bin
$ mv new5.bin new.tar
$ tar xf new.tar
$ ls
$ file new6.bin
$ mv data6.bin new.bz2
$ bzip2 -d new.bz2
$ ls
$ file new
$ mv new2 new.tar
$ tar xf new.tar
$ ls
$ file new8.bin
$ mv new8.bin new.gz
$ gzip -d new.gz
$ ls
$ file new
$ cat new
$ exit
$ ssh bandit13@bandit.labs.overthewire.org -p2220
$ 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL
```
- firstly creating a folder build in /tmp and copying data.txt in build folder
- then decompressing the file according to format specified in file command and repeat it again untill we get password
## level 13
```
$ ls 
$ ssh -i sshkey.private bandit14@localhost
```
- use ssh -i to connect to bandit14 through sshkey.private
## level 14
```
$ cat /etc/bandit_pass/bandit14 
$ nc localhost 30000
$ 4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e
$ exit
$ exit
$ ssh bandit15@bandit.labs.overthewire.org -p2220
$ BfMYroe26WYalil77FoDi9qh59eK5xNr
```
- use nc command to port to 30000
## level 15
```
$ cat /etc/bandit_pass/bandit15
$ ncat --ssl localhost 30001
$ BfMYroe26WYalil77FoDi9qh59eK5xNr
$ exit
$ ssh bandit16@bandit.labs.overthewire.org -p2220
$ cluFn7wTiGryunymYOu4RcffSxQluehd
```
- used cat command to get coded password 
- then used ncat commmand to connect to local host 30001 and get the required password
## level 16
```
$ cat /etc/bandit_pass/bandit16
$ nmap localhost -p  31000 32000
$ ncat --ssl localhost 31790
$ cluFn7wTiGryunymYOu4RcffSxQluehd
$ exit
$ vim pass
$ MIIEogIBAAKCAQEAvmOkuifmMg6HL2YPIOjon6iWfbp7c3jx34YkYWqUH57SUdyJ
imZzeyGC0gtZPGujUSxiJSWI/oTqexh+cAMTSMlOJf7+BrJObArnxd9Y7YT2bRPQ
Ja6Lzb558YW3FZl87ORiO+rW4LCDCNd2lUvLE/GL2GWyuKN0K5iCd5TbtJzEkQTu
DSt2mcNn4rhAL+JFr56o4T6z8WWAW18BR6yGrMq7Q/kALHYW3OekePQAzL0VUYbW
JGTi65CxbCnzc/w4+mqQyvmzpWtMAzJTzAzQxNbkR2MBGySxDLrjg0LWN6sK7wNX
x0YVztz/zbIkPjfkU1jHS+9EbVNj+D1XFOJuaQIDAQABAoIBABagpxpM1aoLWfvD
KHcj10nqcoBc4oE11aFYQwik7xfW+24pRNuDE6SFthOar69jp5RlLwD1NhPx3iBl
J9nOM8OJ0VToum43UOS8YxF8WwhXriYGnc1sskbwpXOUDc9uX4+UESzH22P29ovd
d8WErY0gPxun8pbJLmxkAtWNhpMvfe0050vk9TL5wqbu9AlbssgTcCXkMQnPw9nC
YNN6DDP2lbcBrvgT9YCNL6C+ZKufD52yOQ9qOkwFTEQpjtF4uNtJom+asvlpmS8A
vLY9r60wYSvmZhNqBUrj7lyCtXMIu1kkd4w7F77k+DjHoAXyxcUp1DGL51sOmama
+TOWWgECgYEA8JtPxP0GRJ+IQkX262jM3dEIkza8ky5moIwUqYdsx0NxHgRRhORT
8c8hAuRBb2G82so8vUHk/fur85OEfc9TncnCY2crpoqsghifKLxrLgtT+qDpfZnx
SatLdt8GfQ85yA7hnWWJ2MxF3NaeSDm75Lsm+tBbAiyc9P2jGRNtMSkCgYEAypHd
HCctNi/FwjulhttFx/rHYKhLidZDFYeiE/v45bN4yFm8x7R/b0iE7KaszX+Exdvt
SghaTdcG0Knyw1bpJVyusavPzpaJMjdJ6tcFhVAbAjm7enCIvGCSx+X3l5SiWg0A
R57hJglezIiVjv3aGwHwvlZvtszK6zV6oXFAu0ECgYAbjo46T4hyP5tJi93V5HDi
Ttiek7xRVxUl+iU7rWkGAXFpMLFteQEsRr7PJ/lemmEY5eTDAFMLy9FL2m9oQWCg
R8VdwSk8r9FGLS+9aKcV5PI/WEKlwgXinB3OhYimtiG2Cg5JCqIZFHxD6MjEGOiu
L8ktHMPvodBwNsSBULpG0QKBgBAplTfC1HOnWiMGOU3KPwYWt0O6CdTkmJOmL8Ni
blh9elyZ9FsGxsgtRBXRsqXuz7wtsQAgLHxbdLq/ZJQ7YfzOKU4ZxEnabvXnvWkU
YOdjHdSOoKvDQNWu6ucyLRAWFuISeXw9a/9p7ftpxm0TSgyvmfLF2MIAEwyzRqaM
77pBAoGAMmjmIJdjp+Ez8duyn3ieo36yrttF5NSsJLAbxFpdlc1gvtGCWW+9Cq0b
dxviW8+TFVEBl1O4f7HVm6EpTscdDxU+bCXWkfjuRb7Dy9GOtt9JPsX8MBTakzh3
vBgsyi/sN3RqRBcGU40fOoZyfAMT8s1m/uYv52O6IgeuZ/ujbjY=
$ chmod 400 pass
$ ssh -i pass bandit17@bandit.labs.overthewire.org -p2220
```
- firstly used same process as used in level 15 in addition of nmap command
- then created a file and access it with vim command and saved temp password.
- then ussed chmod command to change permissions
## level 17
```
$ diff passwords.old passwords.new
$ exit
$ ssh -i pass bandit18@bandit.labs.overthewire.org -p2220
$ kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd
```
- used diff command to find the difference in files content
## level 18
```
$ ssh -t bandit18@bandit.labs.overthewire.org -p2220
$ /bin/sh
$ ls
$ cat readme
$ exit
$ ssh bandit19@bandit.labs.overthewire.org -p2220
$ IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x
```
- used ssh -t as terminal was auto logout
- then checked readme file using /bin/sh ,ls and cat command
## level 19
```
$ ls
$ ./bandit20-do cat /etc/bandit_pass/bandit20
$ exit 
$ ssh bandit20@bandit.labs.overthewire.org -p2220
$ GbKksEFF4yrVs61155v6gwY5aVje5f0j
```
- used cat command in a different way to open bandit20-do
## level 20
```
$ ls
$ cat /etc/bandit_pass/bandit20
```
- as suconnect was not working directly so setup a another user to use nc command to locate localhost 
```
$ ssh bandit20@bandit.labs.overthewire.org -p2220
$ GbKksEFF4yrVs61155v6gwY5aVje5f0j
$ cat /etc/bandit_pass/bandit20 | nc -l localhost -p 1234
$ ./suconnect 1234
$ exit
$ ssh bandit21@bandit.labs.overthewire.org -p2220
$ gE269g2h3mw3pwgrjoHa9Uoqen1c9DGr
```
- connected to bandit21