ty = []
sy = []

try:
	while(True):
		  s = input().upper()
		  if s=="": break
		  if s[:2] in ['TY', 'SY'] and s[2:] in ['01', '02', '03', '04', '05']:
		      if s[:2] == 'TY':
		          ty.append(s)
		      elif s[:2] == 'SY':
		          sy.append(s)
		  else:
		      print("INVALID INPUT")
		      exit(1)
except:
	pass

ty.sort()
sy.sort()
ty_count = len(ty)
sy_count = len(sy)
new1 = [ty[i][2:] for i in range(ty_count)]
new2 = [sy[i][2:] for i in range(sy_count)]

while len(ty) < 5:
    for i in new2:
        if i not in new1:
            index = int(i[-1])
            ty.insert(index - 1, "ABSENT")

while len(sy) < 5:
    for i in new1:
        if i not in new2:
            index = int(i[-1])
            sy.insert(index - 1, "ABSENT")

if sy != [] and ty != []:
    for i in range(5):
        print(f"[{ty[i]}][{sy[i]}]")

