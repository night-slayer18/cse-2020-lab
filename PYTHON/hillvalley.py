def hillvalley(l):
    flag=[]
    inc=0
    for i in range(0,len(l)-1):
        if l[i]<=l[i+1]:
            flag.append(0)
        elif l[i]>=l[i+1]:
            flag.append(1)
    for j in range(0,len(flag)-1):
        if flag[j]<flag[j+1]:
            inc+=1
        elif flag[j]>flag[j+1]:
            inc+=1
    if inc==1:
        return True
    else:
        return False
