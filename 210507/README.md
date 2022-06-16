### hello! 
### Added another line.

### ssh bandit0@bandit.labs.overthewire.org -p 2220

## level 0 

### cat readme
### logout
### ssh bandit1@bandit.labs.overthewire.org -p 2220

## level 1

### ls
### cat ./-
### logout
### ssh bandit2@bandit.labs.overthewire.org -p 2220

## level 2

### ls -la
### cat spaces\ in\ this\ filename
### logout
### ssh bandit3@bandit.labs.overthewire.org -p 2220

## level 3 

### ls -la
### cd inhere
### ls -la
### cat .hidden
### file home/bandit4
### logout
### ssh bandit4@bandit.labs.overthewire.org -p 2220

## level 4

### ls -la
### du home/bandit4 
### file *
### file inhere/*
### we get to know the humand readable file here i.e., file07
### cd inhere
### cat ./-file07
### logout
### ssh bandit5@bandit.labs.overthewire.org -p 2220

## level 5

### ls -la
### find -type f -size 1033c
### cat ./maybehere07/.file2
### logout
### ssh bandit6@bandit.labs.overthewire.org -p 2220

## level 6 

### ls -la
### find -user bandit7 -size 33c
### logout
### ssh bandit7@bandit.labs.overthewire.org -p 2220

## level 7 

### ls -la
### grep -A 0 millionth data.txt

## level 8

### ls -la
### cat data.txt | sort | uniq -u

## level 9

### ls -la
### strings data.txt | grep "="

## level 10 

### ls -la 
### cat data.txt 
### echo ="" | base64 --decode

## level 11 

### ls -a
### cat data.txt
### echo Gur cnffjbeq vf "" | tr 

## level 12 

### ls -la
### mkdir /tmp/keshav
### xxd -r data.txt > /tmp/keshav/new
### cd /tmp/keshav
### ls -la
### file new
### cat file
 
## level 13

### ls -la 
### ssh -i sshkey.private bandit14@localhost
### yes
### cat /etc/bandit_pass/bandit14

## level 14

### telnet localhost 30000

## level 15

### opensl s_client -connect localhost:30001

## level 16

### nmap -p 31000-32000 -sV localhost
### echo "" | openssl s_connect -connect localhost:3151
### echo "" | openssl s_connect -connect localhost:31790
### mkdir /tmp/new
### cd /tmp/new
### nano sshkey.private
### chmod 600 sshkey.private
### ssh -i ./sshkey.private bandit17@localhost

## level 17

### ls -la
### diff passwords.new passwords.old

## level 18

### ssh bandit18@bandit.labs.overthewire.org "bash --norc"
### ls -la
### cat readme

## level 19

### ls -la
### ./bandit20-do 
### cat /etc/bandit_pass/bandit20

## level 20

### ls -la
### nc -1 32123 < /etc/bandit_pass/bandit20
### ls -la
### ./suconnect 32123

