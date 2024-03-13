def threesquares(n):
	if n<0:
		return False
	for i in range(0, int(n**0.5)  + 1 ):
		for j in range(0, int(n**0.5) + 1 ):
			for k in range(0, int(n**0.5) + 1 ):
				m = i**2 + j**2 + k**2
				if m==n:
					return True
				elif m>n:
					break
	return False
