# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC05/BLUE_L05P03/statement

import queue

sk,lk = map(int,input().split())
n = int(input())
valueKey = list(map(int,input().split()))

mark = [-1] * 100001

def BFS(s):
    mod = 100000
    q = queue.Queue()
    q.put(s)
    mark[s] = 0
    while not q.empty():
        temp = q.get()
        for i in valueKey:
            if mark[(temp*i)%mod] == -1:
                mark[(temp*i)%mod] = mark[temp] + 1
                q.put((temp*i)%mod)
        if mark[lk]!=-1:
            break
    return mark[lk]

print(BFS(sk))