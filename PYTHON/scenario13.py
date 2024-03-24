try:
	m={1:80,2:130,3:100,4:80,5:90,6:110,7:120,8:140,9:70,10:80}
	d={1:0,2:0,3:0,4:0,5:0,6:0,7:0,8:0,9:0,10:0}
	amount=0
	menu=int(input())
	quan=int(input())
	d[menu]=quan
	con = input().lower()
	assert 0<menu<11
	assert 0<quan<21
	assert con in 'yY'
	while con=='y':
		menu=int(input())
		quan=int(input())
		d[menu]=quan
		con = input().lower()
	print(d)
	for key in m.keys():
		if d[key]>0:
			amount+= m[key]*d[key]
	print("Total Amount: %.1f INR"%amount)
except:
	print("Invalid Input")

