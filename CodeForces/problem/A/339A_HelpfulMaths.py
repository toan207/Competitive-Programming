# https://codeforces.com/problemset/problem/339/A

s = input().split('+')
s.sort()

for i in range(len(s)):
    print(s[i],end='')
    if i!=len(s)-1:
        print('+',end='')