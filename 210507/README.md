# hello! 
# Added another line.

# ssh bandit0@bandit.labs.overthewire.org -p 2220

### level 0 

# cat readme
# logout
# ssh bandit1@bandit.labs.overthewire.org -p 2220

### level 1

# ls
# cat ./-
# logout
# ssh bandit2@bandit.labs.overthewire.org -p 2220

### level 2

# ls -la
# cat spaces\ in\ this\ filename
# logout
# ssh bandit3@bandit.labs.overthewire.org -p 2220

### level 3 

# ls -la
# cd inhere
# ls -la
# cat .hidden
# file home/bandit4
# logout
# ssh bandit4@bandit.labs.overthewire.org -p 2220

### level 4

# ls -la
# du home/bandit4 
# file *
# file inhere/*
## we get to know the humand readable file here i.e., file07
# cd inhere
# cat ./-file07
# logout
# ssh bandit5@bandit.labs.overthewire.org -p 2220

### level 5

# ls -la
# find -type f -size 1033c
# cat ./maybehere07/.file2
# logout
# ssh bandit6@bandit.labs.overthewire.org -p 2220

### level 6 

# ls -la
# find -user bandit7 -size 33c
# logout
# ssh bandit7@bandit.labs.overthewire.org -p 2220

### level 7 

