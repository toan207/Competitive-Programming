n = int(input())
l = list(map(int,input().split()))

for i in range(n):
    for j in range(i+1,n):
        if l[i]%2==0 and l[j]%2==0:
            if l[i]>l[j]:
                l[i],l[j] = l[j],l[i]
        elif l[i]%2!=0 and l[j]%2!=0:
            if l[i]<l[j]:
                l[i],l[j] = l[j],l[i]

for i in l:
    print(i,end=" ")