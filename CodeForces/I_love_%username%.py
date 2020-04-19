# https://codeforces.com/problemset/problem/155/A

n = int(input())
points = list(map(int, input().split()))

_min = points[0]
_max = points[0]

count = 0

for i in points:
    if _max < i:
        count += 1
        _max = i
    if _min > i:
        count += 1
        _min = i

print(count)