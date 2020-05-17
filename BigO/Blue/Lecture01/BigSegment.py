# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC01/BLUE_L01P06/statement
n = int(input())

li = []
x = list(map(int,input().split()))
li.append(x)
l = x[0]
r = x[1]

for i in range(n-1):
    x = list(map(int,input().split()))
    if l>x[0]:
        l = x[0]
    if r<x[1]:
        r = x[1]
    li.append(x)

check = []
check.append(l)
check.append(r)

if check in li:
    for i in range(n):
        if li[i] == check:
            print(i+1)
else:
    print('-1')