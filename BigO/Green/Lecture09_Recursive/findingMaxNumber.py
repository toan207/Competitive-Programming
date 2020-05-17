import sys
sys.setrecursionlimit(10000)

n = int(input())

def findMaxNumber(number,maxNumber):
    if number<0:
        return findMaxNumber(-1 * number,maxNumber)
    if number//10!=0:
        if number%10 > maxNumber:
            maxNumber = number%10
        return findMaxNumber(number//10,maxNumber)
    if number%10 > maxNumber:
        maxNumber = number%10
    return maxNumber

print(findMaxNumber(n,0))