n = int(input())

mod = 1000007
count = 0
mul = 1

for i in range(n):
    u,v,w = map(int, input().split())
    if u == v:
        count += 1
        mul *= w
        mul %= mod

if count:
    print(count, mul)
else:
    print(-1)