class Node:
    def __init__(self, data = None):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insertTail(self, data):
        p = Node(data)
        if self.head == None:
            self.head = self.tail = p
        else:
            self.tail.next = p
            self.tail = p
    
    def max(self):
        if self.head == None:
            return None
        _max = self.head
        cur = self.head
        while cur != None:
            if cur.data > _max.data:
                _max = cur
            cur = cur.next
        return _max.data

    def numNextToMax(self):
        if self.head == None:
            return -1
        _max = self.max()
        _nextToMax = -1
        cur = self.head
        while cur:
            if _max > cur.data and (_nextToMax < cur.data or _nextToMax == -1):
                _nextToMax = cur.data
            cur = cur.next
        return _nextToMax

l = LinkedList()

while True:
    x = float(input())

    if x==-1:
        break

    l.insertTail(x)

print(l.numNextToMax())