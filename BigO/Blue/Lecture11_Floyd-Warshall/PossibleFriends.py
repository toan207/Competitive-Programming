# https://www.spoj.com/problems/SOCIALNE/

def FloydWarshall(dist, graph):
    for i in range(m):
        for j in range(m):
            dist[i][j] = graph[i][j]
    
    for k in range(m):
        for i in range(m):
            for j in range(m):
                if i != j:
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

t = int(input())
INF = 10e9

for test in range(t):
    x = input()
    m = len(x)

    graph = [[None for i in range(m)] for j in range(m)]
    dist = [[None for i in range(m)] for j in range(m)]

    for i in range(m):
        for j in range(m):
            if x[j] == 'Y':
                graph[i][j] = 1
            else:
                graph[i][j] = INF
        if i == m-1:
            break
        x = input()
    
    FloydWarshall(dist, graph)

    index, pFriend = 0,0

    for i in range(m):
        count = 0
        for j in range(m):
            if dist[i][j] == 2:
                count += 1
        if count>pFriend:
            pFriend = count
            index = i

    print(index, pFriend)