# https://codeforces.com/problemset/problem/579/A

bacteria = int(input())
ans = 0

while bacteria>0:
    ans += bacteria%2
    bacteria //= 2

print(ans)