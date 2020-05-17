# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC03/BLUE_L03P03/statement

n = int(input())
a = list(map(int,input().split()))

temp = sorted(a)

if temp==a:
    print('yes')
    print(1,1)
else:
    s = 0
    e = 0
    for i in range(n):
        if a[i] != temp[i]:
            s = i
            break
    for i in range(s,n):
        if a[s]<a[i]:
            e = i-1
            break
    if e == 0:
        e = n-1
    mark = a[s:e+1]
    mark = mark[::-1]
    a[s:e+1] = mark
    if a == temp:
        print('yes')
        print(s+1,e+1)
    else:
        print('no')