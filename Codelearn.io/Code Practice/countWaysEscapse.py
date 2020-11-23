# https://codelearn.io/training/detail/1855610

def mul(a,b):
    return [[sum(a[r][i]*b[i][c] for i in range(2)) for r in range(2)] for c in range(2)]

def exp(A,n):
    if n == 0:    return [[1,0], [0,1]]
    C = exp(A, n//2)
    C = mul(C,C)
    return mul(A,C) if n%2 else C

def count_ways_escapse(n):
    return exp([[0,1],[1,1]], n+1)[0][1]