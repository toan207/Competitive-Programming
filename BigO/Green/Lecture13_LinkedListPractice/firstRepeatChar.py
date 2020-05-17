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

n = input()

l = LinkedList()

for i in n:
    l.insertTail(i)

s = l.head

i = 0

pos = [-1] * len(n)

_min = len(n)

while s != None:
    p = s.next
    j = i
    while p != None:
        if p.data == s.data:
            pos[i] = j
            _min = min(_min,j)
            break
        j += 1
        p = p.next
    i += 1
    s = s.next

if _min == len(n):
    print('null')
else:
    s = l.head
    for i in range(_min+1):
        s = s.next
    print(s.data)