def sumsquares(l):
	list=[]
	sum1=0
	sum2=0
	for i in range(len(l)):
		if l[i]%2!=0:
			sum1=sum1+l[i]**2
		else:
			sum2=sum2+l[i]**2
	list.append(sum1)
	list.append(sum2)
	return(list)
