# https://www.hackerrank.com/challenges/no-prefix-set/problem

class Node:
    def __init__(self):
        self.child = dict()
        self.isWord = 0

def addWord(root, s):
    temp = root
    for i in s:
        if not temp.child.get(i):
            temp.child[i] = Node()
        if temp.isWord:
            return False
        temp = temp.child[i]
    if len(temp.child) or temp.isWord:
        return False
    temp.isWord = 1
    return True

n = int(input())

root = Node()

for i in range(n):
    x = input()

    if not addWord(root, x):
        print('BAD SET')
        print(x)
        exit()

print('GOOD SET')