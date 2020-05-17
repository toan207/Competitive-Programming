# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC11/BLUE_L11P05/statement

def FloydWarshall():
    for t in range(2):
        for k in range(c):
            for i in range(c):
                for j in range(c):
                    if totalCost[i][j][0] + totalCost[i][j][1] > totalCost[i][k][0] + totalCost[k][j][0] + max(totalCost[i][k][1], totalCost[k][j][1]):
                        totalCost[i][j] = (totalCost[i][k][0] + totalCost[j][k][0], max(totalCost[i][k][1], totalCost[k][j][1]))

INF = 10e9
case = 1

while True:
    c, r, q = map(int, input().split())

    if not c and not r and not q:
        break

    costHosting = list(map(int, input().split()))
    totalCost = [[(INF,0) for i in range(c)] for j in range(c)]

    for i in range(r):
        c1, c2, d = map(int, input().split())
        c1, c2 = c1-1, c2-1
        totalCost[c1][c2] = (d, max(costHosting[c1], costHosting[c2]))
        totalCost[c2][c1] = (d, max(costHosting[c1], costHosting[c2]))
    
    FloydWarshall()
    if case != 1:
        print()
    print('Case ' + '#' + str(case))
    for i in range(q):
        s,e = map(int, input().split())
        s,e = s-1,e-1
        if totalCost[s][e][0] == INF:
            print(-1)
        else:
            print(totalCost[s][e][0] + totalCost[s][e][1])
    case += 1