def addpoly(p1, p2):
    r = list()
    for a in range(len(p1)):
        
        for j in range(len(p2)):
            if p1[a][1] == p2[j][1]:
                r += [(p1[a][0] + p2[j][0], p1[a][1])]

        
        for k in range(len(r)):
            if r[k][1] == p1[a][1]:
                break
        else:
            r += [p1[a]]

    
    for j in range(len(p2)):
        for k in range(len(r)):
            if r[k][1] == p2[j][1]:
                break
        else:
            r += [p2[j]]

    r = [(c, e) for (c, e) in r if c != 0]  
    r.sort(key= lambda l : l[1], reverse=True) 

    return r
def multpoly(p1, p2):
    r = list()
    for i in range(len(p1)):
        for j in range(len(p2)):
            r = addpoly([(p1[i][0] * p2[j][0], p1[i][1] + p2[j][1])], r)

    return r
