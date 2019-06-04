list1 = [e for e in input().split(" ")]
outlist = []
for i in list1:
	outlist.append(i[::-1])
print(*outlist)
