#priya dharshini
s=input()
n=len(s)
l=[]
r=""
for i in s:
    l.append(i)
for i in range(n):
    r+=l.pop()
if r==s:
    print('YES')
else:
    print('NO'
