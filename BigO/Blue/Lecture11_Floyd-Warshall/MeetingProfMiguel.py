# https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1112

INF = 10e9

def FloydWarshall():
    for i in range(m):
        for j in range(m):
            distY[i][j] = graphY[i][j]
            distM[i][j] = graphM[i][j]
            if i == j:
                distY[i][j] = 0
                distM[i][j] = 0

    for k in range(m):
        for i in range(m):
            for j in range(m):
                distY[i][j] = min(distY[i][k] + distY[k][j], distY[i][j])
                distM[i][j] = min(distM[i][k] + distM[k][j], distM[i][j])

while True:
    n = int(input())

    if n == 0:
        break

    m = ord('Z') - ord('A') + 1

    graphY = [[INF for i in range(m)] for j in range(m)]
    graphM = [[INF for i in range(m)] for j in range(m)]
    distY = [[INF for i in range(m)] for j in range(m)]
    distM = [[INF for i in range(m)] for j in range(m)]

    for i in range(n):
        old, dim, _f, _t, w = input().split()
        if old == 'Y':
            graphY[ord(_f) - ord('A')][ord(_t) - ord('A')] = min(graphY[ord(_f) - ord('A')][ord(_t) - ord('A')], int(w))
            if dim == 'B':
                graphY[ord(_t) - ord('A')][ord(_f) - ord('A')] = min(graphY[ord(_t) - ord('A')][ord(_f) - ord('A')], int(w))
        else:
            graphM[ord(_f) - ord('A')][ord(_t) - ord('A')] = min(graphM[ord(_f) - ord('A')][ord(_t) - ord('A')], int(w))
            if dim == 'B':
                graphM[ord(_t) - ord('A')][ord(_f) - ord('A')] = min(graphM[ord(_t) - ord('A')][ord(_f) - ord('A')], int(w))
    
    mark = []
    _max = INF
    s,e = input().split()
    s,e = ord(s), ord(e)
    A = ord('A')

    FloydWarshall()

    for i in range(m):
        if distY[s-A][i] + distM[e-A][i] < _max:
            _max = distY[s-A][i] + distM[e-A][i]
            mark = [chr(i + A)]
        elif distY[s-A][i] + distM[e-A][i] == _max and distY[s-A][i] != INF and distM[e-A][i] != INF:
            mark.append(chr(i + A))
    
    if mark:
        print(_max, end=' ')
        for i in range(len(mark)):
            print(mark[i], end='')
            if i != len(mark) - 1:
                print(' ',end='')
        print()
    else:
        print('You will never meet.')