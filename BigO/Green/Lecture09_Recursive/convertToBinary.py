import sys
sys.setrecursionlimit(10000)

n = int(input())

def convertToBinary(n,binary):
    if n!=0:
        return convertToBinary(n//2,str(n%2) + binary)
    if binary=='':
        return '0'
    return binary

print(convertToBinary(n,''))