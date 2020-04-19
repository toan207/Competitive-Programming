

def isCollinear(A, B, C):
    return (B[0] - A[0]) * (C[1] - B[1]) - (B[1] - A[1]) * (C[0] - B[0]) == 0

def countTriangles(x, y):
    count = 0
    sumEdge = len(x)
    for i in range(sumEdge-2):
        for j in range(i+1,sumEdge-1):
            for z in range(j+1,sumEdge):
                A,B,C = list(),list(),list()
                A.append(x[i])
                A.append(y[i])
                B.append(x[j])
                B.append(y[j])
                C.append(x[z])
                C.append(y[z])
                if not isCollinear(A,B,C):
                    count += 1
    return count