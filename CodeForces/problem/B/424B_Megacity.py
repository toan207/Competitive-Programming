# https://codeforces.com/problemset/problem/424/B

n, s = map(int, input().split())

l = []

for i in range(n):
    x,y,p = map(int, input().split())
    l.append( ( ( x*x + y*y ) ** 0.5, p) )

l.sort()

radius = 0

for i in l:
    radius = i[0]
    s += i[1]
    if s >= int(1e6):
        break

if s < int(1e6):
    print(-1)
else:
    print('%.7f' % radius)