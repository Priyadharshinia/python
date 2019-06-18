#priya dharshini
np=int(input())
mp=list(map(int,input().split()))
dp=tp=[]
for i in range(0,np):
    dp=list(bin(mp[i]))
    dp=dp[2:]
    tp.append(dp)
tp=sorted(tp)
tp=tp[::-1]
for i in range(0,np):
    kp=1
    xp=0
    for j in range(len(tp[i])-1,-1,-1):
        xp=xp+(int(tp[i][j])*kp)
        kp=kp*2
    print(xp)
