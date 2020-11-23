# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC14/BLUE_L14P03

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
    
    l.sort(key=lambda x: len(x))

    for s in l:
        if not addWord(root, s):
            f = 0
            break

    if f:
        print('Case ' + str( test + 1 ) + ': ' + 'YES')
    else:
        print('Case ' + str( test + 1 ) + ': ' + 'NO')