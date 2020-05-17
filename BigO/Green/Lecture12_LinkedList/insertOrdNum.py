class Node:
    def __init__(self, data = None):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insertHead(self, data):
        p = Node(data)
        if self.head == None:
            self.head = self.tail = p
        else:
            p.next = self.head
            self.head = p

    def insertTail(self, data):
        p = Node(data)
        if self.head == None:
            self.head = self.tail = p
        else:
            self.tail.next = p
            self.tail = p
    
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

    def printList(self):
        p = self.head
        while p != None:
            print(p.data, end=' ')
            p = p.next
        print()

l = LinkedList()

while True:
    x = int(input())

    if x==0:
        break

    l.insertTail(x)

l.insertOrdNum()
l.printList()