# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC10/BLUE_L10P03/statement

INF = 10E9 * (-1)

class Edge:
    def __init__(self, source, target, weight):
        self.source = source
        self.target = target
        self.weight = weight

def BellFord(s):
    dist[s] = 100

    for i in range(n-1):
        for j in range(len(graph)):
            u = graph[j].source
            v = graph[j].target
            w = graph[j].weight
            if (dist[u] != INF) and (dist[u] > 0) and (dist[u] + w > dist[v]):
                dist[v] = dist[u] + w

    if dist[-1] <= 0:
        return False

    return True

while True:
    n = int(input())

    if n == -1:
        break

    dist = [INF] * n
    l = []
    graph = []

    for i in range(n):
        x = list(map(int, input().split()))
        l.append(x)
    for i in range(n):
        for j in range(l[i][1]):
            graph.append(Edge(i,l[i][j+2]-1,l[l[i][j+2]-1][0]))
    res = BellFord(0)

    if not res:
        print('hopeless')
    else:
        print('winnable')