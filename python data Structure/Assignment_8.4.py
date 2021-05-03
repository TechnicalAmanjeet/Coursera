fname = input("Enter file name: ")
fh = open(fname)
a = list()
b=list()
for line in fh:
    a=line.split()
    for i in a:
        if i not in b: b.append(i)
b.sort()

print(b)