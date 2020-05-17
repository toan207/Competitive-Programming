# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC03/BLUE_L03P05

n,w = map(int,input().split())
cups = list(map(int,input().split()))

cups.sort()

boys_min = cups[n]
girl_min = cups[0]

tea = girl_min

if boys_min < girl_min*2:
    tea = boys_min/2

if tea*2*n + tea*n > w:
    tea = w/(3*n)

print(tea*3*n)