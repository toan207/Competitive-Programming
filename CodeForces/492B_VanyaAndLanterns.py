# https://codeforces.com/problemset/problem/492/B

n,l = list(map(int, input().split()))
a = list(map(int, input().split()))
a.sort()

_max = max((a[0]-0), (l-a[n-1]))

for i in range(n-1):
    temp = abs(a[i] - a[i+1])/2
    _max = max(temp, _max)

print(_max)