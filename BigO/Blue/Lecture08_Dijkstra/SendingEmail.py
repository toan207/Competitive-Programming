# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC08/BLUE_L08P05/statement

import queue

MAX = 100
INF = int(1e9)

class Node:
    def __init__(self, id, dist):
        self.id = id
        self.dist = dist
    
    def __lt__(self, other):
        return self.dist <= other.dist

def Dijkstra(s):
    pq = queue.PriorityQueue()
    pq.put(Node(s,0))
    dist[s] = 0

    while not pq.empty():
        top = pq.get()
        u = top.id
        w = top.dist
        for neighbor in graph[u]:
            if w + neighbor.dist < dist[neighbor.id]:
                dist[neighbor.id] = w + neighbor.dist
                pq.put(Node(neighbor.id, dist[neighbor.id]))
                path[neighbor.id] = u

q = int(input())

x = 1

for test in range(q):
    n,m,s,t = map(int, input().split())

    graph = [[] for i in range(n + 5)]
    dist = [INF for i in range(n + 5)]
    path = [-1 for i in range(n + 5)]

    for i in range(m):
        d = list(map(int, input().split()))
        graph[d[0]].append(Node(d[1],d[2]))
        graph[d[1]].append(Node(d[0],d[2]))

    Dijkstra(s)
    print('Case #',x,':',end=' ', sep='')
    print(dist[t] if dist[t] != INF else 'unreachable')
    x += 1