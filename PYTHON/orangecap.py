def orangecap(d):
    scr = dict()
    for m in d:
        for p in d[m]:
            if p in scr:
                scr[p] += d[m][p]
            else:
                scr[p] = d[m][p]

   
    pn=str()
    tscr=0
    for p in scr:
        if scr[p] > tscr:
            tscr = scr[p]
            pn = p

    return (pn, tscr)
