# https://codeforces.com/problemset/problem/520/B

n,m = list(map(int, input().split()))

if m<=n:
    print(n-m)
else:
    count = 0
    while n<m:
        if m%2:
            m += 1
        else:
            m//=2
        count += 1
    print(count + n - m)