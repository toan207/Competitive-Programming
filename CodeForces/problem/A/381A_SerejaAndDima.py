# https://codeforces.com/problemset/problem/381/A

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