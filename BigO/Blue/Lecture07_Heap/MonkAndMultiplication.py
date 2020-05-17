# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC07/BLUE_L07P01/statement

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

n = int(input())
l = list(map(int, input().split()))

heap = []
for i in l:
    heapPush(i, heap)
    if len(heap) < 3:
        print(-1)
    else:
        ans = []
        for i in range(3):
            ans.append(heap[0])
            heapPop(heap)
        for i in range(3):
            heapPush(ans[i], heap)
        print(ans[0] * ans[1] * ans[2])