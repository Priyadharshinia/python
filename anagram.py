#priya dharshini
from itertools import permutations
values=list(permutations(['d','h','o','n','i']))
a=input()
m=[]
for i in values:
  if i not in m:
    m.append(''.join(i))
for i in m:
  if i==a:
    print('yes')
    break
else:
  print('no')
