# Bàn cờ vua là một bảng có 8*8 ô vuông
# Mỗi ô trên bàn cờ được kí hiệu bằng 2 kí tự - 1 kí tự chữ cái và 1 kí tự số
    # Các cột hàng dọc được gán nhãn từ trái sang phải bằng các kí tự chữ cái từ 'a' tới 'h' 
    # Các hàng ngang được đánh số từ 1 tới 8 từ phía dưới lên trên
    # Vị trí mỗi một ô trên bàn cờ được thể hiện bằng xâu có 2 kí tự: 
        # kí tự đầu tiên thể hiện cột, kí tự thứ hai thể hiện hàng. Ví dụ như a8, b3, c2, ...
# Cho biết vị trí của con mã trên bàn cờ vua, hãy tìm số vị trí khác nhau mà con mã có thể thực hiện nước nhảy

def chessKnight(cell):
    board_alpha = {'a':1,'b':2,'c':3,'d':4,'e':5,'f':6,'g':7,'h':8}
    differRow = [-1,1,2,2,1,-1,-2,-2]
    differCow = [2,2,1,-1,-2,-2,1,-1]
    count = 0

    for i in range(8):
        markCow = differCow[i] + int(cell[1])
        markRow = differRow[i] + board_alpha[cell[0]]
        if  markRow > 0 and markCow > 0 and markCow < 9 and markRow < 9:
            count += 1
    
    return count