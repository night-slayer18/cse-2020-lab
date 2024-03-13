def remdup(l):
	r=[]
	for i in l:
		if i not in r:
			r.append(i)
	return(r)
