# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC15/BLUE_L15P08/statement

import queue
INF = 10E9

class Node:
    def __init__(self,id,dist):
        self.dist = dist
        self.id = id
    def __lt__(self,other):
        return self.dist <= other.dist

def Prims(s):
    pq = queue.PriorityQueue()
    pq.put(Node(s,0))
    dist[s] = 0
    while not pq.empty():
        top = pq.get()
        u = top.id
        visited[u] = True
        for neighbor in graph[u]:
            v = neighbor.id
            w = neighbor.dist
            if not visited[v] and w < dist[v]:
                dist[v] = w
                pq.put(Node(v,w))

n,m = map(int,input().split())
graph = [[] for i in range (n)]
dist = [INF for i in range (n)]
visited = [False for i in range (n)]
for i in range (m):
    x,y,r = map(int,input().split())
    graph[x-1].append(Node(y-1,r))
    graph[y-1].append(Node(x-1,r))

s = int(input())
Prims(s-1)
res = 0
for i in range (n):
    if dist[i] != INF:
        res += dist[i]

print(res)