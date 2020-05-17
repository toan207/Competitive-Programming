# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC05/BLUE_L05P06/statement

import sys

sys.setrecursionlimit(100000)

while True:
    n,m = map(int,input().split())

    if n == 0 and m == 0:
        break

    check = [0] * (250*250 + 1)

    maze = []
    for j in range(n):
        x = list(map(int,input().split()))
        maze.append(x)

    def CheckRoom(r,c,mark):
        global count
        maze[r][c] = mark
        if r + 1 < n and (maze[r+1][c] == 1):
            CheckRoom(r+1,c,mark)
            count += 1
        if r - 1 >= 0 and (maze[r-1][c] == 1):
            CheckRoom(r-1,c,mark)
            count += 1
        if c + 1 < m and (maze[r][c+1] == 1):
            CheckRoom(r,c+1,mark)
            count += 1
        if c - 1 >= 0 and (maze[r][c-1] == 1):
            CheckRoom(r,c-1,mark)
            count += 1

    count = 0
    mark = 0
    ans = 0

    for i in range(n):
        for j in range(m):
            if maze[i][j] == 1:
                CheckRoom(i,j,mark)
                check[count+1] += 1
                count = 0
                ans += 1
    print(ans)
    for i in range(len(check)):
        if check[i]>0:
            print(i,check[i])