class Node:
    def __init__(self):
        self.countWord = 0
        self.child = dict()

def addWord(root, s):
    temp = root
    for ch in s:
        if not temp.child.get(ch):
            temp.child[ch] = Node()
        temp = temp.child[ch]
    temp.countWord += 1

def findWord(root, s):
    temp = root
    for ch in s:
        if not temp.child.get(ch):
            return False
        temp = temp.child[ch]
    return True

def isWord(node):
    return node.countWord != 0

def isEmpty(node):
    return len(node.child) == 0

def removeWord(root, s, level, len):
    if root == None:
        return False
    if level == len:
        if root.countWord > 0:
            root.countWord -= 1
            return True
        return False
    ch == s[level]
    if not root.child.get(ch):
        return False
    flag = removeWord(root.child[ch], s, level + 1, len)
    if flag and not isWord(root.child[ch]) and isEmpty(root.child[ch]):
        del root.child[ch]
    return flag

def printWord(root, s):
    if isWord(root):
        print(s)
    for ch in root.child:
        printWord(root.child[ch], s + ch)

root = Node()
printWord(root, '')