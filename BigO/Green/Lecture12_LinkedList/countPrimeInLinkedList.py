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

    def countPrime(self):
        p = self.head
        count = 0
        while p != None:
            if isPrime(p.data):
                count += 1
            p = p.next
        return count

from math import sqrt

def isPrime(n):
    if n<2:
        return False
    for i in range(2,int(sqrt(n)+1)):
        if n%i == 0:
            return False
    return True

l = LinkedList()

while True:
    x = float(input())

    if x==-1:
        break

    l.insertTail(x)

print(l.countPrime())