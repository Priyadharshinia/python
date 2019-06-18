#priya dharshini
mat,jit=map(str,input().split())
sat=0
if len(mat)>len(jit):
  mat,jit=jit,mat
i=0
while i<len(mat):
  sat+=(ord(jit[i])-ord(mat[i]))
  i+=1
for i in range(i,len(jit)):
  sat+=ord(jit[i])-ord('a')+1
print(sat)
