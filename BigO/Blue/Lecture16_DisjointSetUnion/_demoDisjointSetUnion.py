MAX = 20
parent = []
rank = []

def makeSet():
    parent = [i for i in range(MAX + 5)]
    rank = [0 for i in range(MAX + 5)]

def findSet(u):
    if parent[u] != u:
        parent[u] = findSet(parent[u])
    return parent[u]

def unionSet(u, v):
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

if __name__ == '__main__':
    Q = int(input())
    makeSet()
    for i in range(Q):
        u,v,q = map(int, input().split())
        if q == 1:
            unionSet(u,v)
        else:
            parentU = findSet(u)
            parentV = findSet(v)
            if parentU == parentV:
                print('YES')
            else:
                print('NO')