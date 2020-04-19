# https://codeforces.com/problemset/problem/141/A

s1 = input()
s2 = input()
s_after_joke = input()

s = s1+s2

check_dict = dict()
f = 1

for i in s:
    if i not in check_dict:
        check_dict[i] = 1
    else:
        check_dict[i] += 1

for i in s_after_joke:
    if i in check_dict.keys():
        check_dict[i] -= 1
    else:
        f = 0
        break

for i in check_dict.keys():
    if check_dict[i] != 0:
        f = 0
        break

if f:
    print('YES')
else:
    print('NO')