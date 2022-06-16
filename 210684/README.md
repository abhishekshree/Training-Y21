# OverTheWire Bandit Games

All the steps that were required to clear every level of the bandit game have been listed here.

### Level 0

- Used ```ssh -p 2220 bandit0@bandit.labs.overthewire.org``` to connect to log into the game.
- ```ls``` to see contents.
- ```cat readme``` to see password.
- Logged out and logged into bandit1 user.

### Level 1

- ```cat ./-``` to see password in "-" file.

### Level 2

- ```cat "spaces in this filename"``` to read the file "spaces in this filename"

### Level 3

- ```cd inhere```.
- ```ls -a``` to see the name of the file which contains the password.
- ```cat ./.hidden```.

### Level 4

- ```cd inhere/```.
- ```file ./*``` to find the only file containing human-readable content.
- ```cat ./-file07```.

### Level 5

- ```cd inhere/```.
- ```find -not -executable -readable -size 1033c``` to find the file with the required properties.
- ```cat "./maybehere07/.file2"```.

### Level 6

- ```cd /``` to navigate to root directory.
- ```find -user 'bandit7' -group 'bandit6' -size 33c``` to see files with given properties.
- ```cat ./var/lib/dpkg/info/bandit7.password``` to see the password.

### Level 7

- ```grep -e "millionth" data.txt``` to get the line containing "millionth" which also contains the password.

### Level 8

- ```sort data.txt | uniq -u``` to get the only unique value in the file.

### Level 9

- ```strings data.txt | grep -e "=\+[[:print:]]\+"``` to get readable characters from the binary file and find the required part.

### Level 10

- ```base64 -d data.txt``` to decode and show the base64 encoded data.

### Level 11

- ```tr 'a-zA-Z' 'n-za-mN-ZA-M' < data.txt``` to reverse and print the rotation.

### Level 12

- ```mktemp -d``` to create a temporary directory.
- ```cd /tmp/tmp.XXXXXXXXXX``` (name of directory is hided) to change to temporary directory.
- ```cp ~/data.txt ./``` to copy data file to the temporary directory.
- ```xxd -r data.txt > binaryData``` to convert hexdump to binary and store it in temporary directory.
- ```file binaryData``` to see the type of compression.
- ```mv binaryData binaryData.gz``` to rename the file according to compression format.
- ```gzip --decompress binaryData.gz``` to decompress the file.
- ```file binaryData``` to see the type.
- ```bzip2 --decompress binaryData``` to decompress.
- ```file binaryData.out```.
- ```mv binaryData.out binaryData.gz```.
- ```gzip --decompress binaryData.gz```.
- ```file binaryData```.
- ```tar -xvf binaryData```.
- ```file data5.bin```.
- ```tar -xvf data5.bin```.
- ```file data6.bin```.
- ```bzip2 --decompress data6.bin```.
- ```file data6.bin.out```.
- ```tar -xvf data6.bin.out```.
- ```file data8.bin```.
- ```mv data8.bin data.gz```.
- ```gzip --decompress data.gz```.
- ```file data```.
- ```cat data```.

### Level 13

- ```ssh -i sshkey.private bandit14@localhost``` to login as bandit14.
- ```cat /etc/bandit_pass/bandit14``` to get the password.

### Level 14

- ```echo 'xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx' | nc localhost 30000``` to send the password of Level 14 to the localhost at port 30000 (the password has been hided).

### Level 15

- ```echo "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" | openssl s_client -connect localhost:30001 -ign_eof``` to open an SSL encrypted session and send the password over it.

### Level 16

- ```nmap --open -sV -p 31000-32000 localhost``` to determine open ports in the given range and get the services provided by them. The one with SSL would be the required port.
- ```mktemp -d``` to create temporary directory to store the private key.
- ```echo "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" | openssl s_client -connect localhost:XXXXX -quiet > /tmp/tmp.XXXXXXXXXX/key``` to make the connection and send the returned private to a file in the temporary directory.
- ```chmod 400 /tmp/tmp.XXXXXXXXXX/key``` to change access permissions of the file that enables it to be used as a private key by ```ssh``` command.
- ```ssh -i /tmp/tmp.XXXXXXXXXX/key bandit17@localhost``` to login to the next level.
- ```cat /etc/bandit_pass/bandit17``` to get the password.

### Level 17

- ```diff passwords.old passwords.new``` gives the difference between the two files from which password can be taken.

### Level 18

- ```ssh -p 2220 -t bandit17@bandit.labs.overthewire.org "cat readme"``` to run the command as soon as it connects to the server.

### Level 19

- ```./bandit20-do``` to see how the binary works
- ```./bandit20-do cat /etc/bandit_pass/bandit20``` to access the password.
