 i used the command ssh bandit0@bandit.labs.overthewire.org -p 2220 to connect to user bandit0 at port 2220

Level 0-1 ->  Bandit 0-> i simply used ls on home directory to get list of items then opened readme file with "nano readme" and boom! got the password. Then used ssh bandit1@bandit.labs.overthewire.org -p 2220 to connect to user bandit 1 and entered the password i just found out.

Level 1-2 ->  Bandit 1-> I just used cat ./- and got the password "CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9"

Level 2-3 ->  Bandit 2-> Then i loggend in to bandit2 using ppassword obtained above then I checked ls then found out there are no list items so then i typed dir for directories then i got a directory location , then i used cat <file location> and boom got the password.

Level 3-4 ->  Bandit 3-> logged in to bandit3 using password , then went to inhere directory by cd inhere, then ls -a to show hidden files and then cat .hidden and got the password.

Level 4-5 ->  Bandit 4-> logged in to bandit 4. cd inhere. then ls and i got many files name now i used file ./-* command to know the format of each file. Then i found out only one file was ASCII text. So i opened it(with cat) and boom got another password.

Level 5-6 ->  Bandit 5-> logged in to bandit 5. then cd inhere. Then tehre were many files so i used the specifications giv en for a file woth to search "find -type f -size 1033c" (FORMAT AND SIZE BOTH AS GIVEN) and then got the file location and then cat <file location>.

Level 6-7 ->  Bandit 6->Logged in to bandit 6. Then find / -user bandit7 -group bandit6 -size 32c 2>/dev/null
then i got the location of file then cat <file location> 7->logged in to bandit 7. 

Level 7-8 ->  Bandit 7->Then nano data.txt and searched foR MILLIONTH and got the password.

Level 8-9->   Bandit 8->again logged in. then sorted with cat data.txt | sort | uniq -u 

Level 9-10->  Bandit 9-> strings data.txt | grep "=" to search for strings eithin the file which contain = 

Level 10-11-> Bandit 10-> cat data.txt, then echo VGhlIHBhc3N3b3JkIGlzIElGdWt3S0dzRlc4TU9xM0lSRnFyeEUxaHhUTkViVVBSCg== | base64 --decode

Level 11-12-> Bandit 11-> logged in. ls -a too see all hidden files. Then cat data.txt but it was a mess. so then i typed echo Gur cnffjbeq vf 5Gr8L4qetPEsPk8htqjhRK8XSP6x2RHh | tr [a-zA-Z] [n-za-mN-ZA-M] .

Level 12-13-> Bandit 12-> logged in. then mkdir /tmp/shubh/file.bin. then xxd -r data.txt > /tmp/shubh/file.bin
           then on shubh file file.bin, then i kept on uncompressing it until i got the password with command-> zcat file.bin | bzcat | zcat | file - then zcat file.bin | bzcat | zcat | tar xO | file - and kept on going. deleted the directory
           
           Then i just deleted the directory.
Level 13-14-> bandit 13->  ls -a. them ssh -i sshkey.private bandit14@localhost. Then cat /etc/bandit_pass/

Level 14-15-> Bandit 14-> telnet localhost 30000 to connect to local host then i entered the retrieved password and got the new one.

Level 15-16-> Bandit 15-> used openssl s_client -ign_eof -connect localhost:30001 then entered the password to get next password.

Level 16-17-> Bandit 16-> For this level i first installed nmap then used nmap -p 31000-32000 -sV  localhost to search for hosts.echo cluFn7wTiGryunymYOu4RcffSxQluehd | openssl s_client -quiet -connect localhost:hostno. depth=0 CN = li190-250.members.linode.com  ,
i checked every local host with it. And boom got the correct one.
Then made a directory and a file sshkey.private and stored the key in it .(ssh -i ./sshkey.private bandit17@localhost) 

Level 17-18-> Bandit 17-> la -a , then diff passwords.new passwords.old and got the different line .

Level 18-19-> Bandit 18->  ssh bandit18@bandit.labs.overthewire.org "bash --norc" then cat readme.

Level 19-20-> Bandit 19-> ls -a. It showed that run a command as another user so ./bandit20-do cat /etc/bandit_pass/bandit20.

Level 20-21-> Bandit 20-> nc -l 32123 < /etc/bandit_pass/bandit20  got a netcat listening on port 32123 tyhen logged in to bandit 20 from another terminal window and accessed suconnect via port 32123 by ./suconnect 32123. Now it will return the password on the first terminal window.

Level 21-22-> Bandit 21-> logged in. cd etc/cron.d/ , cat cron_bandit22.sh , then got the location then cat location another command will get executed. then again got a location then again cat location and got the password.

Level 22-23-> Bandit 22-> cd /etc/cron.d/ , ls -a, cat cronjob_bandit23, got a location and then cat location, then read the instructions and then /etc/cron.d$ echo I am user bandit23 | md5sum | cut -d ' ' -f 1  and cat location.







