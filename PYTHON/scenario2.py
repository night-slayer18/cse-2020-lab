s=input()
l=[]
count=0
while(s!='q' and s!='Q'):
	l.append(s)
	s=input()
if len(l)!=5:
	print("INPUT LIMIT IS 5")
else:
	for i in l:
		if len(i)==10 and i.isnumeric():
			count+=1
	print(count)
