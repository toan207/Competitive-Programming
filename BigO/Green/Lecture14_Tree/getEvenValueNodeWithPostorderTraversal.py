import sys
sys.setrecursionlimit(100000)

class Node:
    def __init__(self, x):
        self.data = x
        self.left = None
        self.right = None

    def addToNode(self, data):
        if self.data > data:
            if self.left == None:
                self.left = Node(data)
            else:
                self.left.addToNode(data)
        else:
            if self.right == None:
                self.right = Node(data)
            else:
                self.right.addToNode(data)

    def countEvenValueNode(self, count):
        if self.left != None:
            count += self.left.countEvenValueNode([])
        if self.right != None:
            count += self.right.countEvenValueNode([])
        if self.data%2 == 0:
            count.append(self.data)
        return count

class BST:
    def __init__(self):
        self.root = None
    
    def addAnElement(self, data):
        if self.root == None:
            self.root = Node(data)
        else:
            self.root.addToNode(data)
    
    def getEvenValueNode(self):
        if self.root == None:
            return 0
        return self.root.countEvenValueNode([])

n = int(input())
l = list(map(int, input().split()))

tree = BST()

for i in l:
    tree.addAnElement(i)

for i in tree.getEvenValueNode():
    print(i,end=' ')