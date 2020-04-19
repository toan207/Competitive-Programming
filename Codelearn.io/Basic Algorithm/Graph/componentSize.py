# Cho một đồ thị vô hướng và chỉ số của một đỉnh bất kì
# Hãy tính kích thước của thành phần liên thông có chứa đỉnh đó
# Với matrix = [[false, true, false],
#              [true, false, false],
#              [false, false, false]] và vertex = 0, 
# thì kết quả dfsComponentSize(matrix,vertex) = 2.

def componentSize(matrix, vertex):
    i = 0
    sizeOfMatrix = len(matrix[0])
    mark = [vertex]
    while i<len(mark):
        for j in range(sizeOfMatrix):
            if  j not in mark and matrix[mark[i]][j]:
                mark.append(j)
        i += 1
    return len(mark)