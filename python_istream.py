# A fast Python2 I/O Template

from sys import stdin, stdout
#stdin = open("", 'r')   # CHANGE IF READING FROM FILES
#stdout = open("", 'w')  # CHANGE IF WRITING TO FILES
raw_input = stdin.readline
sraw_input = lambda: stdin.readline().strip()
readint = lambda: int(stdin.readline())
write = lambda arg: stdout.write(str(arg))
writeln = lambda arg: stdout.write(str(arg)+'\n')
strtok = lambda: stdin.readline().split()
tokenise = lambda t: map(t, strtok())

# ==========================================


# external functions and variables go here

def main():
    # code goes here
    stdout.flush()
    return 0

main()
