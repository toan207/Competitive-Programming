import sys
sys.setrecursionlimit(10000)

n = int(input())

def findFirstNumber(number):
    if number<0:
        return findFirstNumber(-1 * number)
    if number//10!=0:
        return findFirstNumber(number//10)
    return number

print(findFirstNumber(n))