a,b=map(int,input().split()) 
for n in range(a,b):
    t=n
    arm=0
    while(t>0):
    	r=t%10
    	arm=arm+pow(r,3)
    	t=t//10
    if(n==arm):
        print(arm,end=" ")
	
