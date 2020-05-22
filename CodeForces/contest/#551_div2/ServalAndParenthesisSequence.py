# https://codeforces.com/contest/1153/problem/C

n = int(input())
s = input()

if n%2:
    print(':(')
    exit()

ans = ''
o = 0
c = 0

for i in s:
    if i == '(':
        o += 1
    elif i == ')':
        c += 1

if o > n//2 or c > n//2:
    print(':(')
    exit()

o = n//2 - o

for i in s:
    if i == '?':
        if o:
            o -= 1
            ans += '('
        else:
            ans += ')'
    else:
        ans += i

for i in range(n-1):
    if ans[i] == '(':
        o += 1
    else:
        o -= 1
    if o <= 0:
        print(':(')
        exit()

print(ans)