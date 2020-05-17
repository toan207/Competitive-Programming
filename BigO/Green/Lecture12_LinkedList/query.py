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

    def removeHead(self):
        if self.head == None:
            return
        self.head = self.head.next
        if self.head == None or self.head.next == None:
            self.tail = self.head
    
    def printList(self):
        p = self.head
        while p != None:
            print(p.data, end=' ')
            p = p.next
        print()

l = LinkedList()
n = int(input())

for i in range(n):
    x = input().split()
    if len(x) == 2:
        l.insertTail(x[1])
    else:
        l.removeHead()

l.printList()