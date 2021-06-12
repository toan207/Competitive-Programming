# https://codeforces.com/contest/1153/problem/A

from math import ceil

n, t = map(int, input().split())

_min = int(10e9)
mark = -1

for i in range(n):
    s,d = map(int, input().split())
    
    if s >= t:
        if _min > s - t:
            _min = s - t
            mark = i
    else:
        x = ceil((t-s)/d)
        if _min > (s + x*d) - t:
            _min = (s + x*d) - t
            mark = i

print(mark + 1)