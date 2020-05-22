# https://codeforces.com/problemset/problem/68/B

n, k = map(int, input().split())
a = list(map(int, input().split()))

sumEn = sum(a)

left = 0
right = 1000

eps = 1e-7

while right - left > eps:
    mid = (left + right)/2
    sumLoss = 0
    for i in a:
        if i > mid:
            sumLoss += i - mid
    sumLoss = sumLoss * (k/100)
    if mid*n < sumEn - sumLoss:
        left = mid
    else:
        right = mid

print('%.7f' % left)