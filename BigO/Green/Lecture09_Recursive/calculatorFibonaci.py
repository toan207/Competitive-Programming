import sys
sys.setrecursionlimit(10000)

n = int(input())

numbers = [None] * (n+1)
numbers[0] = 1
if n>=1:
    numbers[1] = 1

def fib(n):
    if numbers[n] == None:
        numbers[n] = fib(n-1) + fib(n-2)
    return numbers[n]

print(fib(n))