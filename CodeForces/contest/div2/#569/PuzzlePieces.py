# https://codeforces.com/contest/1345/problem/A

t = int(input())

for test in range(t):
    n,m = map(int, input().split())

    if n == 1 or m == 1:
        print('YES')
    elif n == 2 and m == 2:
        print('YES')
    else:
        print('NO')