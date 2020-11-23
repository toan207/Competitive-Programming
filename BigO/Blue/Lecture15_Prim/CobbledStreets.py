# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC15/BLUE_L15P03

import queue

class Node:
    def __init__(self, id, dist):
        self.id = id
        self.dist = dist
    def __lt__(self, other):
        return self.dist < other.dist

def prims(src):
    pq = queue.PriorityQueue()
    pq.put(Node(src, 0))
    dist[src] = 0
    while not pq.empty():
        top = pq.get()
        u = top.id
        visited[u] = True
        for neighbor in graph[u]:
            v = neighbor.id
            w = neighbor.dist
            if not visited[v] and w < dist[v]:
                dist[v] = w
                pq.put(Node(v, w))

INF = 10e9

t = int(input())

for test in range(t):
    p = int(input())
    n = int(input())
    m = int(input())

    graph = [[] for i in range(n)]
    visited = [False for i in range(n)]
    dist = [INF for i in range(n)]

    for i in range(m):
        a,b,c = map(int, input().split())
        a,b = a-1, b-1

        graph[a].append(Node(b,c))
        graph[b].append(Node(a,c))
    
    prims(0)
    print(sum(dist) * p)