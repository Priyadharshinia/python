s1=int(input())
n2=list(map(int,input().split()))
L=[]
L.append(sum(n2))
for i in range(0,s1-1):
  a,a1=n2[:i+1],n2[i+1:]
  if sum(a)>sum(a1):
    L.append(sum(a))
  else:
    L.append(sum(a1))
print(max(L))
