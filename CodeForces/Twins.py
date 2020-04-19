# https://codeforces.com/problemset/problem/160/A

n = int(input())
a = list(map(int, input().split()))

a.sort(reverse=True)
average = sum(a)//2

take = 0
count = 0

for i in a:
    take += i
    count += 1
    if take>average:
        break

print(count)