Bandit Games - My Approach
Note: “____” are for commands and the sentences following it explain the logic for it.
Lvl 0
“ man ssh”          got to know that -p is for port
“ssh bandit0@bandit.labs.overthewire.org -p 2220   “   port and host from website , connect to host, login to                      game
“bandit0”                password
 Lvl0-Lvl1
“ls”                 listing all files in directory
“cat readme”              printing file content for pwd
Pwd found
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit1@bandit.labs.overthewire.org -p 2220”    connect to host
Lvl1-Lvl2
“ls”                 listing all files in directory
Got dashed(-)  file 
Unable to open it from cat .So searched internet and got to know that ./ has to be used to oped dashed filenames.
“cat ./-”
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
Lvl2-lvl3
“ssh bandit2@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd
“ls”                 listing all files in directory
“ cat "spaces in this filename" ”     as name has spaces and linux treats them as null character I used “ ”
Pwd found
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit3@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd
Lvl3-Lvl4
“ls -a”    using -a (for all) to list hidden file as well
“cd inhere/”   enter hidden directory inhere
“ls -a”      to see all files (including hidden one ) in inhere directory
Got ‘.hidden’ named file
“cat .hidden”      open it to get pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit4@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd
Lvl4-Lvl5
“ls ”    using to list all files
“cd inhere/”   enter directory inhere
“ls ”    using to list all files
Used “file ./-file0x”  {where x=0,1,2,3,4,5,6,7,8,9}  until I got human readable file. ./ used as files are of dashed type.-file07 was of ASCII type (a human readable file).
“cat ./-file07”    open it to get pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit5@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd
Lvl5-Lvl6
“ls ”    using to list all files
“cd inhere/”   enter directory inhere
“find . -size 1033c”   give file ’ maybehere07.file2  ’ as the only applicable file
“cat maybehere07/.file2”  open it to get pwd.
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit6@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd
Lvl6-Lvl7
“find / -user bandit7 -group bandit6 -size 33c”       find command to get file that satisfies all conditions. / used to search entire server
Got the file with pwd
“cat /var/lib/dpkg/info/bandit7.password”  (underlined part is the path to required file) cat to open it and get pwd.
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit7@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd
Lvl7-Lvl8
“ls ”    using to list all files and directories
“grep millionth data.txt”   using grep to find line containing word millionth 
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit8@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd
Lvl8-Lvl9
“ls ”    using to list all files
“sort data.txt | uniq -u”  sorting in ASCII order using sort command and feeding its output to uniq command with -u option in order to get singly repeated line using piping (|)
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit9@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd
Lvl9-Lvl10
“ls ”    using to list all files
“strings data.txt | grep ====”    strings for character sequences and grep for location of == using piping
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit10@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd
Lvl10-Lvl11
“ls ”    using to list all files
“man base64”      got to know that –decode and -d are for decoding
“cat data.txt | bash64 –decode”     cat to open and –decode flag to decode the bash64 data.
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit11@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd
Lvl11-Lvl12
“ls ”    using to list all files
“cat data.txt | tr a-zA-Z n-za-mN-ZA-M” cat to open and tr command to translate to clear text
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit12@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd

Lvl12-Lvl13
“ls ”    using to list all files
   “mkdir /tmp/omk”          making a directory ‘omk’ inside the tmp directory to get read and write          permissions.
“ cp data.txt /tmp/omk”  copy data.txt to omk
“ls”   to confirm
“file data.txt”   for type of file
“xxd -r data.txt data”     reversing hexdump file using xxd  and storing it in new file data
“ls”   new file data seen
“file data” data is of type gzip
“man gzip”  
“mv data data2.gz”     move data to data2,gz for proper gz name extension.
“file data2”  data2 is now of bzip type
“ mv data2 data3.bz2”    {In further steps continuously checking file type, decompressing,renaming until we get a readable file, I had to refer to soln in order to completely solve this level as I was stuck over it for very long time}
“bzip2 -d data3.bz2”
“file data3”
“mv data3 data4.gz”
“gzip -d data4.gz”
“file data4”
“tar -xvf data4”
“tar -xvf data5.bin”
“file data6.bin”
“mv data6.bin data7.bz2”
“bzip2 -d data7.bz2”
“file data7”
“tar -xvf data7”
“file data8.bin”
“mv data8.bin data9.gz”
“gzip -d data9.gz”
“file data9”    ASCII found
“cat data9”       open
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit13@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd

Lvl13-Lvl14
“ls ”    finding ssh private key
“ssh bandit14@localhost -i sshkey.private”using ssh command to login as bandit14 user by using this private SSH key
“cat /etc/bandit_pass/bandit14” open given path to get pwd
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit14@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd


Lvl14-Lvl15
“ls ”    using to list all files
“echo "4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e" | nc localhost 30000”    sending pwd to port 30000 using nc command and echo to pass pwd as argument
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit15@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd

Lvl15-Lvl16
“echo "BfMYroe26WYalil77FoDi9qh59eK5xNr" | openssl s_client -connect localhost:30001 -ign_eof”
Sending pwd of bandit15 to port 30001 
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit16@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd

Lvl16-Lvl17

“nmap localhost -p 31000-32000”    finding open ports in given range 
“ echo "cluFn7wTiGryunymYOu4RcffSxQluehd" | openssl s_client -connect localhost:31790 -ign_eof”
Sending pwd to target port.
“mkdir /tmp/om_ssh”    creating a temporary directory to save private ssh key
“cd /tmp/om_ssh "
“nano om.private”  using the nano editor for creating the private key
Pressing enter, (now private key will be opened to edit using nano) So, pasting the RSA key.
Exiting using Ctrl +x. Pressing ‘y’ to save updates. Nano will now ask us if we want to rename the file.e will use the chmod command to apply the permissions equivalent to 600.
“ chmod 600 om.private” changing permissions of file
 ssh bandit17@localhost -i om.private”
“exit”
“ssh bandit17@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd

Lvl17-Lvl18
“ls”  we get 2 files
“diff passwords.old passwords.new”   comparing both files line by line using diff command{source – hint below question}
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit18@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd

Lvl18-Lvl19
ByeBye dialogue seen. From hint in last lvl logging in as bandit18 user.
“ssh bandit18@localhost” 
“ssh -T bandit18@localhost”
“ls” 
“cat readme”
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit19@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd
Lvl19-Lvl20
“ls”
“./bandit20-do” 
“./bandit20-do cat /etc/bandit_pass/bandit20”   executing command as bandit20 user.
Got pwd
“exit”  Connection to bandit.labs.overthewire.org closed.
“ssh bandit20@bandit.labs.overthewire.org -p 2220”    connect to host and type pwd



































