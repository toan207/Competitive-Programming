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
    
    def insertHead(self, data):
        p = Node(data)
        if self.head == None:
            self.head = self.tail = p
        else:
            p.next = self.head
            self.head = p

    def insertOrdNum(self):
        if self.getSize() == 0:
            return
        cur = self.head.next
        p = self.head
        self.insertHead(1)
        i = 2
        while cur != None:
            temp = Node(i)
            p.next = temp
            temp.next = cur
            p = cur
            cur = cur.next
            i += 1

    def getSize(self):
        if self.head == None:
            return 0
        p = self.head
        size = 0
        while p != None:
            size += 1
            p = p.next
        return size

    def removeAllDataByX(self, x):
        if self.head == None:
            return
        p = self.head
        cur = p.next
        while p.data == x and p != None:
            if p.data == x:
                self.head = self.head.next
                p = self.head
                if p != None:
                    cur = p.next
                if cur == None:
                    self.tail = p
        while cur != None:
            if cur.data == x:
                p.next = cur.next
                cur = p.next
                if cur == None:
                    self.tail = p
            else:
                p = p.next
                cur = cur.next

    def min(self):
        if self.head == None:
            return None
        _min = self.head
        cur = self.head
        while cur != None:
            if cur.data < _min.data:
                _min = cur
            cur = cur.next
        return _min

    def printList(self):
        p = self.head
        while p != None:
            print(p.data, end=' ')
            p = p.next
        print()

l = LinkedList()
l.insertTail(3)
l.insertHead(5)
l.insertHead(5)
l.insertTail(4)

l.printList()