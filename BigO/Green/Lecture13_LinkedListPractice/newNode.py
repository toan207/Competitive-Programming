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

n = int(input())
m = list(map(int,input().split()))

l = LinkedList()

l.insertTail(m[0])

for i in range(1,n):
    l.insertTail(m[i] + m[i-1])

l.printList()