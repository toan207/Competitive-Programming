n = int(input())

ans = []

for i in range(n):
    l = list(map(int, input().split()))
    for j in range(i,n):
        if l[j]:
            ans.append([i,j])

print(len(ans))
for i in ans:
    print(i[0],i[1])