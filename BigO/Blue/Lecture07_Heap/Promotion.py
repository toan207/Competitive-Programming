# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC07/BLUE_L07P05/statement

def heapifyMin(pos, arr):
    smallest = pos
    left = 2*pos + 1
    right = 2*pos + 2
    
    if left < len(arr) and arr[left] < arr[smallest]:
        smallest = left
    if right < len(arr) and arr[right] < arr[smallest]:
        smallest = right

    if smallest != pos:
        arr[smallest], arr[pos] = arr[pos], arr[smallest]
        heapifyMin(smallest, arr)

def heapPushMin(value, arr):
    arr.append(value)
    i = len(arr) - 1
    while i != 0 and arr[(i-1)//2] > arr[i]:
        arr[(i-1)//2], arr[i] = arr[i], arr[(i-1)//2]
        i = (i-1)//2

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

def heapPopMin(arr):
    length = len(arr)
    if length == 0:
        return
    arr[0] = arr[length-1]
    arr.pop()
    heapifyMin(0, arr)

n = int(input())
heapMin = []
heapMax = []

ans = 0

for test in range(n):
    heap = list(map(int,input().split()))
    
    for i in range(1,len(heap)):
        heapPushMin(heap[i], heapMin)
        heapPush(heap[i], heapMax)
    
    ans += (heapMax[0] - heapMin[0])

    heapPop(heapMax)
    heapPopMin(heapMin)

print(ans)