# https://codeforces.com/problemset/problem/58/A

s = input()

check_list = ['h','e','l','l','o']
start = 0
ans = ''

for i in s:
    if i == check_list[start]:
        ans += i
        start += 1
        if start == 5:
            break

if ans == 'hello':
    print('YES')
else:
    print('NO') 