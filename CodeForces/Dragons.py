# https://codeforces.com/problemset/problem/230/A

s,n = list(map(int, input().split()))

dragons = []
win = 1

for i in range(n):
    x = list(map(int, input().split()))
    dragons.append(x)

dragons.sort(key = lambda a: a[0])

for i in dragons:
    if s>i[0]:
        s += i[1]
    else:
        win = 0
        break

if win:
    print('YES')
else:
    print('NO')