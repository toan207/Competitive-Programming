import math
epsilon = 10**(-9)
def func(x):
    k = p*math.exp(-x) + q*math.sin(x) + r*math.cos(x) + s*math.tan(x)+t*(x**2) + u
    return k

while True:
    try:
        p,q,r,s,t,u = map(float,input().split())
        if func(0) < 0 or func(1) > 0:
            print('No solution')
            continue
        x0 = 1.0
        x1 = 0.0
        ans = 0.0
        while abs(x1 - x0) > epsilon:
            x = (x0 + x1)/2
            f = func(x)
            if f > 0:
                x1 = x
            else:
                x0 = x
                ans = x
        print('{:.4f}'.format(x))
    except:
        break