def spiralNumbers(n):
    row = 0
    col = 0
    value = 1
    j = 0
    arr = [[0 for i in range(n)] for j in range(n)]
    while j<=n//2 and n%2!=0:
        for i in range(row,n-j):
            arr[row][i] = value
            value += 1
            col = i
            
        for i in range(row+1,n-j):
            arr[i][col] = value
            value += 1
            
        row = col
        for i in range(n-j-2,j-1,-1):
            arr[row][i] = value
            value += 1
            
        col = j
        for i in range(n-j-2,j,-1):
            arr[i][col] = value
            value += 1
            
        j += 1
        row = i
        col = i
    while j<n//2 and n%2==0:
        for i in range(row,n-j):
            arr[row][i] = value
            value += 1
            col = i
            
        for i in range(row+1,n-j):
            arr[i][col] = value
            value += 1
            
        row = col
        for i in range(n-j-2,j-1,-1):
            arr[row][i] = value
            value += 1
            
        col = j
        for i in range(n-j-2,j,-1):
            arr[i][col] = value
            value += 1
            
        j += 1
        row = i
        col = i
    print(j,i)
    return arr

print(spiralNumbers(6))