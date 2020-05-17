m,k = map(int, input().split())

l = []

for i in range(m):
    x = list(map(int, input().split()))
    l.append(x)

l.sort(key=lambda x: x[2], reverse=True)

size = len(l)

for i in range(k):
    print(l[size + i - k][0],l[size + i - k][1])