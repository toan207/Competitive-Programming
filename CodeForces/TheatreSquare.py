# https://codeforces.com/problemset/problem/1/A

from math import ceil

n,m,a = input().split()
n,m,a = int(n),int(m),int(a)

c = ceil(n/a)
r = ceil(m/a)

print(c*r)