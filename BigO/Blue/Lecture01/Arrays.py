# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC01/BLUE_L01P05/statement
na,nb = list(map(int,input().split()))
k,m = list(map(int,input().split()))
a = list(map(int,input().split()))
b = list(map(int,input().split()))

if a[k-1]<b[nb-m]:
    print('YES')
else:
    print('NO')