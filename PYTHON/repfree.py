def repfree(s):
	count=1
	for i in range(0,len(s)):
		for j in range(i+1,len(s)):
			if (s[i]==s[j] and s[i]!=""):
				count=count+1
	if count==1:
		return True
	else:
		return False
