# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC06/BLUE_L06P01/statement

n = int(input())

graph = [[] for i in range(n)]

for i in range(n-1):
    x = list(map(int,input().split()))
    x[0],x[1] = x[0]-1,x[1]-1
    graph[x[0]].append(x[1])
    graph[x[1]].append(x[0])

q = int(input())

girls = []

for i in range(q):
    x = int(input())
    girls.append(x-1)

visited = [False] * n
path = [-1] * n

def DFS(s):
    visited[s] = True
    stack = []
    stack.append(s)
    while len(stack)>0:
        u = stack.pop()
        for i in graph[u]:
            if not visited[i]:
                visited[i] = True
                stack.append(i)
                path[i] = u

DFS(0)

pos = [0] * n

for i in girls:
    count = 0
    mark = i
    while mark != -1:
        mark = path[mark]
        count += 1
    pos[i] = count

_min = n*n
mark = 0

for i in range(n):
    if _min > pos[i] and pos[i] != 0:
        _min = pos[i]
        mark = i

print(mark + 1)