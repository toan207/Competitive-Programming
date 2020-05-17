# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC07/BLUE_L07P07/statement

import queue

def heapify(pos, arr):
    largest = pos
    left = 2*pos + 1
    right = 2*pos + 2
    
    if left < len(arr) and arr[left] > arr[largest]:
        largest = left
    if right < len(arr) and arr[right] > arr[largest]:
        largest = right

    if largest != pos:
        arr[largest], arr[pos] = arr[pos], arr[largest]
        heapify(largest, arr)

def heapPush(value, arr):
    arr.append(value)
    i = len(arr) - 1
    while i != 0 and arr[(i-1)//2] < arr[i]:
        arr[(i-1)//2], arr[i] = arr[i], arr[(i-1)//2]
        i = (i-1)//2

def heapPop(arr):
    length = len(arr)
    if length == 0:
        return
    arr[0] = arr[length-1]
    arr.pop()
    heapify(0, arr)

while True:
    try:
        n = input()
    except:
        break

    try:
        n = int(n)
    except:
        break

    s = []
    q = queue.Queue()
    pq = []

    fs = 1
    fq = 1
    fpq = 1

    for i in range(n):
        x = list(map(int,input().split()))

        if x[0] == 1:
            if fs:
                s.append(x[1])
            if fq:
                q.put(x[1])
            if fpq:
                heapPush(x[1], pq)
        else:
            if fs:
                ts = s.pop()
                if ts != x[1]:
                    fs = 0
            if fq:
                tq = q.get()
                if tq != x[1]:
                    fq = 0
            if fpq:
                tpq = pq[0]
                heapPop(pq)
                if tpq != x[1]:
                    fpq = 0

    if (fs and fq) or (fs and fpq) or (fq and fpq):
        print('not sure')
    elif fs:
        print('stack')
    elif fq:
        print('queue')
    elif fpq:
        print('priority queue')
    else:
        print('impossible')