# https://codeforces.com/problemset/problem/677/A

n,h = list(map(int, input().split()))
a = list(map(int, input().split()))

_sum = 0

for i in a:
    if i>h:
        _sum += 2
    else:
        _sum += 1

print(_sum)