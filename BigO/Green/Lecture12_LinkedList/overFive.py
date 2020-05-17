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
        
    def removeAllDataOverX(self, x):
        if self.head == None:
            return
        p = self.head
        cur = p.next
        while p.data >= x and p != None:
            if p.data >= x:
                self.head = self.head.next
                p = self.head
                if p != None:
                    cur = p.next
                if cur == None:
                    self.tail = p
        while cur != None:
            if cur.data >= x:
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
            if p.data == int(p.data):
                p.data = int(p.data)
            print(p.data)
            p = p.next

l = LinkedList()

while True:
    x = float(input())

    if x==-1:
        break

    l.insertTail(x)

l.removeAllDataOverX(5.0)
l.printList()