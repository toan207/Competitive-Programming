# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC04/BLUE_L04P07

import queue

n,b = map(int,input().split())

ans = [0] * n
pos= 0

stack = []
wait = queue.Queue()
current = 0

if n<=b:
    _list = []
    for i in range(n):
        x = list(map(int,input().split()))
        _list.append(x)
    ans[0] = _list[0][0] + _list[0][1]
    for i in range(1,n):
        ans[i] = max(ans[i-1],_list[i][0]) + _list[i][1]
else:
    _list = []
    for j in range(n):
        x = list(map(int,input().split()))
        _list.append(x)
    i = 0
    for j in _list:
        if stack == []:
            stack.append(j)
            ans[pos] = j[0] + j[1]
            pos += 1
            current = 0
        elif j[0]>=ans[current]:
            stack.pop()
            wait.put(j)
            stack.append(wait.get())
            if j[0]>ans[current] and wait.empty():
                ans[pos] = j[0] + stack[0][1]
            else:
                ans[pos] = max(ans[current],stack[0][0]) + stack[0][1]
            current = pos
            pos += 1
            while pos<n-1 and (ans[pos]==-1):
                pos += 1
        elif wait.qsize()<b:
            wait.put(j)
        else:
            ans[i] = -1
        i += 1
    while not wait.empty() and pos != n:
        temp = wait.get()
        ans[pos] = max(temp[0],ans[current]) + temp[1]
        current = pos
        pos += 1
        while pos<n-1 and (ans[pos]==-1):
            pos += 1

for i in range(n):
    print(ans[i],end='')
    if i!=n-1:
        print(' ',end='')