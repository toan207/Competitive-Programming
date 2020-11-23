# https://codeforces.com/contest/37/problem/C

import sys
sys.setrecursionlimit(100000)

class Node:
    def __init__(self):
        self.child = dict()
        self.isEnd = 0

def DFS(stack, level, mark, arr, m, pos):
    if len(mark) == level:
        arr.append((pos, mark))
        stack.isEnd = 1
        return

    for i in ['0', '1']:
        if len(arr) != m:
            return
        if not stack.child.get(i):
            stack.child[i] = Node()
            DFS(stack.child[i], level, mark + i, arr, m, pos)
        elif not stack.child[i].isEnd:
            DFS(stack.child[i], level, mark + i, arr, m, pos)

def addWord(root, level, arr):
    temp = root
    mark = len(arr)

    pos = level[0]
    level = level[1]

    DFS(temp, level, '', arr, mark, pos)

    if temp.isEnd or mark == len(arr):
        return False
    return True

n = int(input())
l = list(map(int, input().split()))

for i in range(n):
    l[i] = (i, l[i])

l.sort(key=lambda x: x[1])

root = Node()

ans = []

for i in l:
    if not addWord(root, i, ans):
        print('NO')
        exit()

ans.sort(key=lambda x: x[0])

print('YES')
for i in ans:
    print(i[1])