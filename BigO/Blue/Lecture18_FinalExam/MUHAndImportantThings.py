# https://codeforces.com/problemset/problem/471/B

n = int(input())
tasks = list(map(int, input().split()))

p = []
for i in range(n):
    p.append( (i+1, tasks[i]) )

p.sort(key=lambda x: x[1])

l1 = p.copy()
l2 = []
l3 = []

count = 0

for i in range(1,n):
    if p[i][1] == p[i-1][1]:
        count += 1
        if count > 1:
            break

if count < 2:
    print('NO')
else:
    print('YES')
    for i in range(1, n):
        if p[i][1] == p[i-1][1]:
            p[i], p[i-1] = p[i-1], p[i]
            if l2 == []:
                l2 = p.copy()
            else:
                l3 = p.copy()
                break
    for i in range(n):
        print(l1[i][0], end=' ')
    print()
    for i in range(n):
        print(l2[i][0], end=' ')
    print()
    for i in range(n):
        print(l3[i][0], end=' ')