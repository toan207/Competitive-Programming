# https://bigocoder.com/courses/OBLUE01/OBLUE01_LEC16/BLUE_L16P04

import sys
sys.setrecursionlimit(10000)

def find(u):
    if parent[u] != u:
        parent[u] = find(parent[u])
    return parent[u]

def UnionSet(u,v):
    up = find(u)
    vp = find(v)
    if up == vp:
        return
    if ranks[up] > ranks[vp]:
        parent[vp] = up
    elif ranks[up] < ranks[vp]:
        parent[up] = vp
    else:
        parent[up] = vp
        ranks[vp] += 1

def enemyID(u):
    return u+n

n = int(input())
ranks = [0 for i in range (n*2)]
parent = [i for i in range (n*2)]

while True:
    c,u,v = map(int,input().split())
    if u == v == c == 0:
        break
    if c == 1:
        if find(u) == find(enemyID(v)) or find(enemyID(u)) == find(v):
            print(-1)
            continue
        UnionSet(u,v)
        UnionSet(enemyID(u),enemyID(v))
    elif c == 2:
        if find(u) == find(v) or find(enemyID(u)) == find(enemyID(v)):
            print(-1)
            continue
        UnionSet(u,enemyID(v))
        UnionSet(v,enemyID(u))
    elif c == 3:
        if find(u) == find(v) or find(enemyID(u)) == find(enemyID(v)):
            print(1)
        else:
            print(0)
    else:
        if find(u) == find(enemyID(v)) or find(v) == find(enemyID(u)):
            print(1)
        else:
            print(0)