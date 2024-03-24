try:
    n=int(input())
    assert 1<=n<=25
    e=[]
    l=[]
    for i in range(n):
        x=int(input)
        assert 0<=x<=500
        e.append(x)
        
    for i in range(n):
        x=int(input)
        assert 0<=x<=500
        l.append(x)
    ans=0
    res=0
    for i in range(n):
        res+=e[i]-l[i]
        if res<0:
            exit(0)
        ans=max(ans,res)
    print(ans)  
except:
    print("Invalid Input")
