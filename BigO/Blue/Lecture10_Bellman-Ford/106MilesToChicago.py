# https://www.spoj.com/problems/CHICAGO/

class Edge:
    def __init__(self, source, target, weight):
        self.source = source
        self.target = target
        self.weight = weight

def BellFord(s,n,m):
    dist[s] = 1
    for i in range(n-1):
        for j in range(len(graph)):
            u = graph[j].source
            v = graph[j].target
            w = graph[j].weight
            if (dist[u]*w)/100 > dist[v]:
                dist[v] = (dist[u]*w)/100
                path[v] = u

while True:
    n = list(map(int, input().split()))

    if len(n)==1:
        break

    dist = [0] * n[0]
    path = [-1] * n[0]
    graph = []

    for i in range(n[1]):
        u,v,w = map(int, input().split())
        graph.append(Edge(u-1,v-1,w))
        graph.append(Edge(v-1,u-1,w))

    graph.sort(key=lambda x: x.source)
    BellFord(0,n[0],n[1])
    print('%.6f' % (dist[n[0]-1]*100),' percent',sep='')