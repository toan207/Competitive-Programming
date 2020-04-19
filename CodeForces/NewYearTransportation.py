# https://codeforces.com/problemset/problem/500/A

n,t = list(map(int, input().split()))
a = list(map(int, input().split()))

distance = 0

i = 0

while distance<t-1:
    distance += a[distance]

if distance==t-1:
    print('YES')
else:
    print('NO')