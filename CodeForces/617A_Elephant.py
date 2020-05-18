# https://codeforces.com/problemset/problem/617/A

x = int(input())

footStep = 0

if x>4:
    footStep += x//5
    x -= 5*(x//5)
if x>3:
    footStep += 1
    x -= 4
if x>2:
    footStep += 1
    x -= 3
if x>1:
    footStep += 1
    x -= 2
if x>0:
    footStep += 1
    x -= 1

print(footStep)