#priya dharshini
word=input()
list=[]
for i in word:
	if i not in list:
		list.append(i)
	else:
		break
print(len(list))
