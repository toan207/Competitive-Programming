# https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=40

def FloydWarshall():
    for k in range(n):
        for i in range(n):
            for j in range(n):
                if cost[i][k] != -INF and cost[k][j] != -INF:
                    cost[i][j] = max(cost[i][k] * cost[k][j], cost[i][j])
    
    if cost[0][0] > 1.0:
        return True
    return False

case = 1
INF = 10e9

while True:
    n = int(input())

    if n == 0:
        break

    money = {}

    for i in range(n):
        x = input()
        money[x] = i
    
    q = int(input())

    cost = [[-INF for i in range(n)] for j in range(n)]

    for i in range(q):
        x = input().split()
        cost[money[x[0]]][money[x[2]]] = float(x[1])
    
    res = FloydWarshall()

    if res:
        print('Case ' + str(case) + ': Yes')
    else:
        print('Case ' + str(case) + ': No')
    
    case += 1

    space = input()