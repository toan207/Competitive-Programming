# Cho một dãy gồm các nguyên dương, bạn hãy viết chương trình sắp xếp các số trên theo thứ tự tăng dần. 
# Merge sort

def sortArray(arr):
    n = len(arr)
    k = (n-1)//2
    B = list()
    C = list()
    for i in range(k+1):
        B.append(arr[i])
    for i in range(k+1,n):
        C.append(arr[i])
    
    if len(B)>1:
        B = sortArray(B)
    if len(C)>1:
        C = sortArray(C)
    
    A = []
    posB = 0
    posC = 0
    while len(A) != len(B) + len(C):
        if posB < len(B):
            if posC == len(C):
                A.append(B[posB])
                posB += 1
            elif B[posB]<=C[posC]:
                A.append(B[posB])
                posB += 1
        if posC < len(C):
            if posB == len(B):
                A.append(C[posC])
                posC += 1
            elif B[posB]>=C[posC]:
                A.append(C[posC])
                posC += 1
    return A