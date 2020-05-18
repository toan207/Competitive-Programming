# https://codeforces.com/problemset/problem/758/A

n = int(input())
a = list(map(int, input().split()))

_max = max(a)
count = 0

for i in a:
    count += _max - i

print(count)