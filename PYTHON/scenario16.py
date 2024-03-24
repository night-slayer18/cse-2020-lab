try:
	n=int(input())
	assert 3<=n<=50
	d={}
	l=[input() for i in range(n)]
	for i in l:
		assert i.isalpha()
		d[i]=d.get(i,0)+1
	for key in d.keys():
		if d[key]%2==1:
		      print(key)
		      break
except:
	print("Invalid Input")
