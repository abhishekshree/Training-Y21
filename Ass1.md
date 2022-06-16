
level 0:
ssh bandit0@bandit.labs.overthewire.org -p 2220
passwd: bandit0


# level 1:
ls -alps
cat readme
### then get passwd for next level

exit (#exit bandit0)
ssh bandit1@bandit.labs.overthewire.org -p 2220 #(enter bandit 1)
 ###  now enter passwd got from level 0


# level 2:
ls -alps
cat ./-

exit
ssh bandit2@bandit.labs.overthewire.org -p 2220
 ### then write password


# level 3:
ls -alps
cat spaces\ in\ this\ filename
exit
ssh bandit3@bandit.labs.overthewire.org -p 2220
 ### enter passwd

# level 4:
ls alps
cd inhere/
ls -alps
cat.hidden

exit
ssh bandit4@bandit.labs.overthewire.org -p 2220
 ### enter passwd

# level 5
ls -alps
cd inhere/
ls -alps
file ./*  
 ### (by this command we will get that ascii text(human readable) is in file07 so we can easily extract)
cat ./-file07

exit
ssh bandit5@bandit.labs.overthewire.org -p 2220
 ### enter passwd

# level 6
ls -alps
cd inhere/
ls 
find . -size 1033c ! -executable
cat ./maybehere07/.file2

exit
ssh bandit6@bandit.labs.overthewire.org -p 2220
 ### enter passwd


# level 7
find / -type f -user bandit7 -group bandit6 -size 33c 2>/dev/null
 ### (here null is used to suprress all the null files and directories)
 ### and as output we get the file address (required)
cat /var/lib/dpkg/info/bandit7.password

exit
ssh bandit7@bandit.labs.overthewire.org -p 2220
 ### enter passwd


# level 8
ls
grep millionth data.txt

exit
ssh bandit8@bandit.labs.overthewire.org -p 2220
 ### enter passwd


# level 9
sort data.txt | uniq -u

exit
ssh bandit9@bandit.labs.overthewire.org -p 2220
 ### enter passwd

# level 10
strings data.txt | grep ===

exit
ssh bandit10@bandit.labs.overthewire.org -p 2220
 ### enter passwd

# level 11
base64 -d data.txt

exit
ssh bandit11@bandit.labs.overthewire.org -p 2220
 ### enter passwd

# level 12
cat data.txt | tr 'A-Za-z' 'N-ZA-Mn-za-m'

exit
ssh bandit12@bandit.labs.overthewire.org -p 2220
 ### enter passwd

# level 13

ls
mkdir /tmp/myname2091
cp data.txt /tmp/myname2091
cd /tmp/myname2091
xxd -r data.txt finaldata
file finaldata
mv finaldata data.gz
gzip -d data.gz
file data
mv data data.bz2
bzip2 -d data.bz2
file data
mv data data.gz
gzip -d data.gz
file data
mv data data.tar
tar xvf data.tar
file data5.bin
mv data5.bin data5.tar
tar xvf data5.tar
file data6.bin
mv data6.bin data6.tar
tar xvf data6.tar
file data8.bin
mv data8.bin data8.gz
gzip -d data8.gz
file data8
cat data8
rm -rf /tmp/myname2091
ssh bandit13@bandit.labs.overthewire.org -p 2220

# level 13
ls
ssh -i sshkey.private bandit14@localhost
ssh bandit14@bandit.labs.overthewire.org -p 2220


# level 14
ls
cat /etc/bandit_pass/bandit14
telnet localhost 30000
ssh bandit15@bandit.labs.overthewire.org -p 2220

# level 15
cat /etc/bandit_pass/bandit15    
openssl s_client -connect localhost:30001     
ssh bandit16@bandit.labs.overthewire.org -p 2220

# level 16

cat /etc/bandit_pass/bandit16    
openssl s_client --connect localhost:31790    
ssh bandit17@bandit.labs.overthewire.org -p 2220     

# level 17
ls
diff passwords.old passwords.new
42c42
ssh bandit18@bandit.labs.overthewire.org -p 2220


# level 18
ssh -t bandit18@localhost cat readme

# level 19

./bandit20-do cat /etc/bandit_pass/bandit20

# level 20
./suconnect 1234
