0 to 1 
ls to list files
Cat to read
1 to 2 
./- to access - files
2 to 3 
'spaces in this filename' or spaces\ in\ this\ filename
3 to 4 
ls to list
Cd to go to hidden directory
Ls -a to view all files of it
Cat.hidden
4 to 5 
ls
Cd
Ls -a
File ./* Choose one with ASCII as it is human readable
5 to 6
Ls cd file
Find . -Type f(file) size 1033c ! -executable
Cat
6 to 7
Find / -type f -user bandit7 -group bandit6 -size 33c
Permission denied in all except 1, cat that
7 to 8
Ls
Cat data.txt
Strings data.txt prints the strings of printable chars
Strings data.txt | grep "millionth"
Grep searches file for a particular pattern of characters
8 to 9
Ls cat
Sort
Sort data.txt | uniq -c which counts repetitions
9 to 10
Strings data.txt | grep "="
10 to 11
Cat data.txt
base 64 -d meaning decode
11 to 12
Cat data.txt | tr 'A-Za-z' 'N-ZA-Mn-za-m'
Rotates by 13
12 to 13
mkdir 
Cp data.txt into it
xxd -r data.txt > data for reversing hexdump
Extension changed to .gz
Bzip 2 and Gzip used for decompressing multiple times
File becomes a TAR archive
Extracted using tar xf
Cat for finally reading
13 to 14
ssh -i sshkey.private bandit14@localhost to specify the ssh key and enter as user bandit14
Cat to read
14 to 15
Nc localhost 30000 submits current password to port 30000
15 to 16
ncat --ssl localhost 30001 to submit password on port 30001 using ssl encryption 
16 to 17
nmap -p 31000-32000 to look for active ports
5 active found
Ran cat on every port 
Port 31790 gave RSA pvt key
Made a new directory
Pasted RSA key in vim
Ran chmod command to only allow us to read and write and remove warning
Cat to read
17 to 18
used diff command to distinguish files line by line 
The line that gets removed is our password
18 to 19
On logging in, it says bye-bye and terminates
/etc/shells to display shells
We login using shell and add -t "bin/sh" to ssh command
19 to 20
We run a command as bandit20
./bandit20-do cat/etc/bandit_pass/bandit20
To cat file as bandit20
20 to 21
Netcat - lp 1234 & to set up a listener on a port
And run in background
ls to display
./suconnect to use binary file on same port
Password matches, sending next password
