# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC08/BLUE_L08P04/statement

import queue

MAX = 100
INF = int(1e9)

class Node:
    def __init__(self, id, dist):
        self.id = id
        self.dist = dist
    
    def __lt__(self, other):
        return self.dist <= other.dist

def Dijkstra(s, graph):
    pq = queue.PriorityQueue()
    pq.put(Node(s,0))
    dist[s] = 0

    while not pq.empty():
        top = pq.get()
        u = top.id
        w = top.dist
        if dist[u] != w:
            continue
        for neighbor in graph[u]:
            if w + neighbor.dist < dist[neighbor.id]:
                dist[neighbor.id] = w + neighbor.dist
                pq.put(Node(neighbor.id, dist[neighbor.id]))

cases = int(input())

for test in range(cases):
    n,m,k,s,t = map(int, input().split())
    graph1 = [[] for i in range(n)]
    graph2 = [[] for i in range(n)]
    dist = [INF for i in range(n)]
    for i in range(m):
        d = list(map(int,input().split()))
        graph1[d[0]-1].append(Node(d[1]-1, d[2]))
        graph2[d[1]-1].append(Node(d[0]-1, d[2]))
    Dijkstra(s-1,graph1)
    distStoT = dist.copy()
    dist = [INF for i in range(n)]
    Dijkstra(t-1,graph2)
    distT = dist.copy()
    mark = distStoT[t-1]
    _min = mark
    for i in range(k):
        u,v,q = list(map(int, input().split()))
        _min = min(_min, distStoT[u-1] + q + distT[v-1])
        _min = min(_min, distStoT[v-1] + q + distT[u-1])
    print(_min if _min != INF else -1)