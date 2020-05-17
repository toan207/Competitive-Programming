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

n,k  = list(map(int,input().split()))
m = list(map(int,input().split()))

l = LinkedList()

for i in m:
    l.insertTail(i)

i = 0

s = l.head

while s != None:
    if s.data == k:
        break
    i += 1
    s = s.next

if i == n:
    print(-1)
else:
    print(i+1)