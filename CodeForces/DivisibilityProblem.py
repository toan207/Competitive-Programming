# https://codeforces.com/problemset/problem/1328/A

n = int(input())

for i in range(n):
    a,b = map(int, input().split())
    print(b*(a%b!=0) - a%b)