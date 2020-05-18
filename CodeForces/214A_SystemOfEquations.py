# https://codeforces.com/problemset/problem/214/A

n,m = map(int, input().split())
count = 0
a = 0
while a*a<=n:
    b = n - a*a
    if b*b + a == m:
        count += 1
    a += 1
print(count)