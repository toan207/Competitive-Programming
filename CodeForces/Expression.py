# https://codeforces.com/problemset/problem/479/A

a = int(input())
b = int(input())
c = int(input())

_max = a+b*c

if _max<a*(b+c):
    _max = a*(b+c)
if _max<a*b*c:
    _max = a*b*c
if _max<(a+b)*c:
    _max = (a+b)*c
if _max<a+b+c:
    _max = a+b+c
print(_max)