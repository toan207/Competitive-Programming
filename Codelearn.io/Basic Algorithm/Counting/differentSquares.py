# Cho một ma trận chữ nhật chứa các chữ số (0-9)
# Hãy tính số lượng các hình vuông 2 × 2 khác nhau tồn tại trong ma trận

def differentSquares(matrix):
    mark = []
    check = ''
    for i in range(1,len(matrix)):
        check = ''
        s = 0
        for j in range(2, len(matrix[i])+1):
            check = matrix[i-1][s:j] + matrix[i][s:j]
            if check not in mark:
                mark.append(check)
            s += 1
    print(mark)
    return len(mark)