# https://codeforces.com/problemset/problem/703/A

n = int(input())

Mishka = 0
Chris = 0

for i in range(n):
    Mishka_point,Chris_point = list(map(int, input().split()))
    if Mishka_point > Chris_point:
        Mishka += 1
    elif Mishka_point < Chris_point:
        Chris += 1

if Mishka > Chris:
    print('Mishka')
elif Mishka < Chris:
    print('Chris')
else:
    print('Friendship is magic!^^')