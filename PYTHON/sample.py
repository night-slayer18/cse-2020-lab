n=input()
s=""
for i in range(len(n)-1):
	if n[i]=='E' and n[i+1]=='F':
		s=n[:n.index('E')]+n[n.index('F'):]
	if n[i]=='G':
		s=n[:n.index('G')]+n[n.index('G')+1:]
print(s)
