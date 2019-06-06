name1,mark1,mark2,mark3=map(str,input().split("#"))
name2,marks1,marks2,marks3=map(str,input().split("#"))
if mark1+mark2+mark3>marks1+marks2+marks3:
  print(name1)
else:
  print(name2)
