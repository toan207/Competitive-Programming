t = int(input())
b = int(input())
arr = []
for i in range (b):
    s,d = map(int,input().split())
    arr.append((s,d))
PI = 3.141592654
arr.sort(key = lambda x: x[1])
total = 0
for i in arr:
    c = i[1]*2*PI
    if t >= i[0] * c:
        total += i[0]
        t -= i[0]*c
    else:
        total += t//c
        break
print(int(total))