fname = input("Enter file name: ")
if len(fname) < 1 : fname = "mbox-short.txt"

fh = open(fname)
a=list()
b=list()
for line in fh:
    if line.startswith("From"):
        a=line.split()
        if(len(a)<3): continue
        else: b.append(a[1])
b.sort()
print(b[1],b.count(b[1]))