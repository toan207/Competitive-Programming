# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC01/BLUE_L01P01/statement
s = input()
n = input()

if (n.count('0')==1 and len(n)!=1) or n=='1':
    print('YES')
else:
    print('NO')