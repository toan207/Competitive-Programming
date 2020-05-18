# https://codeforces.com/problemset/problem/230/B

from math import sqrt

n = int(input())
x = list(map(int, input().split()))

check_prime = [1] * 1000001
check_prime[0] = check_prime[1] = 0

for i in range(2,int(sqrt(1000000)+1)):
    if check_prime[i]:
        for j in range(i*i,1000001,i):
            check_prime[j] = 0

for i in x:
    if sqrt(i) == int(sqrt(i)):
        if check_prime[int(sqrt(i))]:
            print('YES')
        else:
            print('NO')
    else:
        print('NO')