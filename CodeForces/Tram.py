# https://codeforces.com/problemset/problem/116/A

n = int(input())
_max = 0
ans = 0

for i in range(n):
    a,b = list(map(int, input().split()))
    _max -= a
    _max += b

    if ans < _max:
        ans = _max

print(ans)