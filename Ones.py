#priya dharshini
p,a=map(int,input().split())
array=list(map(int,input().split()))
temp=[]
for i in range(0,a):
    f=list(map(int,input().split()))
    l=f[0]
    for j in range(min(f)-1,max(f)):
        if l>array[j]:
        	l=array[j]
    temp.append(l)
for i in range(0,len(temp)):
    print(temp[i])
