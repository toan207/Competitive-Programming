# https://codeforces.com/problemset/problem/466/A

n,m,a,b = list(map(int, input().split()))

bundle = n//m
single = n%m

_sum = 0

if bundle*b<bundle*m*a:
    _sum += bundle * b
else:
    _sum += bundle * m * a

if single*a>b and single!=0:
    _sum += b
else:
    _sum += single*a

print(_sum)