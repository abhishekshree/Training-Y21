ssh bandit0@bandit.labs.overthewire.org -p 2220 (connecting to user bandit0 at port 2220)

Bandit 0-
 ls- to get list of items then opened readme file with "nano readme"  got the password. Then used ssh bandit1@bandit.labs.overthewire.org -p 2220 to connect to user bandit 1 and entered the password 

Bandit 2-> 1
 cat ./-  to get the password for bandit 2 

Bandit 2-
 loggend in to bandit2 ;checked ls ;items ; dir for directories ; got a directory location ; cat <file location; got the password.

Bandit 3-
 logged in to bandit3 ;  cd inhere; ls -a to show hidden files ; cat .hidden ; got the password.

Bandit 4-
 logged in to bandit 4;cd inhere; ls and found many files ;used file ./-* command to know each ones format; one file with ASCII text; got password.

Bandit 5-
 logged in to bandit 5;  cd inhere; many files ; made use of specifications given for a file to search "find -type f -size 1033c" ; file location and then cat <file location>.
Bandit 6-
 Used 'find ./'; with flag '-executable', '-type f','readable','size';used 'cat'. 
Bandit 7-
 Used 'find /' to find in root dir and other subdirs; Used flags '-size','-user','-group'; used '2>' to redirect stderr to file and then used '/dev/null' to supress the output "Permission Denied";
Bandit 8:
 Used 'grep' command to check for 'millionth';Used '-h' flag to print the matching line. 
Bandit 9:
 Used '|' to use the output of one cmd as input to other; used 'cat|sort|uniq -u';-u is used so that it gives only unique lines
Bandit 10:
 Used 'strings' to print the readable part of the file and then found out the password

Bandit 11-
 logged in. ls -a too see all hidden files;Then cat data.txt but no results ; so typed echo Gurcnffjbeq vf 5Gr8L4qetPEsPk8htqjhRK8XSP6x2RHh | tr [a-zA-Z] [n-za-mN-ZA-M] .

Bandit 12-
 logged in. then mkdir /tmp/priyanshi/file.bin. then xxd -r data.txt > /tmp/priyanshi/file.bin
           then on priyanshi file file.bin;uncompressing it continuously and got the password with command-> zcat file.bin | bzcat | zcat | file - then zcat file.bin | bzcat | zcat | tar xO | file - and kept on going. deleted the directory; deleted directory
           
Bandit 13-
  ls -a; ssh -i sshkey.private bandit14@localhost. Then cat /etc/bandit_pass/

Bandit 14-
 telnet localhost 30000 to connect to local host ; used the retrieved password ;got the new one.

Bandit 15-
 used openssl s_client -ign_eof -connect localhost:30001 then entered the password ;got next password.

Bandit 16-
For this Bandit i first installed nmap then used nmap -p 31000-32000 -sV  localhost to search for hosts.echo cluFn7wTiGryunymYOu4RcffSxQluehd | openssl s_client -quiet -connect localhost:hostno. depth=0 CN = li190-250.members.linode.com  ,
checking every local host  ; got the password.
Then made a directory and a file sshkey.private and stored the key in it .(ssh -i ./sshkey.private bandit17@localhost) 

Bandit 17-
 la -a , then diff passwords.new passwords.old and got the different line .

Bandit 18-
 ssh bandit18@bandit.labs.overthewire.org "bash --norc" then cat readme.

Bandit 19-
 ls -a; run a command as another user so ./bandit20-do cat /etc/bandit_pass/bandit20.

Bandit 20-
 nc -l 32123 < /etc/bandit_pass/bandit20  got a netcat listening on port 32123 ; logged in to bandit 20 from another terminal window and accessed suconnect via port 32123 by ./suconnect 32123. got password on the first terminal window.
