# https://codeforces.com/contest/1454/problem/C

t = int(input())

for _ in range(t):
    n = int(input())
    ar = list(map(int, input().split()))

    d = dict()
    for i in ar:
        d[i] = []

    s = 0
    for i in range(n):
        if i == n-1:
            d[ar[i]].append((s,i))
        if ar[i] != ar[i+1]:
            d[ar[i]].append((s,i))
            s = i + 1

    _min = 10e9

    for i in d.keys():
        count = len(d[i]) - 1
        if d[i][0][0] != 0:
            count += 1
        if d[i][len(d[i]) - 1][1] != n - 1:
            count += 1
        _min = min(_min,count)
    print(max(0,_min))