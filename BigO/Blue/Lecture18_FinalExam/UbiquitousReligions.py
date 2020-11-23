# https://bigocoder.com/courses/OBLUE01/OBLUE01_LEC18/BLUE_L18P03_2

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

case = 1

while True:
    n,m = map(int, input().split())

    if n == 0 and m == 0:
        break

    rank = [0 for i in range(n)]
    parent = [i for i in range(n)]

    for i in range(m):
        p1,p2 = map(int, input().split())
        unionSet(p1-1, p2-1)
    
    group = [0 for i in range(n)]

    for i in range(n):
        group[findSet(i)] += 1
    
    count = 0
    for i in range(n):
        if group[i]:
            count += 1
    print('Case ' + str(case) + ': ' + str(count))
    case += 1