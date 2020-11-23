# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC15/BLUE_L15P07/statement

import queue

INF = 1e9

class Node:
    def __init__(self, dist, index):
        self.dist = dist
        self.index = index

    def __lt__(self, other):
        return self.dist < other.dist

def prim(src):
    dist[src] = 0
    pq = queue.PriorityQueue()
    pq.put(Node(0, src))
    while not pq.empty():
        u = pq.get().index
        visited[u] = True
        for item in graph[u]:
            v, w = item.index, item.dist
            if not visited[v] and dist[v] > w:
                dist[v] = w
                pq.put(Node(dist[v], v))

    return dist

n, m = map(int, input().split())
graph = [[] for i in range(n + 1)]
dist = [INF for i in range(n + 1)]
visited = [False for i in range(n + 1)]
for i in range(m):
    u, v, w = map(int, input().split())
    graph[u].append(Node(w, v))
    graph[v].append(Node(w, u))
mstCables = prim(1)[2: ]
mstCables.sort(reverse=True)
newCables = queue.PriorityQueue() # min heap
q = int(input())
if (q > 0):
    for cable in list(map(int, input().split())):
        newCables.put(cable)
res = 0
for oldCable in mstCables:
    usedCable = oldCable
    if not newCables.empty() and newCables.queue[0] < usedCable:
        usedCable = newCables.get()
    res += usedCable
print(res)