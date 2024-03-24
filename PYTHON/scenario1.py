n=int(input())
l=list(map(int,input().split()))
while(l!=[]):
		print(max(l),end=" ")
		l.remove(max(l))
		if l==[]:
			break;
		print(min(l),end=" ")
		l.remove(min(l))


