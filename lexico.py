str=input()
flag=0
for i in range(0,len(str)-1):
  for j in range(i+1,len(str)):
    if str[i]<str[j]:
      flag=1
      print(str[j:])
      break
  if flag==1:
    break
else:
  print(str)
