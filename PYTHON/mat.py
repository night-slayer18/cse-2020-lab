n=int(input())
arr=[]
for i in range(n):
	x=list(map(int,input().split()))
	arr.append(x)
for i in range(n):
	for j in range(n):
		if i<j:
			arr[i][j]=0
for i in range(n-1):
	print(*arr[i],end="")
	print(",",end="")
print(*arr[-1])
