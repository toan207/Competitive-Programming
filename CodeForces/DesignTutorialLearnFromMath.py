# https://codeforces.com/problemset/problem/472/A

from math import sqrt

n = int(input())

check_prime = [1] * n
check_prime[0] = check_prime[1] = 0

for i in range(2,int(sqrt(n)+1)):
    if check_prime[i]:
        for j in range(i*i,n,i):
            check_prime[j] = 0

for i in range(4,(n//2)+1):
    if not check_prime[i] and not check_prime[n-i]:
        print(i,n-i)
        break
    