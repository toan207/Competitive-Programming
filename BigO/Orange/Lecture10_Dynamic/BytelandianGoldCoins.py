# https://v2.bigocoder.com/courses/41/lectures/573/problems/445?view=statement

d = dict()

def coins(n):
    a = n//2
    b = n//3
    c = n//4

    if a+b+c > n:
        if not d.get(a):
            d[a] = coins(a)
        if not d.get(b):
            d[b] = coins(b)
        if not d.get(c):
            d[c] = coins(c)
        return d[a] + d[b] + d[c]
    return n

while True:
    try:
        n = int(input())
        print(coins(n))
    except:
        break