# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC04/BLUE_L04P06/statement

import queue

c = int(input())
for j in range (c):
    n,t,m = map(int,input().split())
    l = []
    left = queue.Queue()
    right = queue.Queue()
    left_pos = queue.Queue()
    right_pos = queue.Queue()
    for i in range (m):
        a,b = input().split()
        a = int(a)
        if b == 'left':
            left.put(a)
            left_pos.put(i)
        else:
            right.put(a)
            right_pos.put(i)
    ans = [0]*m
    pos = 'left'
    time = 0

    while not left.empty() or not right.empty():
        earliest = 0
        if not left.empty():
            earliest = left.queue[-1]
        if not right.empty():
            earliest = right.queue[-1]
        if not left.empty():
            earliest = left.queue[0]
        if not right.empty():
            earliest = min(right.queue[0],earliest)

        time = max(time,earliest)
        tn = 0
        if pos == 'left':
            while (not left.empty() and tn < n and left.queue[0] <= time):
                ans[left_pos.queue[0]] = time + t
                left_pos.get()
                left.get()
                tn += 1
            time += t
            pos = 'right'
        else:
            while (not right.empty() and tn < n and right.queue[0] <= time):
                ans[right_pos.queue[0]] = time + t
                right_pos.get()
                right.get()
                tn += 1
            time += t
            pos = 'left'

    for i in range (len(ans)):
        if ans[i] != 0: 
            print(ans[i])
    if j != c-1:
        print()