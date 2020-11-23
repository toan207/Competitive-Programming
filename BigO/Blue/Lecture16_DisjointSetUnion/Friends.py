# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC16/BLUE_L16P01/statement

def findSet(u):
    if parent[u] != u:
        parent[u] = findSet(parent[u])
    return parent[u]

def unionSet(u,v):
    up = findSet(u)
    vp = findSet(v)
    if up == vp:
        return
    if rank[up] > rank[vp]:
        parent[vp] = up
    elif rank[up] < rank[vp]:
        parent[up] = vp
    else:
        parent[up] = vp
        rank[vp] += 1

t = int(input())

for test in range(t):
    n,m = map(int, input().split())
    rank = [0 for i in range(n)]
    parent = [i for i in range(n)]

    for i in range(m):
        p1,p2 = map(int, input().split())
        unionSet(p1-1, p2-1)
    
    group = [0 for i in range(n)]

    for i in range(n):
        group[findSet(i)] += 1
    
    print(max(group))