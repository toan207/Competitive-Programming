# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC13/BLUE_L13P06

n = int(input())
p = list(map(int, input().split()))

_min = int(1e16)
l = []

for i in range(n):
    l.append((p[i],i))

l.sort(reverse=True)

for i in range(n):
    for j in range(i+1,n):
        if l[i][1] < l[j][1]:
            _min = min(_min, l[i][0] - l[j][0])
            break

print(_min)