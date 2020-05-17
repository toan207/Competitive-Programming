# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC05/BLUE_L05P04/statement

import sys

sys.setrecursionlimit(100000)

T = int(input())
case = 1

for i in range(T):
    col,row = map(int,input().split())
    maze = []
    for j in range(row):
        x = input()
        temp = []
        temp.extend(x)
        maze.append(temp)
    
    mark = [0,0]

    for j in range(row):
        for k in range(col):
            if maze[j][k] == '@':
                mark = [j,k]
                break

    def CheckRoom(r,c,count):
        maze[r][c] = count
        if r + 1 < row and (maze[r+1][c] == '.' or maze[r+1][c] == '@'):
            CheckRoom(r+1,c,count)
        if r - 1 >= 0 and (maze[r-1][c] == '.' or maze[r-1][c] == '@'):
            CheckRoom(r-1,c,count)
        if c + 1 < col and (maze[r][c+1] == '.' or maze[r][c+1] == '@'):
            CheckRoom(r,c+1,count)
        if c - 1 >= 0 and (maze[r][c-1] == '.' or maze[r][c-1] == '@'):
            CheckRoom(r,c-1,count)

    place = '1'
    CheckRoom(mark[0],mark[1],place)

    count = 0
    for j in range(row):
        for k in range(col):
            if maze[j][k] == '1':
                count += 1
    
    print('Case ',case,': ',count,sep='')
    case += 1