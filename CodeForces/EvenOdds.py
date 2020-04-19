# https://codeforces.com/problemset/problem/318/A

from math import ceil

n,k = list(map(int, input().split()))

middle = ceil(n/2)

if k > middle:
    print((k-middle)*2)
else:
    print(k*2-1)