# Training-Y21
Level 0: Looked up on the internet how to use the ssh command: ssh username@hostname -p port.


level0-1: used ls command to look at the files and used cat command to view the contents of the readme file.
       password:boJ9jbbUNNfktd78OOpsqOltutMc3MY1


level1-2: I had to lookup on the internet on how to view a hyphenated file which has a slightly different command.
        password:CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9


level2-3: I had to read up on how to use commands when the filename has spaces.
        password:UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK


level3-4:fire i used cd to enter the inhere directory and then used the ls -la command to know the filenames of the         hidden files.
password:pIwrPrtPN36QITSp3EQaw936yaFoFgAB 


Level 4-5: first i enetered the inhere directory. used find -type along with xargs file whic displays the type of contents within the inhere directory. used cat for the only file with ascii text.

        koReBOKuIDDepwhWk7jZC0RTdopnAYKh


level 5-6: used find -type f to give normal files -size to specify the size and ! -exectable to give only non executable files.
only one such file was in the inhere directory which we accessed by cd command. then cat required file paath gave the next password.


        DXjZPULLxYr17uwoI01bNLQbtFemEgo7


level 6-7: read up the man pages of find. use / after find to search entire system used -type f for file -user ot specify user -group to specify group name and -size to specify the size of the file. now only one of the files could be accessed and it contained the password. catted it to get the password.


        HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs


level 7-8: learnt about the basics of grep from geekforgeeks to clear this level.  first used cat command which igrepped with to search for the line with the word millionth. basically grep "millionth". the word after millionth is the next password.


        cvX2JJa4CFALtqS87jk27qwqGhBM9plV


level 8-9: read about sort and uniq commands. sort arranges the lines and prints them in alphabetical order while uniq -c gives the counts of these lines.
        UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR


level 9-10: we can get the lines which have "=" by using grep and the lines can be printed by strings command
        truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk


level 10-11: for the base64 code we can decode the code using -d along with the base64 command that is basically base 64 -d.
        IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR
 

 level 11-12: read the wiki link, found out that tr is the required command used it along with the cat command to view the file.
 first used the tr command with -t option along with the sets which define the rotation by 13. after entering the command we have to copy paste the contents of the data.txt file and the decoded output is printed.
        5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu

level 12-13: bfirst we created a directory /tmp/abir. now we are going to reverse hexdump the data.txt file. for that we copied the data.txt file into the working directory. then we used xxd -r data.txt > data to reverse hexdump the output into the data file.
now file command shows it is a gzip commpressed file so mv it to a gz file and decompress it using gzip. we can do it using the -d option. so on unzipping it we get a new file data. file command shoys it is a bzip2 compressed file. we first mv it to data.bz2 and then decompress it using bzip2 -d. then the next file data is again a gzip2 compressed file. so we mv it to data.gz and then decompress it by gzip2 -d again. the next file data that we get is a tar archive file so clearly next command is going to be a tar command. by reading man pages learnt that -xf is the ooption to extract a tar file. first mv it to data.tar and extraxted it to get data5.bin which is also a tar file. so mv it to data5.tar and extract it to get data6.bin which is a bzip2 file. so mv it to data.bz2 and decompress it using bzip2 -d. We get a file data which is a tar file again so we mv it to data.tar and extract it. next we get data8.bin a gzip file so mv and decompress it to get a data file which is finally a ASCII file 😅. cat it to read the contents and get the next password.


         8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL


level 13-14 man ssh key to find the -i option. used it to get the private key to login as bandit14 into localhost
        and read the file given in the question
        4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e


level 14-15 read up man telnet to learn -a is the option to attempt automatic login telnet -a hostname port
        BfMYroe26WYalil77FoDi9qh59eK5xNr


level 15-16 read man pages of nc and ncat found the --ssl coption for ncat. used it with [localhost] [port] and pasted the previous password to get new password.
        cluFn7wTiGryunymYOu4RcffSxQluehd


level 16-17: first used the nmap command. used the -p option to search the port within the range, it returned the ports with a server listed on them. one by one i used ncat --ssl on each of the ports to find which port returned the credentials of the next level. Only one of the ports returned a RSA private key.
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


level 17-18 :read up the diff command through the man page. used the --supress-common-lines to priint the lines that differ.
        kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd


level 18-19 : unable to login with the usual ssh command as the bash.rc file has been modified. so changed the terminal using the -t command and made it /bin/sh. now we can login and read the content of the readme file.


        IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x


level 19-20: ./bandit20-do basically executed it without arguments to get a message about how to execute it. 
now used the command ./bandit20-do cat /etc/bandit_pass/bandit19 to get the password.


        GbKksEFF4yrVs6il55v6gwY5aVje5f0j

level 20-21: opened up 2 terminals. Used cat command aand grepped it with nc to have port in localhost. On the second terminal used suconnect to connect with that port and had the password on the first terminal. used -l with -p in the nc command.
        gE269g2h3mw3pwgrj0Ha9Uoqen1c9DGr



