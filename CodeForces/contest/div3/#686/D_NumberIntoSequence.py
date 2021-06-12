# https://codeforces.com/contest/1454/problem/D

t = int(input())

for _ in range(t):
    n = int(input())
    ans = 1
    f = []
    d = 2
    while d*d <= n:
        if n%d == 0:
            p = 0
            while n%d == 0:
                n //= d
                p += 1
            ans = max(ans,p)
            f.append([d,p])
        d += 1
    if n>1:
        f.append([n,1])
    print(ans)
    for i in range(ans, 0, -1):
        cur = 1
        for j in range(len(f)):
            if i==f[j][1]:
                f[j][1] -= 1
                cur *=  f[j][0]
        print(cur, end=' ')
    print()