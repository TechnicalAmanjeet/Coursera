fname = input("Enter file name: ")
if len(fname) < 1 : fname = "mbox-short.txt"

fh = open(fname)
count = 0
a=list()
b="aman"
for line in fh:
    if line.startswith("From"):
        a=line.split()
        if(len(a)<3): continue
        else: print(a[1])
        b=a[1]
        count+=1

print("There were", count, "lines in the file with From as the first word")
