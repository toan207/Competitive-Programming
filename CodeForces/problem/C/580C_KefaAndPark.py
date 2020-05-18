# https://codeforces.com/problemset/problem/580/C

import queue

n,cat = map(int,input().split())
haveCat = list(map(int,input().split()))

vertex = [[] for i in range(n)]
visited = [False] * n
path = [-1] * n
hp = [cat+1] * n
if haveCat[0]:
    hp[0] -= 1
check = [False] * n

for i in range(n-1):
    x = list(map(int,input().split()))
    x[0],x[1] = x[0]-1,x[1]-1
    vertex[x[0]].append(x[1])
    vertex[x[1]].append(x[0])

restaurents = []
for i in range(n):
    if len(vertex[i]) == 1 and i != 0:
        restaurents.append(i)

countRes = 0

def BFS(s):
    visited[s] = True
    q = queue.Queue()
    q.put(s)
    while not q.empty():
        u = q.get()
        for i in vertex[u]:
            if not visited[i]:
                visited[i] = True
                q.put(i)
                path[i] = u
                if haveCat[i]:
                    if hp[i] == cat + 1:
                        hp[i] = hp[u] - 1
                    else:
                        hp[i] = cat
                else:
                    if hp[u] > 0:
                        hp[i] = cat + 1
                    else:
                        hp[i] = 0

BFS(0)

for i in restaurents:
    if hp[i]>0:
        countRes+=1

print(countRes)