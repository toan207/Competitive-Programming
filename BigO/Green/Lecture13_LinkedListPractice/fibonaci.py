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

    def printList(self):
        p = self.head
        while p != None:
            print(p.data, end=' ')
            p = p.next
        print()

l = LinkedList()

x,y,n = map(int,input().split())

l.insertTail(x)
l.insertTail(y)

f1 = x
f2 = y

mod = 1000007

for i in range(n-2):
    f = (f1 + f2)%mod
    f1 = f2
    f2 = f
    l.insertTail(f)

l.printList()