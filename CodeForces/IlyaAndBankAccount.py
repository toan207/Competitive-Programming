# https://codeforces.com/problemset/problem/313/A

n = int(input())

if n>=0:
    print(n)
else:
    x = - n//100
    print(-10*x - min((-n-100*x)%10,(-n-100*x)//10))