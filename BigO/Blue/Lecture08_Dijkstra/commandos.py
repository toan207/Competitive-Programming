# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC08/BLUE_L08P06/statement

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

t = int(input())

x = 1

for test in range(t):
    n = int(input())
    r = int(input())
    graph = [[] for i in range(n + 5)]
    dist = [INF for i in range(n + 5)]

    for i in range(r):
        s, e = map(int, input().split())
        graph[s].append(Node(e, 1))
        graph[e].append(Node(s, 1))
    
    d = list(map(int, input().split()))
    Dijkstra(d[0])
    distS = dist.copy()
    dist = [INF for i in range(n + 5)]
    Dijkstra(d[1])

    _sum = 0

    for i in range(n):
        _sum = max(_sum, distS[i] + dist[i])
    
    print('Case ' + str(x) + ':',_sum)
    x += 1