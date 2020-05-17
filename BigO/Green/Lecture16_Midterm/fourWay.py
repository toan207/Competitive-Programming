ways = []

for i in range(4):
    l = list(map(int, input().split()))
    ways.append(l)

f = 1

for i in range(4):
    if ways[i][3]:
        if ways[i][0] or ways[i][1] or ways[i][2] or ways[(i+1)%4][0] or ways[(i+2)%4][1] or ways[(i+3)%4][2]:
            f = 0
            break

print('NO' if f else 'YES')