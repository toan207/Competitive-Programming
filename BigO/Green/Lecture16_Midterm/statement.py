a = int(input())
b = int(input())
c = int(input())

l = [a+b+c,(a+b)*c,a+b*c,a*c+b,a*(b+c),a*b*c]

print(max(l))