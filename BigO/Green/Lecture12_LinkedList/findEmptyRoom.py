class Room:
    def __init__(self, code = '', price = '', rent = 0):
        self.code = code
        self.price = price
        self.rent = rent

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

    def removeAllDataByX(self, x):
        if self.head == None:
            return
        p = self.head
        cur = p.next
        while p.data.rent == x and p != None:
            if p.data.rent == x:
                self.head = self.head.next
                p = self.head
                if p != None:
                    cur = p.next
                if cur == None:
                    self.tail = p
        while cur != None:
            if cur.data.rent == x:
                p.next = cur.next
                cur = p.next
                if cur == None:
                    self.tail = p
            else:
                p = p.next
                cur = cur.next
    
    def printList(self):
        p = self.head
        while p != None:
            print(p.data.code,p.data.price)
            p = p.next
    
l = LinkedList()
n = int(input())

for i in range(n):
    x = input().split()
    x = Room(x[0],x[1],x[2])
    l.insertTail(x)

l.removeAllDataByX('1')
l.printList()