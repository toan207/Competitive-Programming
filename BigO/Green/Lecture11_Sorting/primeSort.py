from math import sqrt

n = int(input())
l = list(map(int,input().split()))

check_prime = [1] * 1000001
check_prime[0] = check_prime[1] = 0

for i in range(2,int(sqrt(1000000)+1)):
    if check_prime[i]:
        for j in range(i*i,1000001,i):
            check_prime[j] = 0

for i in range(n):
    for j in range(i+1,n):
        if l[i]<0 or l[j]<0:
            if l[j]<0 and l[i]<0:
                if l[i]>l[j]:
                    l[i],l[j] = l[j],l[i]
            elif l[j] < 0:
                if l[i]>l[j] and not check_prime[l[i]]:
                    l[i],l[j] = l[j],l[i]
            elif l[i] < 0:
                if l[i]>l[j] and not check_prime[l[j]]:
                    l[i],l[j] = l[j],l[i]
        elif l[i]>l[j] and not check_prime[l[i]] and not check_prime[l[j]]:
            l[i],l[j] = l[j],l[i]

for i in l:
    print(i,end=" ")