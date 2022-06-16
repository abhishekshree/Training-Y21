bandit.labs.overthewire.org
# Level 0
1). Connected to the server using =>
    ssh bandit0@bandit.labs.overthewire.org -p 2220

2). Displayed all directories using =>
    ls

3). Used cat to show contents to readme file =>
    cat readme

pass: boJ9jbbUNNfktd78OOpsqOltutMc3MY1

# Level 1
1). Used ls to see files =>

2). Used cat to read file =>
    cat ./-

pass: CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9

# Level 2
1). Used ls =>

2). Used cat =>
    cat "spaces in this filename"

pass: UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK

# Level 3
1). Moved into the inhere dir =>
    cd inhere

2). Showed hidden contents using =>
    ls -a

3). Read the hidden file =>
    cat .hidden

pass: 

# Level 4
1). Moved into inhere directory =>
    cd inhere

2). Showed all files =>
    cd inhere

3). Viewied all files using =>
    cat ./-file07

pass: koReBOKuIDDepwhWk7jZC0RTdopnAYKh

# Level 5
1). Found the file using =>
    find . -size 1033c

2). Read the file using =>
    cat ./maybehere07/.file2

pass: DXjZPULLxYr17uwoI01bNLQbtFemEgo7     

# Level 6
1). Found the file using find command =>
    find / -user bandit7 -group bandit6 -size 33c

2). Read the file using cat =>
    cat /var/lib/dpkg/info/bandit7.password

pass: HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs

# Level 7
1). Found the line using => 
    grep -R millionth

pass: cvX2JJa4CFALtqS87jk27qwqGhBM9plV

# Level 8
1). Found the line using => cat data.txt | sort | uniq -u

pass: UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR

# Level 9
1). Found line using => strings data.txt | grep "="

pass: truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk

# Level 10
1). Found pass using => cat data.txt | base64 -- decode

pass: IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR

# Level 11
1). Used tr command to translate the characters in data.txt and read the file using cat =>
    cat data.txt | tr 'a-z' 'n-za-m' | tr 'A-Z' 'N-ZA-M'

pass: 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu

# Level 12
1). Made a new directry using mkdir called soln =>
    mkdir /tmp/soln

2). Copied the data file into the new directory =>
    cp data.txt /tmp/soln

3). Moved into the new directory
    cd /tmp/soln

4). Did reverse hexdump using xxd -r, created new file called output =>
    xxd -r data.txt >output

5). Used file to get info about the new file =>
    file output

6). Renamed the file to decompress it =>
    mv output output.gz

7). Decompressed gzip =>
    gzip -d output.gz

8). Used file again =>
    file output

9). Renamed to decompress =>
    mv output output.bz2

10). Decompressed using bzip2 =>
    bzip2 -d output.bz2

11). Used file again =>
    file output

12). Renamed to decompressed =>
    mv output output.gz

13). Decompressed using gzip =>
    gzip -d output.gz

14). Used file again =>
    file output

15). Renamed to decompresss=>
    mv output output.tar

16). Decompressed using tar, this created a new file =>
    tar xvf output.tar

17). Used file again =>
    file data5.bin

18). Decompressed again =>
    tar -xvf data5.bin

19). Used file on new file =>
    file data6.bin

20). Renamed to decompressed =>
    mv data6.bin data6.bz2

21). Decompressed =>
    bzip2 -d data6.bz2

22). Used file =>
    file data6

23). Renamed to decompress =>
    mv data6 data6.tar

24). Decompressed =>
    tar -xvf data6.tar

25). Used file again =>
    file data8.bin

26). Renamed and decompressed =>
    mv data8.bin data8.gz
    gzip -d data8.gz

27). Read file using cat =>
    cat data8

pass: 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL

# Level 13
1). Used private key to login as bandit14 =>
    ssh -i sshkey.private bandit14@localhost

2). Used cat to read the file =>
    cat /etc/bandit_pass/bandit14  

pass: 4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e

# Level 14
1). Sent the data to the required port using =>
    echo 4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e | nc localhost 30000

pass: BfMYroe26WYalil77FoDi9qh59eK5xNr

# Level 15

1). Connected to localhost 300001 using openssl =>
    openssl s_clienet -connect localhost:30001

2). Typed previous pass to get new pass =>
    BfMYroe26WYalil77FoDi9qh59eK5xNr

pass: cluFn7wTiGryunymYOu4RcffSxQluehd

# Level 16
1). Scanned all the ports using nmap =>
    nmap -p 31000-32000 localhost

2). Tried connecting to each of the scanned ports to find which one has echo enabled =>
    openssl s_client -connect localhost:31790

3). This gave a private key. Made a file in the tmp directory to store it =>
    mkdir /tmp/key

4). Moved into the directory and saved the key in sshkey.private file
    cat > sshkey.private

5). Changed the permission of key to not keep it open =>
    chmod 600 sshkey.private

6). Logged in as bandit17 using the private key =>
    ssh -i sshkey.private bandit17@localhost

# Level 17
1). To find the differece between the files I used => grep -Fxvf passwords.old passwords.new

pass: kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd

# Level 18
1). Logging in usually kicked me out so used -T option of the ssh command =>
    ssh -T  bandit18@bandit.labs.overthewire.org -p 2220

2). Read the file using cat => 
    cat readme

pass: IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x

# Level 19
1). To run the command us bandit20 i used the setuid binarry file =>
    ./bandit20-do cat /etc/bandit_pass/bandit20

pass: GbKksEFF4yrVs6il55v6gwY5aVje5f0j



