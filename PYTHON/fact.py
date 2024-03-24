n=int(input())
i=n-1
ans=n
while(i>0):
	res=0
	for j in range(i):
		res+=ans
	i-=1
	ans=res
print(ans)
