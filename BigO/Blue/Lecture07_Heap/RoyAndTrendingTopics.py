# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC07/BLUE_L07P04

class Topic:
    def __init__(self, id = 0, point = 0, post = 0, like = 0, comment = 0, share = 0):
        self.id = id
        self.point = point
        self.post = post
        self.like = like
        self.comment = comment
        self.share = share
    
    def __lt__(self, other):
        newPoint = self.post*50 + self.like*5 + self.comment*10 + self.share*20
        newPointOther = other.post*50 + other.like*5 + other.comment*10 + other.share*20
        if newPointOther - other.point != newPoint - self.point:
            return newPointOther - other.point >= newPoint - self.point
        return other.id > self.id

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

n = int(input())

topicList = []

for i in range(n):
    _id,point,post,like,comment,share = map(int,input().split())
    x = Topic(_id,point,post,like,comment,share)
    topicList.append(x)

buildHeap(n, topicList)

for i in range(min(n,5)):
    print(topicList[0].id, topicList[0].post*50 + topicList[0].like*5 + topicList[0].comment*10 + topicList[0].share*20)
    heapPop(topicList)