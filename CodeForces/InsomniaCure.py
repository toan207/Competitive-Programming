# https://codeforces.com/problemset/problem/148/A

k = int(input())
l = int(input())
m = int(input())
n = int(input())
d = int(input())

_list = [0] * d

if k==1 or l==1 or m==1 or n==1:
        print(d)
else:
    for i in range(1,d+1):
        if i%k==0 or i%l==0 or i%m==0 or i%n==0:
            _list[i-1] = 1
    print(_list.count(1))