Level 0
ls
cat readme
boJ9jbbUNNfktd7800psq0ltutMc3MY1
Level 1
ls
cat ./-
CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9
level 2
ls
cat spaces\ in\ this\ filename
UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK
level 3
ls -alps
cd inhere/
ls -alps
cat .hidden
pIwrPrtPN36QITSp3EQaw936yaFoFgAB
level 4
ls -alps
cd inhere/
ls -alps
find . -type f | xargs file
cat ./-file07
koReBOKuIDDepwhWk7jZC0RTdopnAYKh
level 5
ls -alps
cd inhere/
find . -type f -size 1033c ! -executable
cat ./maybehere07/.file2
DXjZPULLxYr17uwoI01bNLQbtFemEgo7
level 6
find / -user bandit7 -group bandit6 -size 33c
cat /var/lib/dpkg/info/bandit7.password
HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs
level 7
ls
grep -rnw './data.txt' -e 'millionth'
cvX2JJa4CFALtqS87jk27qwqGhBM9plV
level 8
sort data.txt | uniq -u
level 9
strings data.txt | grep "="
truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk
level 10
base64 -d data.txt
IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR
level 11
cat data.txt
tr 'A-Za-z' 'N-ZA-Mn-za-m' <<< Gur\ cnffjbeq\ vf\ 5Gr8L4qetPEsPk8htqjhRK8XSP6x2RHh
The password is 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu
level 12
ls
mkdir /tmp/hey
cp data.txt /tmp/hey
cd /tmp/hey
ls
data.txt
xxd -r data.txt data
ls
data  data.txt
file data
data: gzip compressed data, was "data2.bin", last modified: Thu May  7 18:14:30 2020, max compression, from Unix
mv data data.gz
gzip -d data.gz
ls
data  data.txt
file data
data: bzip2 compressed data, block size = 900k
mv data data.bz2
bzip -d data.bz2
ls
data  data.txt
file data
data: gzip compressed data, was "data4.bin", last modified: Thu May  7 18:14:30 2020, max compression, from Unix
mv data data.gz
gzip -d data.gz
ls
data  data.txt
file data
data: POSIX tar archive (GNU)
mv data data.tar
tar xf data.tar
ls
data5.bin  data.tar  data.txt
rm data.txt
rm data.tar
ls
data5.bin
file data5.bin 
data5.bin: POSIX tar archive (GNU)
mv data5.bin data.tar
tar xf data.tar
ls
data6.bin  data.tar
rm data.tar
file data6.bin 
data6.bin: bzip2 compressed data, block size = 900k
mv data6.bin data.bz2
bzip2 -d data.bz2
ls
data
file data
data: POSIX tar archive (GNU)
mv data data.tar
tar xf data.tar
ls
data8.bin  data.tar
rm data.tar
file data8.bin
data8.bin: gzip compressed data, was "data9.bin", last modified: Thu May  7 18:14:30 2020, max compression, from Unix
mv data8.bin data.gz
gzip -d data.gz
ls
data
file data 
data: ASCII text
cat data 
The password is 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL
level 13
ls
sshkey.private
ssh -i sshkey.private bandit14@localhost
level 14
cat /etc/bandit_pass/bandit14
4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e
nc localhost 30000
4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e
Correct!
BfMYroe26WYalil77FoDi9qh59eK5xNr
level 15
ncat --ssl localhost 30001
BfMYroe26WYalil77FoDi9qh59eK5xNr
Correct!
cluFn7wTiGryunymYOu4RcffSxQluehd

Level 16
nmap -p 31000-32000 localhost

Starting Nmap 7.40 ( https://nmap.org ) at 2022-06-16 15:30 CEST
Nmap scan report for localhost (127.0.0.1)
Host is up (0.00025s latency).
Not shown: 996 closed ports
PORT      STATE    SERVICE
31046/tcp open     unknown
31518/tcp filtered unknown
31691/tcp open     unknown
31790/tcp open     unknown
31960/tcp open     unknown

Nmap done: 1 IP address (1 host up) scanned in 1.25 seconds

nmap -p 31046,31518,31691,31790,31960 -A localhost
cat /etc/bandit_pass/bandit16
cluFn7wTiGryunymYOu4RcffSxQluehd

ncat --ssl localhost 31790
cluFn7wTiGryunymYOu4RcffSxQluehd
Correct!
-----BEGIN RSA PRIVATE KEY-----
MIIEogIBAAKCAQEAvmOkuifmMg6HL2YPIOjon6iWfbp7c3jx34YkYWqUH57SUdyJ
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
-----END RSA PRIVATE KEY-----

vim key
chmod 400 key
ssh -i key bandit17@bandit.labs.overthewire.org -p 2220

Level 17

diff passwords.old passwords.new
42c42
< w0Yfolrc5bwjS4qw5mq1nnQi6mF03bii
---
> kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd

Level 18

ssh -t bandit18@bandit.labs.overthewire.org -p 2220 /bin/sh
This is a OverTheWire game server. More information on http://www.overthewire.org/wargames

bandit18@bandit.labs.overthewire.org's password: 
$ ls
readme
$ cat readme
IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x

Level 19
ls
./bandit20-do cat /etc/bandit_pass/bandit20
GbKksEFF4yrVs6il55v6gwY5aVje5f0j

Level 20
Open New Terminal (term -2)
On Term -2 
nc -lvp 9999
listening on [any] 9999 ...
connect to [127.0.0.1] from localhost [127.0.0.1] 44814
GbKksEFF4yrVs6il55v6gwY5aVje5f0j
gE269g2h3mw3pwgrj0Ha9Uoqen1c9DGr

on Term -1

./suconnect 9999
Read: GbKksEFF4yrVs6il55v6gwY5aVje5f0j
Password matches, sending next password
