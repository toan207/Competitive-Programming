#GCPD (Greatest Common Prime Divisor) được định nghĩa là số nguyên tố lớn nhất là ước của các số nguyên dương cho trước. 
#Nhiệm vụ của bạn là tìm GCPD của hai số nguyên a và b.

from math import sqrt

a = 12
b = 18
check_prime = [1] * (b+1)
check_prime[0] = check_prime[1] = 0
count = 0

for i in range(2,int(sqrt(b)+1)):
    if check_prime[i]:
        for j in range(i*i,b+1,i):
            check_prime[j] = 0

for i in range(min(a,b)//2,1,-1):
    if check_prime[i] and a%i==0 and b%i==0:
        count = i
        break

print(count)