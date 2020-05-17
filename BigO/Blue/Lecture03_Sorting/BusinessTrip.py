# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC03/BLUE_L03P07

k = int(input())
a = list(map(int,input().split()))

a.sort(reverse=True)

count = 0
i = 0

while k>0 and i<12:
    count += 1
    k -= a[i]
    i += 1

if k>0:
    print(-1)
else:
    print(count)