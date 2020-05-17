# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC03/BLUE_L03P04

n = int(input())
points = list(map(int,input().split()))

rate = [1] * n

for i in range(n):
    count = 0
    for j in range(n):
        if points[i]<points[j]:
            count += 1
    rate[i] += count

for i in rate:
    print(i,end=' ')