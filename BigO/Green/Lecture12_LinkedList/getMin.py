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

    def min(self):
        if self.head == None:
            return None
        _min = self.head
        cur = self.head
        while cur != None:
            if cur.data < _min.data:
                _min = cur
            cur = cur.next
        return _min.data if _min.data != int(_min.data) else int(_min.data)

l = LinkedList()

while True:
    x = float(input())

    if x==0:
        break

    l.insertTail(x)

print(l.min())