import sys
sys.setrecursionlimit(10000)

n = int(input())

def count(number,temp):
    if number<0:
        return count(-1 * number, temp)
    if number//10!=0:
        return count(number//10,temp+1)
    return temp

print(count(n,1))