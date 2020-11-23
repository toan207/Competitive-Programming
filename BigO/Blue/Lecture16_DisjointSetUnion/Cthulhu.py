# https://codeforces.com/problemset/problem/104/C

import sys

def getroot(lab, u):
    if lab[u] == -1:
        return u
    lab[u] = getroot(lab, lab[u])
    return lab[u]

def union(lab, cou, a, b):
    if cou[a] > cou[b]:
        cou[a] += cou[b]
        lab[b] = a
    else:
        cou[b] += cou[a]
        lab[a] = b

def inp():
    return map(int, input().split())

def solve():
    n, m = inp()
    lab = [-1 for i in range(n)]
    cou = [1 for i in range(n)]

    if n != m:
        print("NO") #impossible
        return

    for i in range(m):
        u, v = inp()
        u = getroot(lab, u-1)
        v = getroot(lab, v-1)
        if u != v:
            union(lab, cou, u, v)
    if lab.count(-1) > 1: #not connected
        print("NO")
        return 

    print("FHTAGN!")

solve()