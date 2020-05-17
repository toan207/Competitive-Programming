# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC06/BLUE_L06P02

t = int(input())

for i in range(t):
    n = int(input())

    graph = [[] for j in range(n)]
    path = [-1] * n
    visited = [False] * n

    e = int(input())

    for j in range(e):
        x = list(map(int,input().split()))
        graph[x[0]].append(x[1])
        graph[x[1]].append(x[0])

    def DFS(s):
        visited[s] = True
        stack = []
        stack.append(s)

        while stack != []:
            u = stack.pop()
            for i in graph[u]:
                if not visited[i]:
                    visited[i] = True
                    path[i] = u
                    stack.append(i)
    
    for j in range(n):
        DFS(j)
    
    print(path.count(-1))