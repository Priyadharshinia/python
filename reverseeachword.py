list1 = [word for word in input().split(" ")]
outlist = []
for i in list1:
	outlist.append(i[::-1])
print(*outlist)
