# https://v2.bigocoder.com/courses/41/lectures/541/problems/329?view=statement

import heapq

class MaxHeap():
    def __init__(self, value):
        self.value = value
    def __lt__(self, other):
        return self.value > other.value

def topologicalSort(graph, result):
    indegree = [0] * V
    zeroInd = []
    heapq.heapify(zeroInd)
    for u in range(V):
        for v in graph[u]:
            indegree[v] += 1

    for i in range(V):
        if indegree[i] == 0:
            heapq.heappush(zeroInd,MaxHeap(i))
    
    while zeroInd:
        u = heapq.heappop(zeroInd).value
        result.append(u)
        for v in graph[u]:
            indegree[v] -= 1
            if indegree[v] == 0:
                heapq.heappush(zeroInd,MaxHeap(v))
    for i in range(V):
        if indegree[i] != 0:
            return False
    return True

V, E = map(int, input().split())
graph = [[] for i in range(V)]
result = []

ans = [0] * V

for i in range(E):
    u = list(map(int, input().split()))
    for j in range(1,u[0]+1):
        graph[i].append(u[j]-1)
topologicalSort(graph,result)
for i in range(1,len(result)):
    ans[result[i]] = result[i-1] + 1
for i in ans:
    print(i)