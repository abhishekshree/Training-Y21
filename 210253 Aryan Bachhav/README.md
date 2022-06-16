TO cross each help i take help of google to understand commands and how to use them in terminal i mean their syntax.As well as in challlenge useful command is given so i take help of them

LEVEL 0-1
1st use ssh command then write username then write "@" after that write host then "-" then write port name   (ssh bandit0@bandit.labs.overthewire.org -p 2220)
2nd type given password it will connect us to the server 
3rd to see the list of files i used ls command ,it will help to understanfd the command
to access this file i used cat command finally it gave me password of next level
Leve 1-2
  to acces server we just have to replace one digit in which level indicate then  write password  which we get from previous level
after cponnecting to the server see  list of file by ls then use cat but you can acceSs it because - means we are taking argument ,so for this use ./- format so we specified access the filenamed - in current directories
we got password;
level 2-3
in this level we got problem we cannot access file with space because it didn't interpreted it same as others it will treat space and file as a different argument spaces and in as different argument so avoid this we used double quotion  so it read whole file name correctly
we got password
level 3-4
in this case we have to access file in specific directories 
so it is good to use find command so it is very easy to used 
change directory using  cd command then after entering in directory acces hidden file using cat
level 4-5
enter in inhere file using cd command then used command file to access type but it is very lenghty ,so use "file ./*" it show cintent of all file 
there is one file with ascii value access this file you will passwrod
level 5-6
in this problem   we have to use new commands  and we can uderstand their use by man find command which all this theory
use find command then by observing use go into inhere then go int maybehere00 using cd
then apply command find then mention -size 1033c -readable ! - executable (! denotes not and c denotes byte)
wwe get file name then acces this file by cat 
level 6-7
this is simple use -size c -user "name" -group"name"
then we got file access file we get password
level 7-8
it is giving lots of file but we have to  chose only the file which is starting from millionth 
so we used grep command so it dirctly print the line in which  millionth is mentioned in data.txt
so now we got our password jump to the next level
level 8-9
in this problem we have to find file which occurs only once but there is a problem if we use uniq command then also it gicves many option because it interpreted the statment repeat if they are concecative for that use sort command then pass this input to uniq -u
so we get our passwrod
level 9-10
in this case if we used cat it will give many non redable text to avoid this use strings command it would give only redable words
level 10-11
we use encoding to secure our data we can decode it by using command base64 -d to decode it we got our password
level 11-12
if we want to hide something or secure something we use this type  funtion 
rotate no by 13 position is like using funtion here there is a command called tr a-zA-Z n-za-mN-ZA-M so if we pass data from cat data.txt to the tr command it wouldgive our password
level 12-13
i take help of google to understand given command
                              \
in given challenge it is mentioned that hexdump is repeateadly compressed so to obtain passwrord we have to decompress it repeatedly and it consequently changes to the current directory but we dont have to get permission because we created our /tmp directory to do this using mkdir command  and then copy data iby command by cp then go intodirectory by cd
then see data by ls 
next run file data.txt which will output data.txt: ASCII text 
hence it is redable so use cat data.txt so the file is hexdump file 
next using xxd -r convert hexdump to orignal BINARY form 
pass the result to the outFile 
run xxd -r data.txt data to perform a reverse hex dump and output to a file named data
now run a dile data to type 
1st use file"named" determing type 
use mv to appropriate file type
then decompress it by gzip -d filenamed
run this proccess until file "filenamed"  show  ascii text
then access this file using cat data8 
which gave password
level 13-14
connect to the server
then to get into next level we have ssh private key so to  use it use command
ssh -i sshkey.private bandit14@localhost
use cat to access given file
which give us current password
level 14-15
we can use telent command as following 
telent localhost 3000
once we connected to the remote server entered bandit14 password and in return we get bandit15 password
level 15-16
in this challenge we have to submit bandit15 password to localhost on port 3001 and it requires ssl encrypition
OpenSSL comes with a client tool that we can use to connect to a SECURE server.
 now i used command  openssl s_client -connect localhost:30001.
s_client help to connect with remote server .after that we typed bandit15's password and got bandit16 passwird
level 16-17
1st connect to the server
we have to choose specific port which can connect to the ssl connection and has port range 31000 to 32000 
1st  we gave condition that our port is between 31000 to 32700 by command -nmap -p 31000-32000 
now we got 2 port applying next. condition we send bandit16 password to all 5 ports using openssl using s_client tool
gave command nc localhost 31790 it will return password 
note if we gave password to undiesired port it will return same thing whhich we gave 
now for finding next level credential use ncat --ssl localhost 31790
and password 
we got rsa key then created a folder by command
rm -rf /tmp/name123  then mkdir /tmp/name123  then go into directory by cd /tmp/name123   
now go into vim editor by vim sshkey.private
then  creat new file by typing i you go into insert mode 
then paste RSA key now type ESC so you can switch to command mode
type :wq to save changes  and  exit the vim editor.
 connect to the bandit17 by 
 ssh -i sshkey.private bandit17@localhost
it gave warnning i typed yes
it is very opened so to secure use command chmod 400 sshkey.private
we were in bandit 17 so. to obtain password use command cat /etc/bandit_pass/bandit17.
now exit from server 
typed rm -rf sshkey.private to o remove the private key stored
at last exit from bandit16
level 17-18
login both files are in homedirectory so perform diff command which will compare files line by line
use command diff passwords.new passwords.old
now we got bandit18 password
level 18-19
in this case we cant login like previous some one modified server by .bashrc to logout wwhen we entered in ssh
so we simply give all commands we need in username means while connecting to the the server we still give command to the system and got our password for bandit19
ssh bandit18@bandit.labs.overthewire.org -p 2220 ls -la
then after entering password 
we can see all files as well as hidden fileds but we our disconnected now so again login with username but at the end write cat README.md so we get our password ssh bandit18@bandit.labs.overthewire.org -p 2220 cat readme
level 19-20
1st login then 
as mentioned setuid is the setting which allowed the user to excute the file by permission from owner. 
use command ls-l to find file which is setuid it show we have to give command to the bandit20 as a user it will give bandit20-do
then access the passwrod as normal by ./bandit20-do cat /etc/bandit_pass/bandit20
level 20-21
1st connect  to the server 
command ls -l to identify setuid file ,the owner of the file is bandit21 (suconnect) any commands with ./suconnect will execute as user bandit21
command nmap localhost to detect open port i chosed one port which is not in the output 
 command nc -lp "port" so netcat listen then open 2nd terminal connect to the same account next connect ./suconnect"port"
 back to the 1st terminal type bamndi20 password if it matched then it will show bandit21 password in terminal 1.

