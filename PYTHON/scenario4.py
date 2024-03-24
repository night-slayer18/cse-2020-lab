s=input()
x=s.count('*')
y=s.count('#')
if x==y:
	print(0)
elif x>y:
	print(x-y)
else:
	print(x-y)
