# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC12/BLUE_L12P05

t = int(input())

for test in range(t):
    n = int(input())
    r = list(map(int, input().split()))

    d = {}

    mark = r[0] - 0
    for i in range(1, n):
        temp = r[i] - r[i - 1]
        if temp == mark:
            mark += 1
        elif temp > mark:
            mark = temp
    
    print('Case ' + str(test + 1) + ': ' + str(mark))