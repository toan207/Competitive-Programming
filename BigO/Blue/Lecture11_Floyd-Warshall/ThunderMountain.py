# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC11/BLUE_L11P06/statement

def FloydWarshall():
    for k in range(n):
        for i in range(n):
            for j in range(n):
                if dist[i][j] > dist[i][k] + dist[k][j]:
                    dist[i][j] = dist[i][k] + dist[k][j]

INF = 10e9

t = int(input())
case = 1

for test in range(t):
    n = int(input())

    dist = [[INF for i in range(n)] for j in range(n)]
    XY = []

    for i in range(n):
        x = list(map(int, input().split()))
        XY.append(x)
    
    for i in range(n):
        for j in range(n):
            dist[i][j] = ((XY[i][0] - XY[j][0])**2 + (XY[i][1] - XY[j][1])**2)**0.5
            if dist[i][j] > 10:
                dist[i][j] = INF

    FloydWarshall()

    _max = 0

    for i in range(n):
        for j in range(n):
            _max = max(_max, dist[i][j])

    print('Case ' + '#' + str(case) + ':')
    if _max == INF:
        print('Send Kurdy')
    else:
        print('%.4f' % _max)
    case += 1
    if test != t-1:
        print()