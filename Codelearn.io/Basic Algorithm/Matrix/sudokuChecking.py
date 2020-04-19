# Sudokulà trò chơi điền số vào ô trống. Mục tiêu là lấp đầy bảng 9x9 bằng các số sao cho mỗi cột, 
# mỗi hàng và mỗi bảng con 3x3 đều chứa tất cả các số từ 1 đến 9 duy nhất một lần.
# Hãy tạo ra 1 thuật toán để kiểm tra xem bảng Sudoku cho sẵn có hợp lệ theo các quy tắc được mô tả ở trên không. 
# Lưu ý rằng bảng Sudoku không nhất thiết có thể giải được.
# Một array 9x9 gồm các ký tự, trong đó mỗi kí tự có thể là chữ số từ '1' đến '9'hoặc dấu chấm '.'.

def sudokuChecking(grid):
    for i in range(0,7,3):
        for j in range(0,7,3):
            check_list = [0] * 10
            for row in range(i,i+3):
                for col in range(j,j+3):
                    if grid[row][col].isdigit():
                        check_list[int(grid[row][col])] += 1
                        if check_list[int(grid[row][col])]>1:
                            return False
    
    for i in range(9):
        check_list_row = [0] * 10
        check_list_cow = [0] * 10
        for j in range(9):
            if grid[i][j].isdigit():
                check_list_row[int(grid[i][j])] += 1
                if check_list_row[int(grid[i][j])]>1:
                    return False
            if grid[j][i].isdigit():
                check_list_cow[int(grid[j][i])] += 1
                if check_list_cow[int(grid[j][i])]>1:
                    return False

    return True

grid = [[".",".","4",".",".",".","6","3","."],[".",".",".",".",".",".",".",".","."],["5",".",".",".",".",".",".","9","."],[".",".",".","5","6",".",".",".","."],["4",".","3",".",".",".",".",".","1"],   [".",".",".","7",".",".",".",".","."],   [".",".",".","5",".",".",".",".","."],   [".",".",".",".",".",".",".",".","."],   [".",".",".",".",".",".",".",".","."]]
print(sudokuChecking(grid))