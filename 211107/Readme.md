# 211107
+ Levels of bandit

+ LEVEL 0
+    ssh bandit0@bandit.labs.overthewire.org -p 2220
+    password: bandit0
+ ls to list down the files present
+    ls
+ cat to read the content of the readme file which contains the password for level 1
+    cat readme
+ boJ9jbbUNNfktd78OOpsqOltutMc3MY1
+ then logout (ctrl + D)
+
+
+LEVEL 1
+    ssh bandit1@bandit.labs.overthewire.org -p 2220
+    password: boJ9jbbUNNfktd78OOpsqOltutMc3MY1
+      ls
+  -
+ the following command to read content of this file "-" which contains the password of the next level
+      cat./-
+ CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9
+ctrl +D
+
+
+LEVEL 2
+    ssh bandit2@bandit.labs.overthewire.org -p 2220
+    password: CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9
+    ls
+ spaces in this filename
+    cat ./spaces\ in\ this\ filename
+ UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK
+ ctrl + D
+
+
+LEVEL 3
+    ssh bandit3@bandit.labs.overthewire.org -p 2220
+    password: CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9
+    ls
+ inhere
+    cd inhere
+    ls -a
+.  ..  .hidden
+    cat .hidden
+ pIwrPrtPN36QITSp3EQaw936yaFoFgAB
+ ctrl + D
+
+
+LEVEL 4
+    ssh bandit4@bandit.labs.overthewire.org -p 2220
+    password: pIwrPrtPN36QITSp3EQaw936yaFoFgAB
+    ls
+    cd inhere
+    ls
+-file00  -file01  -file02  -file03  -file04  -file05  -file06  -file07  -file08  -file09
+    file ./-file0*
+./-file00: data
+./-file01: data
+./-file02: data
+./-file03: data
+./-file04: data
+./-file05: data
+./-file06: data
+./-file07: ASCII text
+./-file08: data
+./-file09: data
+password is in ./-file07
+    cat ./-file07
+koReBOKuIDDepwhWk7jZC0RTdopnAYKh
+ctrl + D
+
+
+LEVEL 5
+    ssh bandit5@bandit.labs.overthewire.org -p 2220
+    password: koReBOKuIDDepwhWk7jZC0RTdopnAYKh
+    ls
+    cd inhere
+    ls
+maybehere00  maybehere03  maybehere06  maybehere09  maybehere12  maybehere15  maybehere18
+maybehere01  maybehere04  maybehere07  maybehere10  maybehere13  maybehere16  maybehere19
+maybehere02  maybehere05  maybehere08  maybehere11  maybehere14  maybehere17
+    find -type f -size 1033c ! -executable
+./maybehere07/.file2
+now I got the file having my password and will read its contents
+    cd maybehere07
+    cat .file2
+DXjZPULLxYr17uwoI01bNLQbtFemEgo7
+ctrl + D
+
+
+LEVEL 6
+    ssh bandit6@bandit.labs.overthewire.org -p 2220
+    password: DXjZPULLxYr17uwoI01bNLQbtFemEgo7
+    find / -user bandit7 -group bandit6 -size 33c 2>&1 | grep -F -v Permission | grep -F -v directory
+/var/lib/dpkg/info/bandit7.password
+Now I got the the file containing my password and will now read its contents to get the password to the next level
+    cat /var/lib/dpkg/info/bandit7.password
+HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs
+ctrl + D
+
+
+LEVEL 7
+    ssh bandit7@bandit.labs.overthewire.org -p 2220
+    password: HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs
+    ls
+data.txt
+Now I will use the following command to get the password
+    cat data.txt | grep millionth
+millionth       cvX2JJa4CFALtqS87jk27qwqGhBM9plV
+ctrl + D
+
+
+LEVEL 8
+    ssh bandit8@bandit.labs.overthewire.org -p 2220
+    password: cvX2JJa4CFALtqS87jk27qwqGhBM9plV
+    ls
+ data.txt
+ now the following command will perform the required action of printing the contents of the unique line
+    cat data.txt | sort | uniq -c -u
+      1 UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR
+ ctrl + D
+
+
+LEVEL 9
+    ssh bandit9@bandit.labs.overthewire.org -p 2220
+    password: UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR
+    ls
+ data.txt
+    strings data.txt | grep ====
+========== the*2i"4
+========== password
+Z)========== is
+&========== truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk
+ Now I have obtained the password
+ ctrl + D
+
+
+LEVEL 10
+    ssh bandit10@bandit.labs.overthewire.org -p 2220
+    password: truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk
+    ls
+ data.txt
+    cat data.txt | base64 -d
+ The password is IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR
+ ctrl + D
+
+
+LEVEL 11
+    ssh bandit11@bandit.labs.overthewire.org -p 2220
+    password: IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR
+    ls
+ data.txt
+    cat data.txt | tr “A-Za-z” “N-ZA-Mn-za-m”
+ The password is 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu
+ ctrl + D
+
+
+ LEVEL 12
+    ssh bandit12@bandit.labs.overthewire.org -p 2220
+    password: 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu
+    mkdir  /tmp/tejas
+    cp data.txt /tmp/tejas
+    cat data.txt | xxd -r > data
+    file data
+    mv data data2.gz
+    gzip -d data2.gz
+ like this we will keep checking the file and modify the suffix and then again decompress the file. And then when we get the type of file as ASCII text. print the contents to get the password.
+ 
+ ctrl + D
+
+
+ LEVEL 13
+    ssh bandit13@bandit.labs.overthewire.org -p 2220
+    password: 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL
+    ls
+ sshkey.private
+    ssh -i sshkey.private bandit14@localhost
+    yes
+    pwd
+ /home/bandit14
+    cd ../..
+    cat /etc/bandit_pass/bandit14
+ 4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e
+ ctrl + D
+
+
+ LEVEL 14
+    ssh bandit14@bandit.labs.overthewire.org -p 2220
+    password: 4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e
+    nc localhost 30000
+ 4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e
+ Correct!
+ BfMYroe26WYalil77FoDi9qh59eK5xNr
+ ctrl + D
+
+
+LEVEL 15
+    ssh bandit15@bandit.labs.overthewire.org -p 2220
+    password: BfMYroe26WYalil77FoDi9qh59eK5xNr
+    openssl s_client -quiet -connect 127.0.0.1:30001
+ depth=0 CN = localhost
+ verify error:num=18:self signed certificate
+ verify return:1
+ depth=0 CN = localhost
+ verify return:1
+   BfMYroe26WYalil77FoDi9qh59eK5xNr
+ Correct!
+   cluFn7wTiGryunymYOu4RcffSxQluehd    
+ctrl + D
+
+
+LEVEL 16
+    ssh bandit16@bandit.labs.overthewire.org -p 2220
+    password: cluFn7wTiGryunymYOu4RcffSxQluehd 
+    nmap localhost -p31000-32000
+ Starting Nmap 7.40 ( https://nmap.org ) at 2022-06-16 18:59 CEST
+ Nmap scan report for localhost (127.0.0.1)
+ Host is up (0.00026s latency).
+ Not shown: 996 closed ports
+ PORT      STATE    SERVICE
+ 31046/tcp open     unknown
+ 31518/tcp filtered unknown
+ 31691/tcp open     unknown
+ 31790/tcp open     unknown
+ 31960/tcp open     unknown
+
+ Nmap done: 1 IP address (1 host up) scanned in 1.25 seconds
+   echo cluFn7wTiGryunymYOu4RcffSxQluehd | openssl s_client -quiet -connect localhost:31790
+ now we saved the RSA key in a file named tejas.private
+     mkdir /tmp/tejas_1
+     cd /tmp/tejas_1
+     nano tejas.private
+     chmod 600 /tmp/bandit17.key
+     ssh bandit17@localhost -i /tmp/bandit17.key
+ then we were connected to next level
+ ctrl + D
+
+
+LEVEL 17
+    ls
+ passwords.new passwords.old
+    diff passwords.new passwords.old
+ 42c42
+ < kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd
+ ---
+ > BS8bqB1kqkinKJjuxL6k072Qq9NRwQpR
+ The password to the next level is kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd
+ctrl + D
+
+
+ LEVEL 18
+    ssh bandit18@bandit.labs.overthewire.org -p 2220 cat readme
+    password: kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd
+ bandit18@bandit.labs.overthewire.org's password:
+ IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x
+ ctrl + D
+
+
+ LEVEL 19
+    ssh bandit19@bandit.labs.overthewire.org -p 2220
+    password: IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x
+    ls
+ bandit20-do
+    ./bandit20-do cat /etc/bandit_pass/bandit20
+ GbKksEFF4yrVs6il55v6gwY5aVje5f0j
+ ctrl + D
+
+
+ LEVEL 20
+    ssh bandit20@bandit.labs.overthewire.org -p 2220
+    password: GbKksEFF4yrVs6il55v6gwY5aVje5f0j
+    ls
+ suconnect
+    ls -al ./suconnect
+ -rwsr-x--- 1 bandit21 bandit20 12088 May  7  2020 ./suconnect
+    echo "GbKksEFF4yrVs6il55v6gwY5aVje5f0j" | nc -l localhost -p 61337 &
+ [2] 1803
+    ps aux
+    ./suconnect 61337
+ Read: GbKksEFF4yrVs6il55v6gwY5aVje5f0j
Password matches, sending next password
gE269g2h3mw3pwgrj0Ha9Uoqen1c9DGr
[2]-  Done                    echo "GbKksEFF4yrVs6il55v6gwY5aVje5f0j" | nc -l localhost -p 61337
+ ctrl + D

