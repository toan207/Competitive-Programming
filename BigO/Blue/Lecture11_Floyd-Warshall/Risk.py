# https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=508

def FloydWarshall():
    for k in range(20):
        for i in range(20):
            for j in range(20):
                dist[i][j] = min(dist[i][k] + dist[k][j], dist[i][j])

INF = 10e9

case = 1

while True:
    try:
        dist = [[INF for i in range(20)] for j in range(20)]
        f = 1
        for i in range(19):
            l = input()
            l = list(map(int, l.split()))
            for j in range(l[0]):
                dist[i][l[1+j]-1] = 1
                dist[l[1+j]-1][i] = 1
                f = 0

        n = int(input())
        FloydWarshall()

        print('Test Set #' + str(case))
        for i in range(n):
            s,e = map(int, input().split())
            spaceS = '' if s > 9 else ' '
            spaceE = '' if e > 9 else ' '
            print(spaceS + str(s) + ' to ' + spaceE + str(e) + ': ' + str(dist[s-1][e-1]))
        case += 1
        print()
    except:
        break