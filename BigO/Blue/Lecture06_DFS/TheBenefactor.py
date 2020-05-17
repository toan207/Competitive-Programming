# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC06/BLUE_L06P08

t = int(input())

for test in range(t):
    places = int(input())

    graph = [[] for i in range(places)]
    length = {}

    for i in range(places-1):
        x = list(map(int,input().split()))
        x[0],x[1] = x[0]-1,x[1]-1
        graph[x[1]].append(x[0])
        graph[x[0]].append(x[1])
        length[str(x[0]) + str(x[1])] = x[2]
        length[str(x[1]) + str(x[0])] = x[2]

    def DFS(s):
        visited[s] = True
        stack = []
        stack.append(s)
        while stack != []:
            u = stack.pop()
            for i in graph[u]:
                if not visited[i]:
                    visited[i] = True
                    stack.append(i)
                    dist[i] = dist[u] + length[str(u) + str(i)]
    
    _max = 0
    mark = 0
    for i in range(2):
        visited = [False] * places
        dist = [0] * places
        DFS(mark)
        for j in range(len(dist)):
            if dist[j] > _max:
                mark = j
                _max = dist[j]
    
    print(_max)