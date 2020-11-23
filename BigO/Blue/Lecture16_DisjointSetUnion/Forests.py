# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC16/BLUE_L16P03/statement

t = int(input())
space = input()

for test in range(t):
    p,tr = map(int,input().split())

    treeSet = [[0] * tr for i in range(p)]

    while True:
        try:
            tree = input().split()
            treeSet[int(tree[0]) - 1][int(tree[1]) - 1] = 1
        except:
            break
    
    opinionSet = {}
    for i in range(p):
        x = []
        for j in range(tr):
            if treeSet[i][j]:
                x.append(j)
        x = tuple(x)
        opinionSet[x] = 1

    print(len(opinionSet))
    print()