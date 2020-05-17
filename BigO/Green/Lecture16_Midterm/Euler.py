n = int(input())

f = 1

for i in range(n):
    l = list(map(int,input().split()))
    if l.count(1)%2 != 0:
        f = 0
        break

print('YES' if f else 'NO')