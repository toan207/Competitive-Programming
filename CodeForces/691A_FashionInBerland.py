# https://codeforces.com/problemset/problem/691/A

s = input()
n = input()

if (n.count('0')==1 and len(n)!=1) or n=='1':
    print('YES')
else:
    print('NO')