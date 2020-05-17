import queue
import sys
from collections import defaultdict
import heapq

INF = int(1e9)

def Dijsktra(s):
    dist = [INF] * (n+1)
    pq = [(0,s)]
    dist[s] = 0
    while len(pq):
        w,u = heapq.heappop(pq)
    
        if dist[u] != w:
            continue
        for neighbor,weight in graph[u]:
            if w + weight < dist[neighbor]:
                dist[neighbor] = w + weight
                heapq.heappush(pq,(dist[neighbor],neighbor))
    return dist

data = sys.stdin.readlines()
n, m, k, x = map(int, data[0].strip().split())
choco = list(map(int, data[1].strip().split()))
graph = [[] for i in range (n)]

for i in range (m):
    u,v,d = map(int, data[i + 2].strip().split())
    graph[u-1].append((v-1,d))
    graph[v-1].append((u-1,d))
A,B = map(int, data[-1].strip().split())
A,B = A-1,B-1
dist = Dijsktra(A)
dist1 = Dijsktra(B)

ans = INF

for i in range (k):
    if dist1[choco[i]-1] < x:
        ans = min(dist1[choco[i]-1]+dist[choco[i]-1],ans)

if ans == INF:
    print(-1)
    exit()
else:
    print(ans)