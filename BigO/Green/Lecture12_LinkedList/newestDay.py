class Day:
    def __init__(self, day = 1, month = 1, year = 1):
        self.day = day
        self.month = month
        self.year = year

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
    
    def newestDay(self):
        newest = Day()
        if self.head == None:
            return
        cur = self.head
        while cur:
            if newest.year < cur.data.year:
                newest = cur.data
            elif newest.year == cur.data.year and newest.month < cur.data.month:
                newest = cur.data
            elif newest.year == cur.data.year and newest.month == cur.data.month and newest.day < cur.data.day:
                newest = cur.data
            cur = cur.next
        return newest

l = LinkedList()
n = int(input())

for i in range(n):
    x = list(map(int,input().split()))
    x = Day(x[0],x[1],x[2])
    l.insertTail(x)

newest = l.newestDay()
print(newest.day,newest.month,newest.year)