
def FloydWarshall(dist, graph):
    for i in range(v):
        for j in range(v):
            dist[i][j] = graph[i][j]
            if graph[i][j] != INF and i != j:
                path[i][j] = i
            else:
                path[i][j] = -1
    
    for k in range(v):
        for i in range(v):
            for j in range(v):
                if dist[i][j] > dist[i][k] + dist[k][j]:
                    dist[i][j] = dist[i][k] + dist[k][j]
                    path[i][j] = path[k][j]
    
    for i in range(v):
        if dist[i][i] < 0:
            return False
    return True

INF = 1e9

v = int(input())
graph = [[None for i in range(v)] for j in range(v)]
dist = [[None for i in range(v)] for j in range(v)]
path = [[None for i in range(v)] for j in range(v)]

for i in range(v):
    line = list(map(int, input().split()))
    for j in range(v):
        graph[i][j] = INF if line[j] == 0 and i != j else line[j]
FloydWarshall(dist,graph)
s,t = 0,4
print(dist[s][t])