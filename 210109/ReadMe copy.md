#Level 0
installed git using homebrew.
opened the repository using the SSH(port 2220) command.
entered "ls" to get all the files in the repository.
then "cat readme" to read the file.
copied the password for the next level, and exit.

#Level 1
entered level 1 using the ssh command and password from last level.
used the "ls" command to get the file named "-"
googled "dashed filename" and went to the first link stock overflow.
since it's a special character, used "cat ./-" to read the file and extract the password.
exit.

#Level 2
entered level 2 using the ssh command and password from last level.
googled "spaces in filename"
made a few errors using the "/" character.
finally used the "tab" key to cat the file.
extracted the password and exit.

#Level 3
entered level 3 using the ssh command and password from last level.
entered the inhere directory using "cd" command.
googled "how to access hidden files in a directory on git".
used the "-a" command to access the hidden file ".hidden".
extracted the password using "cat" and exit.

#Level 4
entered level 4 using the ssh command and password from last level.
googled "how to access only human readable files in git".
used the find command to get the number of files in the inhere directory.
then used the find command with ". -type f -exec file{} + | grep -w text" command to get the files with text in them.
used the "cat" command to extract the password and exit.


#Level 5
entered level 5 using the ssh command and password from last level.
used the "cd" command to enter the inhere directory.
used the last level google search to get find the respective file.
using the attributes "-size 1033c" and "-executable -exec file {}"
used cat command to read the password and exit.

#Level 6
entered level 6 using the ssh command and password from last level.
used the "-size 33c" attribute.
googled "how to find the files owned by a user on git".
used "-user bandit7" and "-group bandit6" to get all the files owned by them.
removed the "permission denied" files and used the .password file.
used cat to extract the password from the file and exit.

#Level 7
entered level 7 using the ssh command and password from last level.
used the "cat" command, got a whole lot of text. (failed)
googled "grep command".
used the grep command to find the word millionth in the data.txt file.
extracted the password from next to it and exit.

#Level 8
entered level 8 using the ssh command and password from last level.
googled how to find a unique line in a .txt file on git.
used the sort command with the uniq -u attribute.
extracted the password using cat and exit.

#Level 9
entered level 9 using the ssh command and password from last level.
googled "how to find a string in a file with several '='"
since the file is binary, used the string command to get human readable strings.
used the "grep -E "=+" command.
got all the strings, extracted the password and exit.

#Level 10
entered level 10 using the ssh command and password from last level.
used the "file" command to get that the file is in ASCII text.
googled "how to decode base64 data into text".
used the "base64 --decode" command to decode the file.
got the password and exit.

#Level 11
entered level 11 using the ssh command and password from last level.
used the ls command to get the files.
googled "how to decode a ROT13 file in terminal"
used the echo and tr commands on the text in data.txt for ROT13.
extracted the password and exit.

#Level 12
entered level 12 using the ssh command and password from last level.
created a new directory "/tmp/Aman123" using mkdir command.
copied the data.txt file to this new directory using the cp command.
entered the directory using cd command and used file command to get the data type of data.txt - ASCII text
googled "how to extract a hexdump file".
used "xxd -r -p data.txt" command to convert the hexdump file back to it's original format.
now used the "mv" command to change the extension of new file to .gz
used "gzip -d data.gz" to unzip the file and used the "file" command.
since it was a bzip2 compressed data, again used similar extraction by changing the extension and using "bzip2 -d data.bz2".
also used the "tar xvf" command to
similar process is repeated unless the data type becomes ASCII Text.
then extracted the password.
used "rm -rf" to delete the directory and exit.

#Level 13
entered level 13 using the ssh command and password from last level.
googled "how to use a key on git"
used ls command to get the available files.
used the ssh -i sshkey.private bandit14@localhost to log into level 14
used the cat command to extract the password.

#Level 14
was already in level 14 using the last level.
used the echo command along with nc to transfer the password to port 30000 on localhost.
extracted the password and exit.

#Level 15
entered level 15 using the ssh command and password from last level.
tried using the echo command but failed.
googled "how to use ssl encryption to connect to a port on localhost"
used openssl to connect to port 30001
entered the level 15 password and got the new password.
exit.

#Level 16
entered level 16 using the ssh command and password from last level.
used the nmap command to traverse through all the ports between 31000-32000
returns that 996 ports are closed and out of the remaining 4, only one port(31790) accepts the ssl service.
therefore we connect to the 31790 port using openssl.
then we enter the current password and get the private key.
copied the key and used the "vim" command to create a new file with the key.
used "chmod 400" to apply the permissions
then used ssh -i command to use the key to enter level 17.

#Level 17
was already in level 17 during 16.
used the diff command alone, but failed.
used man diff to get the manual of diff.
used diff --suppress-common-lines to separate the passwords.
extracted the password from new one and exit.

#Level 18
entered level 18 using the ssh command and password from last level.
googled "how to enter a home directory if you're getting logged out"
used the -t command along with ssh and used the /bin/sh as shell.
got into the home directory and used ls to get all the files.
used cat on the readme file.
extracted the password and exit.

#Level 19
entered level 19 using the ssh command and password from last level.
googled "how to use setuid binary"
then used the "./bandit20-do" to find the file and used cat on the given location to get the password.
exit.

#Level 20
entered level 20 using the ssh command and password from last level.
googled "how to create a new port to listen to inputs."
created a port "1234" in the bandit_pass/bandit20 directory using the nc command.
used the "-l" command to make it listen.
entered the server again from a new window and used the "./suconnect" command to enter the new port.
gave the current password.
it matched and the new password was sent to the other terminal.
copied the password and exited from both the terminals.
