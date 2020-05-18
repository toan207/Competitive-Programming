# https://codeforces.com/problemset/problem/61/A

line_1 = input()
line_2 = input()

ans = ''

for i in range(len(line_1)):
    if line_1[i] != line_2[i]:
        ans += '1'
    else:
        ans += '0'

print(ans)