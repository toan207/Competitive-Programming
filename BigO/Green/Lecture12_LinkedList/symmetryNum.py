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

    def markSymmetryNum(self):
        if self.head == None:
            return
        cur = self.head
        pos = 0
        l = []
        while cur:
            if cur.data == cur.data[::-1]:
                l.append(pos)
            pos += 1
            cur = cur.next
        return l

l = LinkedList()

while True:
    x = input()

    if x=='-1':
        break

    l.insertTail(x)

ans = l.markSymmetryNum()

for i in ans:
    print(i,end = ' ')