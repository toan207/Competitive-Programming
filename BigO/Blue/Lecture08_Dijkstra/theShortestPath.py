# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC08/BLUE_L08P03/statement

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

t = int(input())

for test in range(t):
    n = int(input())

    graph = [[] for i in range(n)]

    count = 0
    city = {}

    for i in range(n):
        name = input()
        city[name] = count
        count += 1

        p = int(input())

        for j in range(p):
            d = list(map(int, input().split()))
            graph[i].append(Node(d[0]-1,d[1]))

    r = int(input())

    for i in range(r):
        dist = [INF for i in range(n)]
        path = [-1 for i in range(n)]
        findPath = input().split()
        s,e = city[findPath[0]], city[findPath[1]]
        Dijkstra(s)
        print(dist[e])
    
    space = input()