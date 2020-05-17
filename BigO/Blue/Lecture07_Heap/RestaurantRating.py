# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC07/BLUE_L07P06/statement

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

count = 0

for test in range(n):
    x = list(map(int,input().split()))

    if x[0] == 1:
        count += 1
        if count//3 == len(heapMin):
            if len(heapMin) != 0 and len(heapMax) != 0 and x[1] > heapMin[0]:
                heapPush(heapMin[0], heapMax)
                heapPopMin(heapMin)
                heapPushMin(x[1], heapMin)
            else:
                heapPush(x[1], heapMax)
        elif x[1] >= heapMax[0]:
            heapPushMin(x[1], heapMin)
        else:
            heapPushMin(heapMax[0], heapMin)
            heapPop(heapMax)
            heapPush(x[1], heapMax)
    else:
        if count < 3:
            print ('No reviews yet')
        else:
            print(heapMin[0])