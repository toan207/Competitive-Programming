# https://codeforces.com/contest/1451/problem/A

t = int(input())

for _ in range(t):
    n = int(input())
    if n==1:
        print(0)
    elif n == 2:
        print(1)
    elif n == 3:
        print(2)
    elif n%2:
        print(3)
    else:
        print(2)