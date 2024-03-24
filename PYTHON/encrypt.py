import math
s=input()
fv=math.floor(math.sqrt(len(s)))
cv=math.ceil(math.sqrt(len(s)))
if fv*cv<len(s):
	fv=cv
a=[]
r=""
for i in range(fv):
	r=s[:cv]
	s=s[cv:]
	if len(r)!=cv:
		r+=" "*(cv-len(r))
	a.append(r)
for i in range(len(a[0])):
    print(''.join([word[i] for word in a]))
