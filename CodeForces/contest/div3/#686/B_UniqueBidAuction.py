# https://codeforces.com/contest/1454/problem/B

t = int(input())

for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    c = dict()
    for i in range(n):
        if not c.get(l[i]):
            c[l[i]] = i + 1
        else:
            c[l[i]] = -1
    _min = 10e9
    f = 0
    for i in c.keys():
        if c[i] != -1 and i < _min:
            _min = i
            f = 1
    print(c[_min] if f else -1)