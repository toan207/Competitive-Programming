# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC09/BLUE_L09P04/statement

from queue import Queue
import sys
sys.setrecursionlimit(100000)

delX = [-1,0,0,1]
delY = [0,-1,1,0]

def BFS(s,n,m):
    q = Queue()
    visited[s[0]][s[1]] = True
    q.put(s)
    while not q.empty():
        u = q.get()
        for i in range(4):
            if u[0] + delX[i] >= 0 and u[0] + delX[i] < n and u[1] + delY[i] >= 0 and u[1] + delY[i] < m and graph[u[0] + delX[i]][u[1] + delY[i]] == '.':
                if not visited[u[0] + delX[i]][u[1] + delY[i]]:
                    visited[u[0] + delX[i]][u[1] + delY[i]] = True
                    q.put((u[0] + delX[i], u[1] + delY[i]))
                    dist[u[0] + delX[i]][u[1] + delY[i]] = dist[u[0]][u[1]] + 1

while True:
    r,c = map(int, input().split())

    if not r and not c:
        break

    graph = [['.'] * c for v in range(r)]
    visited = [[False] * c for v in range(r)]
    dist = [[0] * c for v in range(r)]

    boms = int(input())

    for i in range(boms):
        l = list(map(int, input().split()))
        for j in range(l[1]):
            graph[l[0]][l[2+j]] = 'X'
    
    s = list(map(int, input().split()))
    e = list(map(int, input().split()))

    BFS((s[0],s[1]),r,c)

    print(dist[e[0]][e[1]])