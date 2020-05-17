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

    def getLeafNode(self, sumLeaf):
        if self.left != None:
            sumLeaf += self.left.getLeafNode(0)
        if self.right != None:
            sumLeaf += self.right.getLeafNode(0)
        if self.right == None and self.left == None:
            return self.data + sumLeaf
        return sumLeaf

class BST:
    def __init__(self):
        self.root = None
    
    def addAnElement(self, data):
        if self.root == None:
            self.root = Node(data)
        else:
            self.root.addToNode(data)

    def getSumOfValueLeaf(self):
        if self.root == None:
            return 0
        return self.root.getLeafNode(0)

n = int(input())
l = list(map(int, input().split()))

tree = BST()

for i in l:
    tree.addAnElement(i)

print(tree.getSumOfValueLeaf())