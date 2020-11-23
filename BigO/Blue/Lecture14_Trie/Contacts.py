# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC14/BLUE_L14P04

class Node:
    def __init__(self):
        self.child = dict()
        self.words = 0

def addWord(root, s):
    temp = root
    for i in s:
        if not temp.child.get(i):
            temp.child[i] = Node()
        temp = temp.child[i]
        temp.words += 1

def searchTrie(root, s):
    temp = root
    for i in s:
        if not temp.child.get(i):
            return 0
        temp = temp.child[i]
    return temp.words

n = int(input())

root = Node()

for i in range(n):
    s = input().split()

    if s[0] == 'add':
        addWord(root, s[1])
    else:
        print(searchTrie(root, s[1]))