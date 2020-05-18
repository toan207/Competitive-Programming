# https://codeforces.com/problemset/problem/158/B

from math import ceil

n = int(input())
s = list(map(int, input().split()))

s.sort()

start = 0
end = n-1

amount = 0

while start <= end:
    while s[start]+s[end]<=4 and start<n-1:
        s[end] += s[start]
        start += 1
    else:
        end -= 1
    amount += 1

print(amount)