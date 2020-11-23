# https://codeforces.com/contest/217/problem/A

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

n = int(input())
parent = {}
ranks = {}
X = []
Y = []
for i in range (n):
    x,y = map(int,input().split())
    X.append(x)
    Y.append(y)
    parent[(x,y)] = (x,y)
    ranks[(x,y)] = 0

for i in range (n):
    for j in range (n):
        if X[i] == X[j] or Y[j] == Y[i]:
            UnionSet((X[i],Y[i]),(X[j],Y[j]))

drifs = []
for i in parent:
    a = find(i)
    if a not in drifs:
        drifs.append(a)

print(len(drifs)-1)