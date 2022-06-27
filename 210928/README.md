# Steps to clear Bandit 

## Sanyam Jain(210928)

### Level 0 

- Enter using command < ssh -p 2220 bandit0@bandit.labs.overthe0-wire.org >
- Where < -p > represent port
- Entered the given password i.e bandit0 to proceed

### Level 0 -> 1

- First check files using < ls > command
- Read the readme file using < cat > command where I got the password
- Using < exit > command to get out and then enter < ssh -p 2220 bandit1@bandit.labs.overthe0-wire.org >
- Entered the password to proceed

### Level 1 -> 2

- Use command < cat./- > before entering name of file we want to read beacause it has "-" before the file
- Got the password, enterd the password following the method used above to proceed

### Level 2 -> 3 

- Read the file using command < cat spaces\ in\ this\ filename > , we use this because there was space between name of file
- Got the password, enterd the password following the method used above to proceed

### Level 3 -> 4 

- Enter into inhere directory using command < cd inhere/ > 
- Check all files in it using < ls > 
- Read .hidden file using command < cat .hidden >
- Got the password, enterd the password following the method used above to proceed

### Level 4 -> 5

- First we enter inhere directory and then see file inside it and see there are 10 files
- Then we use command < find. -type f | xargs file > to find only human readable file
- We found that named -file07 is the file we looking for and then read it
- Got the password, enterd the password following the method used above to proceed

### Level 5 -> 6

- First we enter inhere directory
- Then we use command < find . -type f -size 1033c ! -executable > and then we got the name of the file
- In above command 'c' represent byte and '!' means not or opposite of what we right next to it
- Then read the file that we that we get
- Got the password, enterd the password following the method used above to proceed

### Level 6 -> 7

- As we need to find file with specific properties so we use command < find / -type f -user bandit7 -group bandit 6 -size 33c >
- Executing it we got the location where password is stored and then enter it next
- Got the password, enterd the password following the method used above to proceed

### Level 7 -> 8

- First we check matter in file data.txt and see a lot of strings in which manually finding any particular word is difficult
- Then we use command < strings data.txt | grep "millionth" > and then get the line with millionth which also contain password
- In above command 'grep' helps to print lines that match patterns
- Got the password, enterd the password following the method used above to proceed

### Level 8 -> 9

- First we read file data.txt and realise manually finding single line in quite difficult so we try another method
- So we use command < sort data.txt > to sort so we can now easily identify the unique line which is our password
- Got the password, enterd the password following the method used above to proceed

### Level 9 -> 10

- We use command < strings data.txt | grep "=" > as mentioned in problem that password is preceded by several ‘=’ characters
- We can easily obsereve the password in the options we got
- Got the password, enterd the password following the method used above to proceed

### Level 10 -> 11

- We read the data.txt file and got very weird text
- Now we use command < base64 -d data.txt > in this '-d' means decode
- After decoding we can clearly see the password
- Got the password, enterd the password following the method used above to proceed

### Level 11 -> 12

- First we read the file data.txt and copy the line
- We can easily sort the line by using Rot13 from google 
- Got the password, enterd the password following the method used above to proceed

### Level 12 -> 13

- Reading the data.txt we see weird mixture of number, symbol and alphabets
- Now we make new directory by command 'mkdir' and then naming the file like < mkdir /tmp/dead >
- Then we enter the directory made by us
- Now we copy file data.txt to our directory by using command < cp data.txt /tmp/dead >
- Now we want to convert this from hexdump which we can do it by command < xxd -r data.txt > data > in this 'r' means reverse and we store this in file name data but after it we get compressed file
- So now we need to decompress it
- Now we need to check status of filewhich we can do by using command 'file' and then move which we can do by command 'mv' and then decode until we get ASCII text which is our password
- Got the password, enterd the password following the method used above to proceed

### Level 13 -> 14

- We use command < ssh -i sshkey.private bandit14@localhost > to login as user bandit14 
- Now we read /etc/bandit_pass/bandit14 and get the password

### Level 14 -> 15

- Now we use command < nc localhost 30000 > in which command 'nc' help to change port and then we enter password that we got in the previous level
- Got the password, enterd the password following the method used above to proceed

### Level 15 -> 16

- We use command < ncat --ssl localhost 30001 > 
- Enter the previous password
- Got the password, enterd the password following the method used above to proceed

### Level 16 -> 17

- First we need to find port between 31000 to 32000 which have a server listening on them so we use command < nmap localhost -p -31000-32000 > in this command 'nmap' help in scanning ports
- Executing above command we got five ports
- Manually checking we find is 31790 is the port in which we want to work











