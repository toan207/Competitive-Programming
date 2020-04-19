# Cho ma trận n x m chứa tất cả các số nguyên từ 1 tới n*m, mỗi số chỉ xuất hiện một lần
# Bạn xuất phát từ ô chứa số 1. Mỗi nước đi, 
# bạn được quyền đi tới 4 ô xung quanh chung cạnh. Mỗi ô bạn chỉ có thể đi qua một lần
# Hãy kiểm tra xem có tồn tại phương án đi qua tất cả các ô với thứ tự tăng dần của các ô trong ma trận? 
# (xuất phát từ ô số 1, tới ô số 2, rồi tới ô số 3, ... cuối cùng kết thúc ở ô n*m)
# Với matrix = [[1, 4, 5], [2, 3, 6]] thì kết quả findPath(matrix) = true
# Bạn có thể đi lần lượt từ 1 tới 6
# Với matrix = [[1, 3, 6], [2, 4, 5]] thì kết quả findPath(matrix) = false.
# Bạn có thể đi từ ô 1 sang ô 2, nhưng không thể đi từ 2 sang 3 do hai ô này không chung cạnh

def findPath(matrix):
    mark_value = 2
    mark_row = -1
    mark_col = -1
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if matrix[i][j] == 1:
                mark_row = i
                mark_col = j
                break
        if mark_col != -1:
            break

    while mark_value <= len(matrix)*len(matrix[0]):
        if matrix[mark_row-1][mark_col] == mark_value and mark_row - 1 >= 0:
            mark_row -= 1
            mark_value += 1
        elif matrix[mark_row][mark_col-1] == mark_value and mark_col - 1 >= 0:
            mark_col -= 1
            mark_value += 1
        elif mark_col + 1 < len(matrix[0]) and matrix[mark_row][mark_col+1] == mark_value:
            mark_col += 1
            mark_value += 1
        elif mark_row + 1 < len(matrix) and matrix[mark_row+1][mark_col] == mark_value:
            mark_row += 1
            mark_value += 1
        else:
            return False
        
    return True

test = [[2,3,4,5],   [1,8,7,6],   [12,9,10,11]]
print(findPath(test))