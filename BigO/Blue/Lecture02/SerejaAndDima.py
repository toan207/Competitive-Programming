# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC02/BLUE_L02P05/statement
N = int(input())
cards = list(map(int,input().split()))

points = [0,0]

i = 0
j = N-1

while i<=j:
    if cards[i]>cards[j]:
        points[0] += cards[i]
        i += 1
    else:
        points[0] += cards[j]
        j -= 1
    if i>j:
        break
    if cards[i]>cards[j]:
        points[1] += cards[i]
        i += 1
    else:
        points[1] += cards[j]
        j -= 1

print(points[0],points[1])