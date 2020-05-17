# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC11/BLUE_L11P08/statement

def FloydWashall():
    for k in range(n - 1, -1, -1):
        u = l[k]
        for i in range(n):
            for j in range(n):
                dist[i][j] = min(dist[i][j], dist[i][u] + dist[u][j])
        for i in range(k,n):
            for j in range(k,n):
                res[k] += dist[l[i]][l[j]]

INF = 10e9

n = int(input())

dist = []
for i in range(n):
    x = list(map(int, input().split()))
    dist.append(x)

l = list(map(lambda x: int(x)-1, input().split()))
res = [0] * n
FloydWashall()

print(*res)