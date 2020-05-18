# https://codeforces.com/problemset/problem/268/A

n = int(input())

home = []
guest = []

count = 0

for i in range(n):
    x,y = input().split()
    home.append(x)
    guest.append(y)

for i in home:
    count += guest.count(i)

print(count)