# Training-Y21
ssh bandit0@bandit.labs.overthewire.org -p 2220
level 0 
password-bandit0    used ls to see readme and cat to access its contents

level 1 
password-boJ9jbbUNNfktd78OOpsqOltutMc3MY1
Used ls to see files and found dashed file, Searched "dashed filenames" on google, used cat./- command to access its content

level 2
password-CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9
used ls to see files and found a file with spaces in its name, Searched "spaces in filename" on google, used cat command with apostrophes to denote the file name and got access to its content

level 3
password- UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK
used ls to find inhere directory, used cd to go in the directory, used -a to acces the hidden file, and used the cat command to access the contents. 

level 4
password- pIwrPrtPN36QITSp3EQaw936yaFoFgAB
used ls to find inhere directory, used cd to go in the directory, used find to see all the files available and used file ./ star to determine the file type for all files, found a file with ASCII text type, and used the cat command to access the contents

level 5
password- koReBOKuIDDepwhWk7jZC0RTdopnAYKh
used ls to find inhere directory, used cd to go in the directory,used find. -type f to see the files, and complented it with  -size 1033c and !-executable requirements to find the file, and used the cat command to access the contents

level 6
password- DXjZPULLxYr17uwoI01bNLQbtFemEgo7
used find command along with putting criterias such as  user, group and size, and found the file which contains the password, and used cat command to access the contents 

level 7
password- HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs
used ls to see data.txt file, used cat to see its contents, used grep command to find the string required as the password for the next level.

level 8
password- cvX2JJa4CFALtqS87jk27qwqGhBM9plV
used ls to see data.txt file, used cat to see its contents, used sort to sort the various string in order, and then used uniq command along with -c to find the only line not repeated.

level 9
password- UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR
used ls to see data.txt file, used cat to see its contents, used grep command(by adding severel == , I used 3) to find the string required as the password for the next level.

level 10
password- truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk
used ls to see data.txt file, used cat to see its contents, now as the data is encoded base64, used base64--decode to arrive at the password.

level 11
password- IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR
used ls to see data.txt file, used cat to see its contents, now as the content has to be rotated by 13 positions to get the password, used tr command to arrive at the password

level 12
password- 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu
used ls to see data.txt file, created a directory (mkdir/tmp/Kun123), copied the datafile using cp, used cd to enter and file to get the ASCII data type googled about hexdumps and reverse hexdumps, used xxd command to convert the hexdump to orignal,  used mv to change extension to .gz, used gzip command to unzip the file, now, as it was bzip2 compressed, extracted again using bzip2 command , used tar xvf command again and again till the data type==ASCII, which lead to the password. 

level 13
password- 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL 
used ls to see sshkey.private, used cat to see its contents, googled about using keys on git, used the command -- ssh -i sshkey.private bandit14@localhost and used that to login into level 14, used cat to arrive at the password

level 14
password- 4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e
since already logged onto level 14, used command-- echo , along nclocalhost to connect, extracted it and arrived at the password

level 15
password- BfMYroe26WYalil77FoDi9qh59eK5xNr
googled about SSL encryption and connecting to different ports on a local host, used command-- openssl to connect to port 30001, entered last password and arrived at the new password

level 16
password-cluFn7wTiGryunymYOu4RcffSxQluehd
googled about traversing through different ports, used command-- nmap to go through the range of ports, arrived at 4 open ports, 1 was using SSL, connected to port 31790 using command-- openssl, entered the last password to receive the private key, then used vim command to create a new file with the key, used command-- chmod400 and used ssh-i command to use the key to enter the next level.

level 17
password-xLYVMN9WE5zQ5vHacb0sZEVqbrp7nBTn
used ls to view files, google about comparing two files on git, used diff command to view the changes between the two files, arrived at the password

level 18
password-kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd
tried to login using ssh but got logged out, googled for work arounds and found out that commands can be run along wit connecting to servers, used command-- ls-al along with ssh login command to view all the files in the directory,  then used command-- cat along with the ssh login command to display the contents and arrived at the password, before disconnecting from the server.

level 19
password-IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x
used ls to view files, used ./ command to execute it as given in the question, used ./ command from another user id (googled this part to get some idea), and then used ./bandit20-do cat/etc/bandit_pass/bandit19 to arrive at the password

level 20
in process, not completed till yet
