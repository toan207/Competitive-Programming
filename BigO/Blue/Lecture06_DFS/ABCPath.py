# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC06/BLUE_L06P07/statement

import sys

sys.setrecursionlimit(100000)

case = 1

delX = [-1,0,0,1,1,-1,-1,1]
delY = [0,-1,1,0,1,-1,1,-1]

while True:
    n,m = map(int,input().split())

    if n == m == 0:
        break

    visited = [[False] * m for i in range(n)]
    graph = []
    for i in range(n):
        x = input()
        temp = []
        temp.extend(x)
        graph.append(temp)

    character = ''

    def DFS(x,y,n,m,pos):
        global character

        if chr(pos) not in character:
            character += chr(pos)

        if pos == ord('Z'):
            return
        
        visited[x][y] = True

        for i in range(8):
            if x + delX[i] >= 0 and x + delX[i] < n and y + delY[i] >= 0 and y + delY[i] < m and pos < ord('Z') and graph[x + delX[i]][y + delY[i]] == chr(pos+1) and not visited[x + delX[i]][y + delY[i]]:
                visited[x + delX[i]][y + delY[i]] = True
                DFS(x + delX[i], y + delY[i], n, m, pos+1)
                visited[x + delX[i]][y + delY[i]] = False
    
    for i in range(n):
        for j in range(m):
            if graph[i][j] == 'A':
                DFS(i,j,n,m,ord('A'))
    
    print('Case ',case,': ',len(character),sep='')
    case += 1