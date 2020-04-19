# https://codeforces.com/problemset/problem/37/A

from collections import Counter

n = int(input())
l = list(map(int,input().split()))

count = Counter(l)

_max = 0
for i in count.keys():
    _max = max(_max,count[i])

print(_max, len(set(l)))