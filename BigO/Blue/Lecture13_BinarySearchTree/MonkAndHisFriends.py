# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC13/BLUE_L13P04

t = int(input())

for test in range(t):
    n,m = map(int, input().split())
    students = list(map(int, input().split()))

    mark = {}

    for i in range(n):
        mark[students[i]] = 1

    for i in range(n, n+m):
        if mark.get(students[i]):
            print('YES')
        else:
            print('NO')
        mark[students[i]] = 1