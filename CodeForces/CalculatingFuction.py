# https://codeforces.com/problemset/problem/486/A

from math import ceil

n = int(input())

if n%2!=0:
    print(-ceil(n/2))
else:
    print(ceil(n/2))