# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC16/BLUE_L16P02/statement

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

alphabet = {}
for i in range(26):
    alphabet[chr(ord('A') + i)] = i

space = input()

for test in range(t):
    last = input()

    n = alphabet[last] + 1

    parent = [i for i in range(n)]
    rank = [0 for i in range(n)]

    while True:
        try:
            connect = input()
            if connect == '' or connect == ' ':
                break
            unionSet(alphabet[connect[0]], alphabet[connect[1]])
        except:
            break
    
    group = [0 for i in range(n)]
    for i in range(n):
        group[findSet(i)] = 1

    count = 0
    for i in range(n):
        if group[i] != 0:
            count += 1
    print(count)
    print()