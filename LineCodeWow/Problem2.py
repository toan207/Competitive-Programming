n = int(input())
home = []

for i in range(n):
    x = list(map(int,input().split()))
    home.append(x)

home.sort(key = lambda x: x[1])

while True:
    try:
        pos = int(input())
        mi, ma = 0, 0
        r, l = 0, n - 1
        while abs(r-l) > 100:
            mid = (r + l)//2
            if home[mid][1] < pos:
                r = mid
            elif home[mid][1] > pos:
                l = mid
        mi, ma = r, l
        for i in range(r,l+1):
            if home[i][1] < pos:
                mi = i
            else:
                ma = i
                break
        if abs(home[ma][1] - pos) < abs(home[mi][1] - pos) or (abs(home[ma][1] - pos) == abs(home[mi][1] - pos) and home[ma][0] < home[mi][0]):
            print(home[ma][0])
        else:
            print(home[mi][0])
    except:
        break