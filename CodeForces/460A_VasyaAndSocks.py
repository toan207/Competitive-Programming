# https://codeforces.com/problemset/problem/460/A

n,m = list(map(int, input().split()))

socks = n
countAdd = 0
days = 0

while socks>0:
    socks -= 1
    days += 1
    countAdd += 1
    if countAdd == m:
        socks += 1
        countAdd = 0

print(days)