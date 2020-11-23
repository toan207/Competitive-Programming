# https://v2.bigocoder.com/courses/41/lectures/567/problems/424?view=statement

MOD = 10**9 + 7

def m(a,b,m):
    r = 1
    a%=m
    while b>0:
        if b%2:
            r = (r*a) % m
        b //= 2
        a = (a*a)%m
    return r

moves = [None] * 100001
moves[1] = 1
moves[2] = 3
t = int(input())

for _ in range(t):
    n = int(input())
    print(m(2,n,MOD) - 1)