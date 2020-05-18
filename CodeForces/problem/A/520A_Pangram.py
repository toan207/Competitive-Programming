# https://codeforces.com/problemset/problem/520/A

n = int(input())
s = input()

s = s.lower()

ans_list = []
ans_list.extend(s)

if len(set(ans_list))!=26:
    print('NO')
else:
    print('YES')