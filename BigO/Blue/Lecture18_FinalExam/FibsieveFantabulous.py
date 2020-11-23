# https://bigocoder.com/courses/OBLUE01/OBLUE01_LEC18/BLUE_L18P02/statement

from math import ceil

t = int(input())

for test in range(t):
    n = int(input())
    
    mark = ceil(n**0.5)
    row, col = 0, 0

    if mark % 2:
        if n < mark**2 - mark + 1:
            row = mark
            col = n - (mark-1)**2
        else:
            row = mark**2 - n + 1
            col = mark
    else:
        if n < mark**2 - mark + 1:
            row = n - (mark-1)**2
            col = mark
        else:
            row = mark
            col = mark**2 - n + 1
    
    print('Case ' + str(test + 1) + ':', row, col)