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
    
    def countNodeUnderX(self, x, _sum):
        if self.data < x:
            _sum += self.data
        if self.left != None:
            _sum += self.left.countNodeUnderX(x, 0)
        if self.right != None:
            _sum += self.right.countNodeUnderX(x, 0)
        return _sum

class BST:
    def __init__(self):
        self.root = None
    
    def addAnElement(self, data):
        if self.root == None:
            self.root = Node(data)
        else:
            self.root.addToNode(data)
    
    def getSumOfNodeUnderX(self, x):
        if self.root == None:
            return 0
        return self.root.countNodeUnderX(x, 0)
    
n,x = map(int, input().split())
l = list(map(int, input().split()))

tree = BST()

for i in l:
    tree.addAnElement(i)

print(tree.getSumOfNodeUnderX(x))