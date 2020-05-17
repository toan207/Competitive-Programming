# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC06/BLUE_L06P05/statement

n,m = map(int,input().split())

graph = [[] for i in range(n)]
visted = [False] * n
dist = [0] * n

for i in range(m):
    x,y = map(int,input().split())
    graph[x-1].append(y-1)

def DFS(s):
    visted[s] = True
    dist[s] = 1
    stack = []
    stack.append(s)
    while stack != []:
        u = stack.pop()
        for i in graph[u]:
            if not visted[i]:
                visted[i] = True
                dist[i] = 1
                stack.append(i)

    return(dist.count(1))

_max = 0

for i in range(n):
    _max = max(DFS(i),_max)
    visted = [False] * n
    dist = [0] * n

print(_max)