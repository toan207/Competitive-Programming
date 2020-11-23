# https://codeforces.com/contest/1364/problem/0

t = int(input())

for test in range(t):
    n,x = map(int, input().split())
    nums = list(map(int, input().split()))

    sumS = sum(nums)
    sumE = sumS

    i = 0
    j = n - 1

    if not sumS % x:
        while n>0:
            if sumS % x == 0 and sumE % x == 0:
                sumS -= nums[i]
                sumE -= nums[j]
                i += 1
                j -= 1
                n -= 1
            elif sumS % x != 0 or sumE % x != 0:
                break
    
    if n:
        print(n)
    else:
        print(-1)