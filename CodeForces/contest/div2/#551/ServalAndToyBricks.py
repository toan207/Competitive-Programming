# https://codeforces.com/contest/1153/problem/B

n,m,h = map(int, input().split())
c = list(map(int, input().split()))
r = list(map(int, input().split()))

matrix = []

for i in range(n):
    x = list(map(int, input().split()))
    for j in range(m):
        if x[j]:
            if c[j] <= r[i]:
                x[j] = c[j]
            else:
                x[j] = r[i]
    matrix.append(x)

for i in matrix:
    print(*i)