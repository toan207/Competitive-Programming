# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC05/BLUE_L05P07

import sys

sys.setrecursionlimit(100000)

row,col = map(int,input().split())
maze = []
for j in range(row):
    x = input()
    temp = []
    temp.extend(x)
    maze.append(temp)

r1,c1 = map(int,input().split())
r2,c2 = map(int,input().split())

r1,c1 = r1-1,c1-1
r2,c2 = r2-1,c2-1

count = 0

if maze[r2][c2] != 'X':
    if r2 - 1 >= 0 and maze[r2-1][c2] == '.':
        count += 1
    if r2 + 1 < row and  maze[r2+1][c2] == '.':
        count += 1
    if c2 - 1 >= 0 and maze[r2][c2-1] == '.':
        count += 1
    if c2 + 1 < col and maze[r2][c2+1] == '.':
        count += 1
    if count < 2:
        print('NO')
        exit()

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

mark = '1'
CheckRoom(r1,c1,mark)

count = 0
if maze[r2][c2] == 'X':
    if r2 - 1 >= 0 and maze[r2-1][c2] == '1':
        count += 1
    if r2 + 1 < row and  maze[r2+1][c2] == '1':
        count += 1
    if c2 - 1 >= 0 and maze[r2][c2-1] == '1':
        count += 1
    if c2 + 1 < col and maze[r2][c2+1] == '1':
        count += 1
    if count != 0:
        print('YES')
    else:
        print('NO')
else:
    if maze[r2][c2] == maze[r1][c1]:
        print('YES')
    else:
        print('NO')