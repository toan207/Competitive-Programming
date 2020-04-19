# https://codeforces.com/problemset/problem/118/A

n = input()

n = n.lower()
check_list = ['a','u','e','o','i','y']

ans = ''

for i in n:
    if i not in check_list:
        ans += '.' + i

print(ans)