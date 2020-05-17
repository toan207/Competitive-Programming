import heapq
INF = int(1E9)
def Dijsktra(s,graph):
    dist = [INF for i in range (n)]
    pq = []
    heapq.heappush(pq,(0,s))
    dist[s] = 0
    while len(pq):
        w,u = heapq.heappop(pq)
    
        if dist[u] != w:
            continue
        for neighbor,weight in graph[u]:
            if w + weight < dist[neighbor] and (u,neighbor) not in edges_shortest:
                dist[neighbor] = w + weight
                heapq.heappush(pq,(dist[neighbor],neighbor))
    return dist

while True:
    n,m = map(int,input().split())
    if n == m == 0:
        break
    s,d = map(int,input().split())
    graph = [[] for i in range (n)]
    graphD = [[] for i in range (n)]
    edges = []
    for i in range (m):
        u,v,p = map(int,input().split())
        graph[u].append((v,p))
        graphD[v].append((u,p))
        edges.append((u,v,p))
    edges_shortest = []
    fromS = Dijsktra(s,graph)
    fromD = Dijsktra(d,graphD)
    for i in edges:
        if fromS[i[0]] + fromD[i[1]] + i[2] == fromS[d]:
            edges_shortest.append((i[0],i[1]))

    dist = Dijsktra(s, graph)
    if dist[d] == INF:
        print(-1)
    else:
        print(dist[d])