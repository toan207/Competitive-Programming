# https://codeforces.com/contest/1451/problem/B

t = int(input())

for _ in range(t):
    n,q = map(int, input().split())
    s = input()

    for i in range(q):
        l,r = map(int,input().split())
        temp = s[l-1:r]

        f = 0
        p = 0
        for j in range(n):
            if p == len(temp):
                break
            if s[j] == temp[p] and (f or p != len(temp)-1):
                p += 1
            elif p != 0:
                f = 1
        if p == len(temp):
            print('YES')
        else:
            print('NO')