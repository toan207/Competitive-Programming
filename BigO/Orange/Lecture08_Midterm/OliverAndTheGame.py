# https://v2.bigocoder.com/courses/41/lectures/567/problems/422?view=statement
import sys

sys.setrecursionlimit(1000000)

MAX = 100001
count = 0

def DFS(z):
    global count
    count += 1
    ta[z] = count
    for i in range(len(graph[z])):
        if (not ta[graph[z][i]]):
            DFS(graph[z][i])
            count += 1
    count += 1
    td[z] = count

n = int(input())
graph = [[] for i in range(MAX)]
ta = [0] * MAX
td = [0] * MAX

for i in range(1, n):
    x,y = map(int, input().split())

    graph[x].append(y)
    graph[y].append(x)

DFS(1)

m = int(input())
for i in range(m):
    a,b,c = map(int, input().split())
    if a == 1:
        b,c = c,b
    print('YES' if (ta[b] <= ta[c] and td[c] <= td[b]) else 'NO')
