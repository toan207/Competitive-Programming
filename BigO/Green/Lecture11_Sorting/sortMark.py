n,m = list(map(int,input().split()))

l = []

for i in range(n):
    x = input().split()
    x[1] = float(x[1])
    l.append(x)

for i in range(n):
    for j in range(i+1,n):
        if l[i][1]<l[j][1]:
            l[i],l[j] = l[j],l[i]
        elif l[i][1] == l[j][1]:
            if len(l[i][0]) > len(l[j][0]):
                l[i],l[j] = l[j],l[i]
            elif l[i][0]>l[j][0] and len(l[i][0]) >= len(l[j][0]):
                l[i],l[j] = l[j],l[i]

for i in range(m):
    print(l[i][0])