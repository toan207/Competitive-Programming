# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC13/BLUE_L13P01/statement

t = int(input())

for test in range(t):
    n, x = map(int, input().split())
    a = set(map(int, input().split()))

    temp = len(a)
    if x > temp:
        print('Bad')
    elif x < temp:
        print('Average')
    else:
        print('Good')