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

    def getHeightNode(self, hL, hR):
        if self.left == None and self.right == None:
            return 1
        if self.left != None:
            hL = self.left.getHeightNode(0, 0)
        if self.right != None:
            hR = self.right.getHeightNode(0, 0)
        return 1 + max(hL, hR)

class BST:
    def __init__(self):
        self.root = None
    
    def addAnElement(self, data):
        if self.root == None:
            self.root = Node(data)
        else:
            self.root.addToNode(data)
    
    def getHeight(self):
        if self.root == None:
            return 0
        return self.root.getHeightNode(0, 0)

n = int(input())
l = list(map(int, input().split()))

tree = BST()

for i in l:
    tree.addAnElement(i)

print(tree.getHeight())