# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC07/BLUE_L07P02

def heapify(pos, arr):
    smallest = pos
    left = 2*pos + 1
    right = 2*pos + 2
    
    if left < len(arr) and arr[left] < arr[smallest]:
        smallest = left
    if right < len(arr) and arr[right] < arr[smallest]:
        smallest = right

    if smallest != pos:
        arr[smallest], arr[pos] = arr[pos], arr[smallest]
        heapify(smallest, arr)

def buildHeap(size, arr):
    for i in range(size//2 - 1, -1, -1):
        heapify(i, arr)

def heapPush(value, arr):
    arr.append(value)
    i = len(arr) - 1
    while i != 0 and arr[(i-1)//2] > arr[i]:
        arr[(i-1)//2], arr[i] = arr[i], arr[(i-1)//2]
        i = (i-1)//2

def heapPop(arr):
    length = len(arr)
    if length == 0:
        return
    arr[0] = arr[length-1]
    arr.pop()
    heapify(0, arr)

q = int(input())
heap = []

mark = {}

for i in range(q):
    x = input().split()
    if len(x) == 1:
        while len(heap)>0 and mark[heap[0]] != 1:
            heapPop(heap)
        print(heap[0])
    elif x[0] == '1':
        heapPush(int(x[1]), heap)
        mark[int(x[1])] = 1
    else:
        mark[int(x[1])] = 0