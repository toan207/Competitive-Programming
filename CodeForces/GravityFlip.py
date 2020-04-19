# https://codeforces.com/problemset/problem/405/A

n = int(input())
a = list(map(int, input().split()))

a.sort()

for i in a:
    print(i, end = ' ')