# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC05/BLUE_L05P01/statement

from queue import Queue

Q = int(input())

for i in range(Q):
    n,m = map(int,input().split())
    n += 1
    v = None
    e = None
    graph = [[] for v in range(n)]
    visited = [False for v in range(n)]
    dist = [0 for v in range(n)]

    def BFS(s):
        q = Queue()
        visited[s] = True
        q.put(s)
        while not q.empty():
            u = q.get()
            for v in graph[u]:
                if not visited[v]:
                    visited[v] = True
                    q.put(v)
                    dist[v] = dist[u] + 6

    for j in range(m):
        s,e = map(int,input().split())
        graph[s].append(e)
        graph[e].append(s)
    
    s = int(input())
    f = n

    BFS(s)
    for j in range(1,len(dist)):
        if j == s:
            continue
        if dist[j] == 0:
            print(-1,end=' ')
        else:
            print(dist[j],end=' ')
    print()