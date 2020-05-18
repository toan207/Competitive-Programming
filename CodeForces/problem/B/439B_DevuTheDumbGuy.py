# https://codeforces.com/problemset/problem/439/B

n,x = map(int,input().split())
c = list(map(int,input().split()))

c.sort()
count = 0

for i in c:
    count += x*i
    x = max(1,x-1)

print(count)