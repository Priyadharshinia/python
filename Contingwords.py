#priya dharshini
ipt=input()
subst=""
f=0
op=[]
if ipt==ipt[::-1]:
  op.append(0)
for i in range(0,len(ipt)-1):
  for j in range(i+1,len(ipt)):
    subst=ipt[i:j+1]
    if subst==subst[::-1]:
      op.append(len(ipt)-len(subst))
print(min(op))
