# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC07/BLUE_L07P08/statement

class Job:
    def __init__(self, a = 0, b = 0, d = 0):
        self.a = a
        self.b = b
        self.d = d
    
    def __lt__(self, other):
        return self.a > other.a

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

t = int(input())

for test in range(t):
    n = int(input())

    time = 0
    ans = 0

    job = []

    for i in range(n):
        a,b,d = map(int,input().split())
        x = Job(a,b,d)
        job.append(x)

    job.sort(key=lambda x: (-x.d,-x.a))

    time = 0
    heap = []

    for i in range (n):
        time += job[i].b
        heapPush(job[i], heap)
        while time > job[i].d:
            temp = heap[0]
            heapPop(heap)
            if time - temp.b > job[i].d:
                time -= temp.b
                ans += temp.b/temp.a
            else:
                x = (time - job[i].d)/temp.a
                k = time - job[i].d
                time -= (time - job[i].d)
                ans += x
                heapPush(Job(temp.a,temp.b - k,temp.d), heap)

    print('%.2f' % ans)