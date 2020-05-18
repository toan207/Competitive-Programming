# https://codeforces.com/problemset/problem/69/A

n = int(input())
_sum = [0,0,0]

for i in range(n):
    point = list(map(int, input().split()))
    _sum[0] += point[0]
    _sum[1] += point[1]
    _sum[2] += point[2]

if _sum[0] or _sum[1] or _sum[2]:
    print('NO')
else:
    print('YES')