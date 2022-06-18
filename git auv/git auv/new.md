# OverThe Wire - Bandit

---

## Level 0

**bandit0**

ssh:secure shell

*ssh[username]@bandit.labs.overthewire.org -p 2220* : for logging in to the server

---

## Level 1

*ls*: lists all visible files in current directory

*cat readme*: prints the contents of the file to the screen

---

## Level 2

*cat ./-*

'-' is a special character

./ signifies our current location in the system and identifies - as a file

---

## Level 3

*cat "spaces in the filename"*

The filename has been put in quotes so that cat recognises the entire phrase as a filename and does not try to read and display a file for every word in the phrase

---

## Level 4

*cd inhere* : change directory

*ls -a:* lists all files in current directory

*cat .hidden*

---

## Level 5

*cd inhere*

*file ./* : prints the type of all files in the current directory

The file command returns the type of file

 is a wildcard that can represent unlimited number of characters

*cat ./-file07*

-file07 is the only file with type ASCII text - human-readable and an outlier - so we can reasonably assume our password to be in that file

---

## Level 6

*cd inhere*

*ls -al*: lists all files in the current directory along with their information

The -l argument lists all contents in long form, that is, name of file, permissions and what type of file it is

*find . -type f -readable ! -executable -size 1033c* : finds the file with the given qualities

---

## Level 7

*cd /*: takes back to the root directory

*find / -size 33c -user bandit7 -group bandit6 | grep bandit* : finds the file with the given qualities

grep serves as a searching tool for our BASH command line

*cat /var/libs/dpkg/info/bandit7.password*

---

## Level 8

*cat data.txt | grep millionth*

---

## Level 9

*sort data.txt | uniq -u*

We have to sort the file first as the uniq command works for pulling unique files only from sorted lists

---

## Level 10

*strings data.txt | grep =*

The strings command searches through lines that contain ASCII text

This prints a couple of possibilities, but correlating with the previous passwords, we can tell our desired password.

---

## Level 11

*base64 -d data.txt*

-d is the decode argument

---

## Level 12

*cat data.txt | tr A-Za-z n-za-mN-ZA-M*

The tr command is used to convert the text

---

## Level 13

*mkdir /tmp/Manasvij* : creates a directory

*cp data.txt /tmp/Manasvij* : makes a copy of the file in the directory

*cd /tmp/Manasvij*

*touch tempo* : creates a blank 

 N

*xxd -r data.txt temp* : reverses the hexdump

*file tempo*

*mv tempo tempo.gz*

*gunzip tempo.gz* : unzipping the tempo.gz compressed file

*file tempo*

*mv tempo tempo.bz*

*bunzip2 tempo.bz*

*mv tempo tempo.gz*

*gunzip tempo.gz*

*mv tempo tempo.tar*

*tar -f tempo.tar -x*

*file data5.bin*

*mv data5.bin data5.tar*

*tar -f data5.tar -x*

*file data6.bin*

*mv data6.bin data6.bz*

*bunzip2 data6.bz*

*file data6*

*mv data6 data6.tar*

*tar -f data6.tar -x*

*file data8.bin*

*mv data8.bin data8.gz*

*gunzip data8.gz*

*file data8*

*cat data8*

---

## Level 14

*ls -al*

*ssh bandit14@localhost -i sshkey.private*

*cat /etc/bandit_pass/bandit14*

---

## Level 15

*telnet localhost 30000*

---

## Level 16 

*nmap localhost -p 31000-32000*

* ncat - -ssl localhost 31790*

---

## Level 17 

*diff passwords.old passwords.new*

---

## Level 18

*ssh -t <bandit18@bandit.labs.overtheview.org> -p 2220/bin/sh*

*ls*

*cat readme*

---

## Level 19

*ls*

-   . /bandit20-do * 
-   . /bandit20-do id *

* . /bandit20-do cat /etc/bandit_pass/bandit20 *

---

bandit0  bandit0

bandit1  boJ9jbbUNNfktd78OOpsqOltutMc3MY1

bandit2  CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9

bandit3  UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK

bandit4  pIwrPrtPN36QITSp3EQaw936yaFoFgAB

bandit5  koReBOKuIDDepwhWk7jZC0RTdopnAYKh

bandit6  DXjZPULLxYr17uwoI01bNLQbtFemEgo7

bandit7  HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs

bandit8  cvX2JJa4CFALtqS87jk27qwqGhBM9plV

bandit9  UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR

bandit10 truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk

bandit11 IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR

bandit12 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu

bandit13 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL

bandit14 4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e

bandit15 BfMYroe26WYalil77FoDi9qh59eK5xNr

bandit16 cluFn7wTiGryunymYOu4RcffSxQluehd

bandit17 -----BEGIN RSA PRIVATE KEY-----

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

bandit18 IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x

bandit19 GbKksEFF4yrVs6il55v6gwY5aVje5f0j
