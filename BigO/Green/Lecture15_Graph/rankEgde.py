n,x = map(int, input().split())

for i in range(n):
    l = list(map(int, input().split()))
    if i == x:
        print(l.count(1))
        break