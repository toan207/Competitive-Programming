# https://codeforces.com/problemset/problem/584/A

n,t = map(int, input().split())

if t==10:
    if n<2:
        print(-1)
    else:
        print('1','0' * (n-1),sep='')
else:
    print(str(t) * n)