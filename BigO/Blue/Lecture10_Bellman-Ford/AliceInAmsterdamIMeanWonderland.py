# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC10/BLUE_L10P07/statement

def BellmanFord(s):
    dist[s] = 0

    for i in range(n-1):
        for j in range(len(graph)):
            u = graph[j][0]
            v = graph[j][1]
            w = graph[j][2]
            if (dist[u] != INF) and (dist[u] + w < dist[v]):
                dist[v] = dist[u] + w

    for i in range(len(graph)):
        u = graph[i][0]
        v = graph[i][1]
        w = graph[i][2]
        if (dist[u] != INF) and (dist[u] + w < dist[v]):
            dist[v] = dist[u] + w
            return False

    return True

INF = 10e9
case = 1

while True:
    n = int(input())

    if n == 0:
        break

    d = {}
    ite = 0

    dist = [INF for i in range(n)]
    graph = []

    for i in range(n):
        l = input().split()
        d[ite] = l[0]
        ite += 1
        for j in range(1,len(l)):
            l[j] = int(l[j])
            if i==j-1 or l[j]!=0:
                graph.append((i,j-1,l[j]))
    
    q = int(input())
    mark = -INF

    res = 1

    print('Case #' + str(case) + ':')
    case += 1
    for i in range(q):
        s,e = map(int, input().split())
        if mark!=s and res:
            mark = s
            dist = [INF for i in range(n)]
            res = BellmanFord(s)
        if not res:
            print('NEGATIVE CYCLE')
        elif dist[e] == INF:
            print(d[s] + '-' + d[e],'NOT REACHABLE')
        else:
            print(d[s] + '-' + d[e],dist[e])