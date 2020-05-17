n = int(input())

graph = []

for i in range(n):
    l = list(map(int,input().split()))
    for j in range(n):
        if l[j]:
            graph.append([i,j])

print(len(graph))
for i in graph:
    print(i[0],i[1])