
class Edge:
    def __init__(self, source, target, weight):
        self.source = source
        self.target = target
        self.weight = weight

def BellFord(s):
    dist[s] = 0

    for i in range(n-1):
        for j in range(m):
            u = graph[j].source
            v = graph[j].target
            w = graph[j].weight
            if (dist[u] != INF) and (dist[u] + w < dist[v]):
                dist[v] = dist[u] + w

    for i in range(n):
        for j in range(m):
            u = graph[j].source
            v = graph[j].target
            w = graph[j].weight
            if (dist[u] != INF) and (dist[u] + w < dist[v]):
                dist[v] = -INF

INF = int(10e9)

while True:
    n,m,q,s = map(int, input().split())

    if not n and not m and not q and not s:
        break

    dist = [INF for i in range(n)]
    graph = []

    for i in range(m):
        u,v,w = map(int,input().split())
        graph.append(Edge(u,v,w))

    BellFord(s)

    for i in range(q):
        x = int(input())
        if dist[x] == INF:
            print('Impossible')
        elif dist[x] == -INF:
            print('-Infinity')
        else:
            print(dist[x])
    
    print()