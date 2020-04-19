# https://codeforces.com/problemset/problem/300/A

n = int(input())
l = list(map(int,input().split()))

under_zero = list(filter(lambda x: x < 0,l))
greater_zero = list(filter(lambda x: x > 0,l))
equal_zero = list(filter(lambda x: x == 0,l))

if len(greater_zero) == 0:
    greater_zero.append(under_zero[len(under_zero)-1])
    greater_zero.append(under_zero[len(under_zero)-2])
    under_zero = under_zero[:len(under_zero)-2]
if len(under_zero)%2 == 0:
    equal_zero.append(under_zero[len(under_zero)-1])
    under_zero = under_zero[:len(under_zero)-1]

print(len(under_zero), end=' ')
for i in under_zero:
    print(i,end=' ')
print()

print(len(greater_zero), end=' ')
for i in greater_zero:
    print(i,end=' ')
print()

print(len(equal_zero), end=' ')
for i in equal_zero:
    print(i,end=' ')