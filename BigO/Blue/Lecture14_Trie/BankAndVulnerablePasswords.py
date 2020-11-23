# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC14/BLUE_L14P07

class Node:
    def __init__(self):
        self.child = dict()
        self.isEnd = 0

def addWord(root, s):
    temp = root
    for i in s:
        if not temp.child.get(i):
            temp.child[i] = Node()
        if temp.isEnd:
            return False
        temp = temp.child[i]
    if temp.isEnd or temp.child:
        return False
    temp.isEnd = 1
    return True

n = int(input())

root = Node()

for i in range(n):
    x = input()

    if not addWord(root, x):
        print('vulnerable')
        exit()

print('non vulnerable')