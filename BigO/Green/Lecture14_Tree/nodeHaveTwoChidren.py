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
    
    def countNodeHaveTwoChidren(self, count):
        if self.left != None:
            count += self.left.countNodeHaveTwoChidren(0)
        if self.right != None:
            count += self.right.countNodeHaveTwoChidren(0)
        if self.left and self.right:
            count += 1
        return count

class BST:
    def __init__(self):
        self.root = None
    
    def addAnElement(self, data):
        if self.root == None:
            self.root = Node(data)
        else:
            self.root.addToNode(data)
    
    def getSumOfNodeHaveTwoChidren(self):
        if self.root == None:
            return 0
        return self.root.countNodeHaveTwoChidren(0)
    
n = int(input())
l = list(map(int, input().split()))

tree = BST()

for i in l:
    tree.addAnElement(i)

print(tree.getSumOfNodeHaveTwoChidren())