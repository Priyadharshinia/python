#priyadharshini
rat=int(input())

gat=[]
 
for i in range(rat):
 
    li=[]
 
    li=list(map(int,input().split()))
 
    gat.append(li)
 
 
 
fat=[]   
 
for i in gat:
 
    for j in i:
 
        fat.append(j)
 
fat.sort()
 
for i in fat:
 
    print(i,end=" ")
