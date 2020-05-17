# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC10/BLUE_L10P01/statement

INF = 10E9
MAX = 2000

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
                path[v] = u

    for i in range(m):
        u = graph[i].source
        v = graph[i].target
        w = graph[i].weight
        if (dist[u] != INF) and (dist[u] + w < dist[v]):
            return False

    return True

t = int(input())

for i in range(t):
    n, m = map(int, input().split())
    dist = [INF] * MAX
    path = [-1] * MAX
    graph = []
    for i in range(m):
        u,v,w = map(int, input().split())
        graph.append(Edge(u,v,w))
    s = 0
    res = BellFord(s)
    if not res:
        print('possible')
    else:
        print('not possible')