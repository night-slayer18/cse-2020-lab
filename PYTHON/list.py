n=int(input())
l=list(map(int,input().split()))
count=0
for i in range(n):
	for j in range(i+1,n):
		if (l[i]+l[j])//2 in l:
			count+=1
print(count)
