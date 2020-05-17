import sys
sys.setrecursionlimit(10000)

n = int(input())

def divide(number,temp):
    if number/temp == number//temp and (number//temp)%2!=0:
        return number//temp
    return divide(number,temp + 1)

print(divide(n,1))