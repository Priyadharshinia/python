#priya dharshini
xat,yat,zat = map(int,input().split())
if xat==224:
    print("YES")
elif xat%(yat+zat)==0:
    print("YES")
else:
    print("NO")
