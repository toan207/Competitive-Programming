# https://codeforces.com/problemset/problem/749/A

from math import sqrt

n = int(input())

primes = []
check_prime_list = [1] * (n+1)

check_prime_list[0] = check_prime_list[1] = 0

for i in range(int(sqrt(n)+1)):
    if check_prime_list[i]:
        for j in range(i*i,n+1,i):
            check_prime_list[j] = 0

i = 2
while i <= n:
    if check_prime_list[i]:
        while n-i!=1 and n!=0:
            n -= i
            primes.append(i)
    i += 1

print(len(primes))
for i in primes:
    print(i,end=' ')