# https://codeforces.com/problemset/problem/546/A

k,n,w = list(map(int, input().split()))

for i in range(w):
    n -= k*(i+1)

if n>=0:
    print(0)
else:
    print(-n)