# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC10/BLUE_L10P08/statement

class Edge:
    def __init__(self, source, target, weight):
        self.source = source
        self.target = target
        self.weight = weight

def BellFord(s):
    dist[s] = 0

    for i in range(n):
        for j in range(len(graph)):
            u = graph[j].source
            v = graph[j].target
            w = graph[j].weight
            if (dist[u] != INF) and (dist[u] + w < dist[v]):
                dist[v] = dist[u] + w

n = int(input())

INF = 10e9

dist = [INF for i in range(n)]
graph = []

for  i in range(1,n):
    l = input().split()
    for j in range(len(l)):
        if l[j] != 'x':
            graph.append(Edge(i,j,int(l[j])))
            graph.append(Edge(j,i,int(l[j])))

graph.sort(key=lambda x: (x.source, x.target))
BellFord(0)

print(max(dist))