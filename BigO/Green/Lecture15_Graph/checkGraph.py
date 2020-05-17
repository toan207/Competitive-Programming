n = int(input())
graph = []

for i in range(n):
    l = list(map(int, input().split()))
    graph.append(l)

f = 1

for i in range(n):
    for j in range(n):
        if graph[i][j] != graph[j][i]:
            f = 0
            break

print('YES' if f else 'NO')