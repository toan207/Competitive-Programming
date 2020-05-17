# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC06/BLUE_L06P06/statement

from collections import Counter
import sys

sys.setrecursionlimit(100000)

check = 'ALLIZZWELL'

t = int(input())

for test in range(t):
    n,m = map(int,input().split())

    graph = []
    visited = [[False] * m for i in range(n)]

    delX = [-1,0,0,1,1,-1,-1,1]
    delY = [0,-1,1,0,1,-1,1,-1]

    for i in range(n):
        x = input()
        temp = []
        temp.extend(x)
        graph.append(temp)
    
    f = 0

    def DFS(x,y,n,m,pos):
        global f

        if pos == 9:
            f = 1
            return
        
        visited[x][y] = True

        for i in range(8):
            if x + delX[i] >= 0 and x + delX[i] < n and y + delY[i] >= 0 and y + delY[i] < m and pos < len(check) and graph[x + delX[i]][y + delY[i]] == check[pos+1] and not visited[x + delX[i]][y + delY[i]]:
                visited[x + delX[i]][y + delY[i]] = True
                DFS(x + delX[i], y + delY[i], n, m, pos+1)
                visited[x + delX[i]][y + delY[i]] = False

    for i in range(n):
        for j in range(m):
            if graph[i][j] == 'A':
                DFS(i,j,n,m,0)
                if f:
                    break
        if f:
            break

    print('YES' if f else 'NO')

    space = input()