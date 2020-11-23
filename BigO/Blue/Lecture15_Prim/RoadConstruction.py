# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC15/BLUE_L15P04/statement

import queue
INF = 10E9

class Node:
    def __init__(self,id,dist):
        self.dist = dist
        self.id = id
    def __lt__(self,other):
        return self.dist <= other.dist

def Prims(s):
    pq = queue.PriorityQueue()
    pq.put(Node(s,0))
    dist[s] = 0
    while not pq.empty():
        top = pq.get()
        u = top.id
        visited[u] = True
        for neighbor in graph[u]:
            v = neighbor.id
            w = neighbor.dist
            if not visited[v] and w < dist[v]:
                dist[v] = w
                pq.put(Node(v,w))

t = int(input())
case = 1
while t:
    space = input()
    m = int(input())
    graph = [[] for i in range (100)]
    city = {}
    cnt = 0
    for i in range (m):
        city1,city2,w = input().split()
        if city1 not in city:
            city[city1] = cnt
            cnt += 1
        if city2 not in city:
            city[city2] = cnt
            cnt += 1
        graph[city[city1]].append(Node(city[city2],int(w)))
        graph[city[city2]].append(Node(city[city1],int(w)))

    dist = [INF for i in range (len(city))]
    visited = [False for i in range (len(city))]
    Prims(0)
    print('Case {}:'.format(case),end = ' ')
    if INF in dist:
        print('Impossible')
    else:
        print(sum(dist))
    t-=1
    case += 1