#priya dharshini
s=input()
k=""
l=["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
for i in s:
	k=k+i.lower()
p=list(set(list(k)))
p.sort()
if p.count(" ")==1:
	p.remove(" ")
if l==p:
	print("yes")
else:
	print("no")
