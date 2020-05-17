# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC02/BLUE_L02P07

n = int(input())
L = list(map(int,input().split()))

alive = [1] * n
mark = n - 1
kills = min(L[mark],n-1)

while mark>=0:
    if mark - mark + 1<=kills:
        alive[mark-1] = 0
    mark -= 1
    kills -= 1
    kills = max(kills,min(mark,L[mark]))

print(alive.count(1))