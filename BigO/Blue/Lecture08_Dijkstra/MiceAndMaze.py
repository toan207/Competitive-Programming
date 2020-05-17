# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC08/BLUE_L08P02/statement

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

n = int(input())
e = int(input())
t = int(input())

m = int(input())

graph = [[] for i in range(n)]

for i in range(m):
    d = list(map(int,input().split()))
    graph[d[0]-1].append(Node(d[1]-1,d[2]))

count = 0

for i in range(n):
    dist = [INF for i in range(n)]
    path = [-1 for i in range(n)]
    Dijkstra(i)
    if dist[e-1] <= t:
        count += 1

print(count)