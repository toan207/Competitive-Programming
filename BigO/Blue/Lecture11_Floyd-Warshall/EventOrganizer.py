# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC11/BLUE_L11P07

INF = int(1e9)
def FloydWarshall(dist):
    for k in range (49):
        for i in range (49):
            for j in range (49):
                if i <= k and k <= j:
                    dist[i][j] = max(dist[i][j],dist[i][k] + dist[k][j])
t = int(input())
while t:
    n = int(input())
    time = [[0 for i in range (49)] for j in range (49)]
    for i in range (n):
        s,e,c = map(int,input().split())
        time[s][e] = max(time[s][e],c)
    FloydWarshall(time)  
    print(time[0][48])
    t-=1