# https://bigocoder.com/courses/OBLUE01/OBLUE01_LEC18/BLUE_L18P05_2

class Node:
    def __init__(self):
        self.flag = 0
        self.child = dict()

def addWord(root, s):
    temp = root
    for i in s:
        if temp.flag:
            return False
        if not temp.child.get(i):
            temp.child[i] = Node()
        temp = temp.child[i]
    if temp.flag or temp.child:
        return False
    temp.flag = 1
    return True

t = int(input())

for test in range(t):
    n = int(input())
    
    root = Node()

    f = 1

    l = []

    for i in range(n):
        s = input()
        l.append(s)

    for s in l:
        if not addWord(root, s):
            f = 0
            break

    if f:
        print('YES')
    else:
        print('NO')