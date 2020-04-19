# https://codeforces.com/problemset/problem/122/A

n = int(input())

check_list = [4,7,44,47,74,77,444,447,474,477,744,747,774,777]
f = 0

for i in check_list:
    if n%i==0:
        f = 1
        break

if f:
    print('YES')
else:
    print('NO')