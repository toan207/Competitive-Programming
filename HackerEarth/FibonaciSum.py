# https://www.hackerearth.com/problem/algorithm/fibonacci-sum/

MOD = 1000000007

def mul(A,B):
    return [ [sum(A[r][i]*B[i][c] for i in range(2))%MOD for r in range(2)] for c in range(2)]

def exp(A,n):
    if d.get(n):
        return d[n]
    C = exp(A, n//2)
    C = mul(C, C)
    d[n] = mul(A,C) if n%2 else C
    return d[n]

t = int(input())

d = {0: [ [1,0], [0,1] ]}

for test in range(t):
    n,m = map(int, input().split())
    print((exp([ [0,1], [1,1] ], m + 2)[0][1] - exp([ [0,1], [1,1] ], n + 1)[0][1] + MOD) % MOD)