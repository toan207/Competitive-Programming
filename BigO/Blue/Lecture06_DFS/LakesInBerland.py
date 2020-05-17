# https://codeforces.com/problemset/problem/723/D

import sys
sys.setrecursionlimit(100000)

n,m,k = map(int,input().split())

graph = []
delX = [-1,0,0,1]
delY = [0,-1,1,0]

lakes = []

for i in range(n):
    x = input()
    temp = []
    temp.extend(x)
    graph.append(temp)

def DFS(x,y,mark,n,m):
    graph[x][y] = mark
    for i in range(4):
        if x + delX[i] >= 0 and x + delX[i] < n and y + delY[i] >= 0 and y + delY[i] < m and graph[x + delX[i]][y + delY[i]] == '.':
            DFS(x + delX[i], y + delY[i], mark, n, m)

def lakeSize(i,j,mark):
    count = 0
    for i in range(n):
        for j in range(m):
            if graph[i][j] == mark:
                count += 1
    return count

def checkLake(n,m,mark):
    for i in range(m):
        if graph[0][i] == mark:
            return False
    for i in range(n):
        if graph[i][0] == mark:
            return False
    for i in range(n):
        if graph[i][m-1] == mark:
            return False
    for i in range(m):
        if graph[n-1][i] == mark:
            return False
    return True

def fillLake(x,y,mark):
    graph[x][y] = '*'
    for i in range(4):
        if x + delX[i] >= 0 and x + delX[i] < n and y + delY[i] >= 0 and y + delY[i] < m and graph[x + delX[i]][y + delY[i]] == mark:
            fillLake(x + delX[i], y + delY[i], mark)

mark = 1

for i in range(n):
    for j in range(m):
        if graph[i][j] == '.':
            pos_i = i
            pos_j = j
            DFS(i,j,str(mark),n,m)
            _lakeSize = lakeSize(i,j,str(mark))
            lake = [pos_i,pos_j,_lakeSize,str(mark)]
            if checkLake(n,m,str(mark)):
                lakes.append(lake)
            mark += 1

lakes.sort(key=lambda x: x[2])

count = 0

while len(lakes) > k:
    fillLake(lakes[0][0],lakes[0][1],lakes[0][3])
    count += lakes[0][2]
    lakes.pop(0)

print(count)
for i in range(n):
    for j in range(m):
        if graph[i][j] != '*':
            graph[i][j] = '.'
for i in range(n):
    for j in range(m):
        print(graph[i][j],end='')
    print()