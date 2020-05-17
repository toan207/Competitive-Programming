# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC01/BLUE_L01P08
from collections import(Counter)

s1 = input()
s2 = input()

if len(s2)>len(s1):
    print('need tree')
else:
    c1 = Counter(s1)
    c2 = Counter(s2)
    f = 1
    for i in c2.keys():
        if i not in c1.keys() or c1[i]<c2[i]:
            f = 0
            break
    check = 0
    for i in range(len(s1)):
        if check==len(s2):
            break
        if s1[i] == s2[check]:
            check += 1
    if f:
        if len(s1)==len(s2):
            print('array')
        elif check==len(s2):
            print('automaton')
        else:
            print('both')
    else:
        print('need tree')