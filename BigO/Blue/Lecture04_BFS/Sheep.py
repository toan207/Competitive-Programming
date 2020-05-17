# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC05/BLUE_L05P08/statement

import sys

sys.setrecursionlimit(100000)

row,col = map(int,input().split())
maze = []
for j in range(row):
    x = input()
    temp = []
    temp.extend(x)
    maze.append(temp)

alive = [0,0]

animals = [0,0]

def CheckRoom(r,c,count):
    maze[r][c] = count
    if r + 1 < row and (maze[r+1][c] == '.' or maze[r+1][c] == 'k' or maze[r+1][c] == 'v'):
        if maze[r+1][c] == 'k':
            animals[0] += 1
        elif maze[r+1][c] == 'v':
            animals[1] += 1
        CheckRoom(r+1,c,count)
    if r - 1 >= 0 and (maze[r-1][c] == '.' or maze[r-1][c] == 'k' or maze[r-1][c] == 'v'):
        if maze[r-1][c] == 'k':
            animals[0] += 1
        elif maze[r-1][c] == 'v':
            animals[1] += 1
        CheckRoom(r-1,c,count)
    if c + 1 < col and (maze[r][c+1] == '.' or maze[r][c+1] == 'k' or maze[r][c+1] == 'v'):
        if maze[r][c+1] == 'k':
            animals[0] += 1
        elif maze[r][c+1] == 'v':
            animals[1] += 1
        CheckRoom(r,c+1,count)
    if c - 1 >= 0 and (maze[r][c-1] == '.' or maze[r][c-1] == 'k' or maze[r][c-1] == 'v'):
        if maze[r][c-1] == 'k':
            animals[0] += 1
        elif maze[r][c-1] == 'v':
            animals[1] += 1
        CheckRoom(r,c-1,count)

count = 1
for j in range(row):
    for k in range(col):
        if maze[j][k] == '.' or maze[j][k] == 'k' or maze[j][k] == 'v':
            if maze[j][k] == 'k':
                animals[0] += 1
            elif maze[j][k] == 'v':
                animals[1] += 1
            CheckRoom(j,k,str(count))
            f = 0
            for m in range(col):
                if maze[0][m] == str(count):
                    f = 1
                    break
            for m in range(1,row):
                if maze[m][0] == str(count):
                    f = 1
                    break
            if col != 1:
                for m in range(1,row):
                    if maze[m][col-1] == str(count):
                        f = 1
                        break
            if row != 1:
                for m in range(1,col-1):
                    if maze[row-1][m] == str(count):
                        f = 1
                        break
            if f:
                alive[0] += animals[0]
                alive[1] += animals[1]
            elif animals[0]>animals[1]:
                alive[0] += animals[0]
            else:
                alive[1] += animals[1]
            animals = [0,0]
            count += 1

print(alive[0],alive[1])