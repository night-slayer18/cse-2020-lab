d={'a':0,'e':0,'i':0,'o':0,'u':0}
s=input()
for char in s:
    if not char.isalpha() and not char.isspace():
        print("Invalid Input")
        exit(0)
copy=s.lower()
new=""
c=0
for i in copy:
    if i in ['a','e','i','o','u']:        
        d[i]+=1
        c+=1
if c>0:
    for i in d.keys():
        print(f"{i}:{d[i]}")
    for i in s:
        if i in 'AEIOUaeiou':
            pass
        else:
            new+=i
    print(new)
else:
    print(0)

