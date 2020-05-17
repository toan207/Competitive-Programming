# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC06/BLUE_L06P04/statement

import sys
sys.setrecursionlimit(100000)

t = int(input())

for test in range(t):
    n,m = map(int,input().split())

    graph = [[] for i in range(n)]
    visited = [0] * n
    path = [-1] * n

    for i in range(m):
        x1,x2 = map(int,input().split())
        graph[x1-1].append(x2-1)

    f = 0

    def DFS(s,n):
        global f
        visited[s] = 1
        for i in graph[s]:
            if not visited[i]:
                DFS(i,n)
            elif visited[i] == 1:
                f = 1
                break
        visited[s] = -1
    for i in range(n):
        if not visited[i]:
            DFS(i,n)
        if f:
            break
    
    print('YES' if f else 'NO')