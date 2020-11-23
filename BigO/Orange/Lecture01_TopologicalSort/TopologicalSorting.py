# https://v2.bigocoder.com/courses/41/lectures/541/problems/328?view=statement

def topologicalSort(graph, result):
    indegree = [0] * V
    zeroInd = []
    for u in range(V):
        for v in graph[u]:
            indegree[v] += 1
    for i in range(V):
        if indegree[i] == 0:
            zeroInd.append(i)
    zeroInd.reverse()
    while zeroInd:
        u = zeroInd.pop()
        result.append(u)
        for v in graph[u]:
            indegree[v] -= 1
            if indegree[v] == 0:
                zeroInd.append(v)
                zeroInd.sort(reverse=True)
    for i in range(V):
        if indegree[i] != 0:
            return False
    return True

V, E = map(int, input().split())
graph = [[] for i in range(V)]
result = []

for i in range(E):
    u, v = map(int, input().split())
    u -= 1
    v -= 1
    graph[u].append(v)
if topologicalSort(graph, result):
    for i in range(V):
        print(result[i]+1, end = ' ')
else:
    print('Sandro fails.')