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

n = int(input())
s = input()

l = LinkedList()
m = LinkedList()

for i in s:
    l.insertTail(i)
    m.insertHead(i)

sl = l.head
sm = m.head

f = 1

while sl != None and sm != None:
    if sl.data != sm.data:
        f = 0
        break
    sl = sl.next
    sm = sm.next

print('YES' if f else 'NO')