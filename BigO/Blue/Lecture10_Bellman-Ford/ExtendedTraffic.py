# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC10/BLUE_L10P02/statement

INF = 10E9

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

for test in range(t):
    space = input()

    n = int(input())
    l = list(map(int, input().split()))
    m = int(input())

    dist = [INF] * n
    path = [-1] * n
    graph = []
    
    for i in range(m):
        u,v = map(int, input().split())
        graph.append(Edge(u-1,v-1,(l[v-1] - l[u-1])**3))
    
    res = BellFord(0)

    q = int(input())
    check = []
    for i in range(q):
        x = int(input())
        check.append(x-1)

    print('Case ' + str(test+1) + ':')
    for i in check:
        if dist[i] == INF or dist[i] < 3:
            print('?')
        else:
            print(dist[i])