a=int(input())
flag=0
if(a>1):
	for i in range(2,a):
		if(a%i==0):
			flag=1
			break
if(flag==1 or a==1):
	print("no")
else:
	print("yes")
