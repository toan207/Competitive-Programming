# https://codeforces.com/problemset/problem/557/B

n,w = map(int,input().split())
cups = list(map(int,input().split()))

cups.sort()

boys_min = cups[n]
girl_min = cups[0]

tea = girl_min

if boys_min < girl_min*2:
    tea = boys_min/2

if tea*2*n + tea*n > w:
    tea = w/(3*n)

print(tea*3*n)