# https://codeforces.com/problemset/problem/787/A

a,b = map(int, input().split())
c,d = map(int, input().split())

i = 0
j = 0

def GCD(a,b):
    if b==0:
        return a
    return GCD(b,a%b)

if (d-b) % GCD(a,c):
    print(-1)
    exit()

while b+a*i!=d+c*j:
    if b + a*i > d + c*j:
        j += 1
    else:
        i += 1

print(b+a*i)