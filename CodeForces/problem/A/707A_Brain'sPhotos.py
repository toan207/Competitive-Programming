# https://codeforces.com/problemset/problem/707/A

n,m = map(int, input().split())

f = 1

for i in range(n):
    color = input().split()
    if 'C' in color or 'M' in color or 'Y' in color:
        f = 0

print('#Black&White' if f else '#Color')