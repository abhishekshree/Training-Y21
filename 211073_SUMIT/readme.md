level 0 - open terminal and type <ssh bandit0@bandit.labs.overthewire.org -p2220> and enter password "bandit". then give command <ls>, to see files in home directory , then give command <cat readme>, and I get password for level 1.
level 1-now type exit and then type<ssh bandit1@bandit.labs.overthewire.org -p2220> and enter password. then i give command <ls -a> ,then command <cat ./- >, here i get the password for level 2.
level 2- now I exit again and then type<ssh bandit2@bandit.labs.overthewire.org -p2220>,and enter password,then command <ls>, and then <cat spaces\ in\ this\ filename> and get the password for level 3.
level 3-agin exit and then type<ssh bandit3@bandit.labs.overthewire.org -p2220> ,and enter password, then command <ls>, then "cd inhere" for inhere directory, then I command <ls -a>,then <cat .hidden>, and get password. 
level 4-agin exit and then type<ssh bandit4@bandit.labs.overthewire.org -p2220> ,and enter password, then command <ls -a>, then command <cd inhere>, and then <cat filename>, here fielname is name of file which is readable by human, then get the password for next level. 
level 5-agin exit and then type<ssh bandit5@bandit.labs.overthewire.org -p2220> ,and enter password, then command <ls>,then <cd inhere>, then <ls-a>, then give command <find -type f -size 1033c>, then command <cat filename displayed on screen>, and get password. 
level 6-agin exit and then type<ssh bandit6@bandit.labs.overthewire.org -p2220> ,and enter password, then command <find /-user bandit7 -group bandit6 -size 33c>, then command <cat (filename on screen)>, and get the password.
level 7-agin exit and then type<ssh bandit7@bandit.labs.overthewire.org -p2220> ,and enter password, then command <ls -a>,then use command <data.txt>,and get the password. 
level 8-agin exit and then type<ssh bandit8@bandit.labs.overthewire.org -p2220> ,and enter password, then command <ls -a>, then command <cat data.xt>, and get the password.
level 9-agin exit and then type<ssh bandit9bandit.labs.overthewire.org -p2220> ,and enter password, then command <ls -a>, then use command <strings data.txt | grep "=" >, get the password line which has max."=". 
level 10-agin exit and then type<ssh bandit10@bandit.labs.overthewire.org -p2220> ,and enter password, then command <ls -a>, then <cat data.txt>, then we get a encoded password , then command <echo VGhlIHBhc3N3b3JkIGlzIElGdWt3S0dzRlc4TU9xM0lSRnFyeEUxaHhUTkViVVBSCg== | base64 --decode>, and get the password. 
level 11-agin exit and then type<ssh bandit11@bandit.labs.overthewire.org -p2220> ,and enter password, then command <ls>, then <cat data.txt>, and then < echo (password on screen) | tr [a-zA-Z] [n-za-mN-ZA-M]>, and get real password.
level 12-agin exit and then type<ssh bandit1@bandit.labs.overthewire.org -p2220> ,and enter password, then command <ls>,
level 13-agin exit and then type<ssh bandit13@bandit.labs.overthewire.org -p2220> ,and enter password, then command <ls -a>,and then <ssh -i sshkey.private bandit14@localhost >,and then "yes". and get password. 
level 14-agin exit and then type<ssh bandit14@bandit.labs.overthewire.org -p2220> ,and enter password, then command <telnet localhost 30000>,n and enter previous password, and get new password. 
level 15-agin exit and then type<ssh bandit15@bandit.labs.overthewire.org -p2220> ,and enter password, then command <openssl s_client -ign_eof -connect localhost:30001>,and enter previous password and get new passord. 
and we are in level 16. 