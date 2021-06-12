# https://codeforces.com/problemset/problem/1345/D
 
n, m = map(int, input().split())
grid = []
for _ in range(n):
    temp = input()
    #temp2 = [_ for _ in temp]
    grid.append(temp)

ansFlag = True
wrow = 0
wcol = 0
# row check
for i in range(n):
    invCnt = 0
    flag = True
    for j in range(m):
        if j > 0:
            if grid[i][j] != grid[i][j - 1]:
                invCnt += 1
            if (invCnt == 2 and grid[i][0] == "#") or invCnt >= 3:
                ansFlag = False
        if grid[i][j] == "#":
            flag = False
    if flag:
        wrow += 1   
if not ansFlag:
    print(-1)
    exit()

# col check
for j in range(m):
    invCnt = 0
    flag = True
    for i in range(n):
        if i > 0:
            if grid[i][j] != grid[i - 1][j]:
                invCnt += 1
            if (invCnt == 2 and grid[0][j] == "#") or invCnt >= 3:
                ansFlag = False
        if grid[i][j] == "#":
            flag = False
    if flag:
        wcol += 1
if not ansFlag:
    print(-1)
    exit()

if wcol * wrow == 0 and wcol + wrow > 0:
    print(-1)
    exit()
visitedSet = set()
# count connected elements -> min of N        
ans = 0
for i in range(n):
    for j in range(m):
        if grid[i][j] == "#" and (i, j) not in visitedSet:
            #BFS
            stack = [(i, j)]
            while stack:
                x, y = stack.pop()
                visitedSet.add((x, y))
                # make visited
                #grid[x][y] = "*"
                if x > 0 and (x - 1, y) not in visitedSet and grid[x - 1][y] == "#":
                    stack.append((x - 1, y))
                if x < n - 1 and (x + 1, y) not in visitedSet and grid[x + 1][y] == "#":
                    stack.append((x + 1, y))
                if y > 0 and (x, y - 1) not in visitedSet and grid[x][y - 1] == "#":
                    stack.append((x, y - 1))
                if y < m - 1 and (x, y + 1) not in visitedSet and grid[x][y + 1] == "#":
                    stack.append((x, y + 1))
            ans += 1
print(ans)