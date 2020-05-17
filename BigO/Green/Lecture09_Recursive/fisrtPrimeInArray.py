import sys
sys.setrecursionlimit(10000)

n = int(input())
a = list(map(int,input().split()))

from math import sqrt

def isPrime(n):
    if n<2:
        return False
    for i in range(2,int(sqrt(n))+1):
        if n%i==0:
            return False
    return True

def firstPrime(arr,pos):
    if pos == len(arr):
        return -1
    if isPrime(arr[pos]):
        return pos
    return firstPrime(arr,pos+1)

print(firstPrime(a,0))