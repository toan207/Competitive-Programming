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

class BST:
    def __init__(self):
        self.root = None
    
    def addAnElement(self, data):
        if self.root == None:
            self.root = Node(data)
        else:
            self.root.addToNode(data)