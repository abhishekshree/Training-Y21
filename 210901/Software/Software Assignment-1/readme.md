
# OVER THE WIRE BANDIT GAME

### LEVEL 0 
I used the command< ssh bandit0@bandit.labs.overthewire.org -p 2220> to connect remotely to the bandit ssh. Then used the password bandit0.

### LEVEL 0 to 1:-
Used ls to find the name of files in the home directory. Used file to find type of readme. It was an ASCII text file. Used cat to read the readme file. Got the password for the next level.

### LEVEL 1 to 2:-
Used cat<- to read the file. The dash is not usable as file name directly and < is kind of like an escape sequence in C.

### LEVEL 2 to 3:-
Used cat\ in place of spaces. Again the use of escape sequence.

### LEVEL 3 to 4:-
Used cd to go to inhere directory. Used modifier -al with ls to show hidden files. Used cat to read the file. Hidden files start with .

### LEVEL 4 to 5:-
Used file./inhere/\* in the main directory to find file type of all files in inhere. file07 was the only ASCII text file. Used cat to access it.

### LEVEL 5 to 6:-
Used find ./ -readable ! -executable - size 1033c to find the file with required specifications. Used cat to access the file.

### LEVEL 6 to 7:-
Used find / The "." is dropped as I am searching the whole server. -user -size -group was used. One accessible file came up. Used cat to access it.

### LEVEL 7 to 8:-
Used grep to find the line containing the  string "millionth" in data.txt

### LEVEL 8 to 9:-
The file needs to be sorted before i can apply uniq -u. So i used sort data.txt | uniq -u to get the unique line.

### LEVEL 9 to 10:-
Used the strings command to print readable strings along with grep to print strings with "=". strings data.txt | grep "="

### LEVEL 10 to 11:-
Used the base64 file -d command to decode the base 64 text.

### LEVEL 11 to 12:-
Used the tr command to replace a-z with n-za-m

### LEVEL 12 to 13:-
Used the xxd -r command to revert the text file to .gz file. Used mv and file to convert and track the current file. Used gzip for decompressing the .gz file. Then used mv to convert to .bz2. Used bzip2 to decompress again. When tar files were encountered, used tar xvf to decompress. Repeated the process until I got an ASCII text file.

