# priya dharshini 
n=int(input())
lst=list(map(int,input().split()))
m1=[]
a1=1
for i in range(n-1):
    if lst[i]<lst[i+1]:
        a1+=1
    else:
        m1.append(a1)
        a1=1
m1.append(a1)
print(max(m1))
