# https://codeforces.com/problemset/problem/96/A

s = input()

f = False
count = 1

for i in range(1,len(s)):
    
    if s[i]!=s[i-1]:
        count = 0
    
    count += 1
    
    if count==7:
        f = True
        break

if f:
    print('YES')
else:
    print('NO')