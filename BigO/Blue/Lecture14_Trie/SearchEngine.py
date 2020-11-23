# https://www.hackerearth.com/practice/data-structures/advanced-data-structures/trie-keyword-tree/practice-problems/algorithm/search-engine/description/

class Node:
    def __init__(self, value):
        self.child = dict()
        self.value = value

def addWord(root, s, value):
    temp = root
    for ch in s:
        temp.value = max(value, temp.value)
        if not temp.child.get(ch):
            temp.child[ch] = Node(value)
        temp = temp.child[ch]

def findWord(root, s):
    temp = root
    for ch in s:
        if not temp.child.get(ch):
            return -1
        temp = temp.child[ch]
    return temp.value

n, q = map(int, input().split())

root = Node(0)

for i in range(n):
    s, value = input().split()
    value = int(value)
    addWord(root, s, value)

for i in range(q):
    s = input()
    print(findWord(root, s))