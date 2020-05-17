# https://www.hackerearth.com/practice/algorithms/graphs/shortest-path-algorithms/practice-problems/algorithm/monks-business-day/

class Edge:
    def __init__(self, source, target, weight):
        self.source = source
        self.target = target
        self.weight = weight

def BellFord(s):
    dist[s] = 1

    for i in range(n-1):
        for j in range(m):
            u = graph[j].source
            v = graph[j].target
            w = graph[j].weight
            if (dist[u] != -INF) and (dist[u] + w > dist[v]):
                dist[v] = dist[u] + w

    for j in range(n):
        for i in range(m):
            u = graph[i].source
            v = graph[i].target
            w = graph[i].weight
            if (dist[u] != -INF) and (dist[u] + w > dist[v]):
                return False

    return True

INF = 10e9
t = int(input())

for test in range(t):
    n,m = map(int, input().split())

    dist = [-INF for i in range(n)]
    graph = []

    for i in range(m):
        u,v,w = map(int, input().split())
        graph.append(Edge(u-1,v-1,w))
    
    res = BellFord(0)

    if not res:
        print('Yes')
    else:
        print('No')