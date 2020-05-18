# https://codeforces.com/problemset/problem/723/A

x = list(map(int, input().split()))
x.sort()
print(x[1]-x[0] + x[2]-x[1])