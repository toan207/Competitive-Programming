n = int(input())

_min = 1e9

graph = {}

for i in range(n):
    u,v,w = map(int, input().split())
    if not graph.get(w):
        graph[w] = 1
    else:
        graph[w] += 1
    
    _min = min(_min, w)

print(_min * graph[_min])