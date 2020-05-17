# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC05/BLUE_L05P02/statement

import sys

sys.setrecursionlimit(100000)

T = int(input())

for i in range(T):
    row,col = map(int,input().split())
    maze = []
    for j in range(row):
        x = input()
        temp = []
        temp.extend(x)
        maze.append(temp)
    
    opening = 0
    s = [-1,-1]
    e = [-1,-1]
    for j in range(col):
        if maze[0][j] == '.':
            opening += 1
            if s == [-1,-1]:
                s = [0,j]
            else:
                e = [0,j]
    for j in range(1,row):
        if maze[j][0] == '.':
            opening += 1
            if s == [-1,-1]:
                s = [j,0]
            else:
                e = [j,0]
    if col != 1:
        for j in range(1,row):
            if maze[j][col-1] == '.':
                opening += 1
                if s == [-1,-1]:
                    s = [j,col-1]
                else:
                    e = [j,col-1]
    if row != 1:
        for j in range(1,col-1):
            if maze[row-1][j] == '.':
                opening += 1
                if s == [-1,-1]:
                    s = [row-1,j]
                else:
                    e = [row-1,j]
    
    if opening>2 or opening<2 or (row==1 and col==1):
        print('invalid')
        continue
    def CheckRoom(r,c,count):
        maze[r][c] = count
        if r + 1 < row and maze[r+1][c] == '.':
            CheckRoom(r+1,c,count)
        if r - 1 >= 0 and maze[r-1][c] == '.':
            CheckRoom(r-1,c,count)
        if c + 1 < col and maze[r][c+1] == '.':
            CheckRoom(r,c+1,count)
        if c - 1 >= 0 and maze[r][c-1] == '.':
            CheckRoom(r,c-1,count)

    count = 1
    CheckRoom(s[0],s[1],count)

    if maze[s[0]][s[1]] == maze[e[0]][e[1]]:
        print('valid')
    else:
        print('invalid')