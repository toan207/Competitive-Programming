import sys
sys.setrecursionlimit(100000)

class Student:
    def __init__(self, id = '', name = '', mark = -1):
        self.id = id
        self.name = name
        self.mark = mark

class Node:
    def __init__(self, x):
        self.data = x
        self.left = None
        self.right = None

    def addToNode(self, data):
        if self.data.mark > data.mark:
            if self.left == None:
                self.left = Node(data)
            else:
                self.left.addToNode(data)
        else:
            if self.right == None:
                self.right = Node(data)
            else:
                self.right.addToNode(data)

    def getStudent(self, _max):
        if self.data.mark > _max.mark:
            _max = self.data
        if self.right != None:
            _max = self.right.getStudent(_max)
        return _max

class BST:
    def __init__(self):
        self.root = None
    
    def addAnElement(self, data):
        if self.root == None:
            self.root = Node(data)
        else:
            self.root.addToNode(data)
    
    def getMaxMark(self):
        if self.root == None:
            return 0
        return self.root.getStudent(Student())

n = int(input())

tree = BST()

for i in range(n):
    id,name,mark = input().split()
    tree.addAnElement(Student(id,name,float(mark)))

_max = tree.getMaxMark()

print(_max.id,_max.name,_max.mark)