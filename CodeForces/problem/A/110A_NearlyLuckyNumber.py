# https://codeforces.com/problemset/problem/110/A

n = input()
check_lucky = 0

for i in n:
    if i == '4' or i == '7':
        check_lucky += 1

if check_lucky == 4 or check_lucky == 7:
    print('YES')
else:
    print('NO')