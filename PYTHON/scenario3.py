n=int(input())
l=[]
for _ in range(n):
	l.append(int(input()))
c=l.count(0);
while 0 in l:
	l.remove(0)
print(*l,end=" ")
print('0 '*c)
