# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC13/BLUE_L13P02/statement

n = int(input())

d = {}
l = []

for i in range(n):
    x = input().split()

    for p in x:
        d[p] = 1
    
    l.append(x)

mark = 0
level = {}

level[0] = ['Isenbaev']
d['Isenbaev'] = 0

while level[mark]:
    mark += 1
    level[mark] = []

    for i in l:
        f = 0
        for j in i:
            if j in level[mark - 1]:
                f = 1
        if f:
            for j in i:
                if d[j]:
                    d[j] = 0
                    level[mark].append(j)

ans = []

for i in level.keys():
    for j in level[i]:
        ans.append( (i, j) )

for i in d.keys():
    if d[i]:
        ans.append( ('undefined', i) )

ans.sort(key=lambda x: x[1])

for i in ans:
    print(i[1], i[0])