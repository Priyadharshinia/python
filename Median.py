n=int(input())
num=[int(i) for i in input().split()]
l=len(num)
if(n==l):
	d=round((l-1)/2) 
	e=sorted(num)
	A=e[d]
print(A)
