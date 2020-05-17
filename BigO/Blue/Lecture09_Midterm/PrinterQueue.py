# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC09/BLUE_L09P01/statement

import queue

class job:
    def __init__(self,pos,value):
        self.pos = pos
        self.value = value

    def __gt__(self, other):
        return self.value > other.value

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

def buildHeap(size, arr):
    for i in range(size//2 - 1, -1, -1):
        heapify(i, arr)

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

t = int(input())

for test in range(t):
    n,m = map(int, input().split())
    l = list(map(int, input().split()))

    heap = []
    _queue = queue.Queue()

    for i in range(n):
        heapPush(job(i,l[i]), heap)
        _queue.put(job(i,l[i]))

    count = 1

    while True:
        if _queue.queue[0].pos == m and _queue.queue[0].value == heap[0].value:
            print(count)
            break
        if _queue.queue[0].value == heap[0].value:
            heapPop(heap)
            mark = _queue.get()
            count += 1
        else:
            mark = _queue.get()
            _queue.put(mark)