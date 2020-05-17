# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC01/BLUE_L01P03
n = input()
minutes = list(map(int,input().split()))

total_time = 0
mark = 0

for i in minutes:
    watching = min(i-mark,15)
    total_time += watching
    if i-mark>=16:
        break
    mark = i
if mark == minutes[-1]:
    total_time += min(90-minutes[-1],15)
print(total_time)