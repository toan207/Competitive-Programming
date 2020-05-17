# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC03/BLUE_L03P01/statement

n,x = map(int,input().split())
c = list(map(int,input().split()))

c.sort()
count = 0

for i in c:
    count += x*i
    x = max(1,x-1)

print(count)