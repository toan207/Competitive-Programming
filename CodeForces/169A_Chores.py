# https://codeforces.com/problemset/problem/169/A

n,a,b = map(int,input().split())
h = list(map(int,input().split()))

h.sort()
print(h[n-a] - h[n-a-1])