import sys
sys.setrecursionlimit(10000)

n = int(input())

def convertToHex(n,hex):
    hexCode = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']
    if n!=0:
        return convertToHex(n//16,hexCode[n%16] + hex)
    if hex=='':
        return '0'
    return hex

print(convertToHex(n,''))