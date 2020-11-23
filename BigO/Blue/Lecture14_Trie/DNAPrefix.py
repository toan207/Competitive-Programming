# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC14/BLUE_L14P02

class Node:
    def __init__(self, rank):
        self.child = dict()
        self.rank = rank
        self.same = 0

def addWord(root, s):
    temp = root
    for i in s:
        if not temp.child.get(i):
            temp.child[i] = Node(temp.rank + 1)
        temp = temp.child[i]
        temp.same += 1

def DFS():
    temp = root
    stack = []
    for i in temp.child.keys():
        stack.append(temp.child[i])

    _max = 0

    while stack:
        temp = stack.pop()
        if temp.rank * temp.same > _max:
            _max = temp.rank * temp.same
            for i in temp.child.keys():
                stack.append(temp.child[i])

    return _max

t = int(input())

for test in range(t):
    n = int(input())

    root = Node(0)

    for i in range(n):
        x = input()
        addWord(root, x)
    
    print('Case ' + str( test + 1 ) + ': ' + str(DFS()))