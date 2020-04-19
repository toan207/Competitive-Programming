# Một bài nâng cao về con tượng trong cờ vua
# Trong thế giới cờ vua, con tượng không thích con tượng khác. 
# Trong thực tế, khi 2 con tượng cùng đứng chung 1 đường chéo, chúng lập tức di chuyển tới hai đầu của đường chéo đó
# Cho vị trí ban đầu của hai con tượng trên bàn cờ vua, 
# hãy tính toán vị trí của chúng sau khi di chuyển tới hai đầu của đường chéo mà chúng đang đứng. 
# Nhớ rằng con tượng sẽ không di chuyển trừ khi chúng đứng chung trên một đường chéo
# Với bishop1 = "d7" và bishop2 = "f5", kết quả bishopDiagonal(bishop1, bishop2) = ["c8", "h3"].

def bishopDiagonal(bishop1, bishop2):
    board_alpha = {'a':1,'b':2,'c':3,'d':4,'e':5,'f':6,'g':7,'h':8}
    board_alpha_value = ['a','b','c','d','e','f','g','h']

    if board_alpha[bishop1[0]] + int(bishop1[1]) == board_alpha[bishop2[0]] + int(bishop2[1]):
        b1_row = board_alpha[bishop1[0]]
        b1_cow = int(bishop1[1])
        b2_row = board_alpha[bishop2[0]]
        b2_cow = int(bishop2[1])

        while b1_row>1 and b1_cow>1 and b1_row<8 and b1_cow<8:
            b1_cow += 1
            b1_row -= 1
            
        while b2_row>1 and b2_cow>1 and b2_row<8 and b2_cow<8:
            b2_cow -= 1
            b2_row += 1
            
        mark_list = []
        mark_list.append(board_alpha_value[b1_row-1]+str(b1_cow))
        mark_list.append(board_alpha_value[b2_row-1]+str(b2_cow))
        mark_list.sort()
        return mark_list

    if board_alpha[bishop1[0]] - int(bishop1[1]) == board_alpha[bishop2[0]] - int(bishop2[1]):
        b1_row = board_alpha[bishop1[0]]
        b1_cow = int(bishop1[1])
        b2_row = board_alpha[bishop2[0]]
        b2_cow = int(bishop2[1])

        while b1_row>1 and b1_cow>1 and b1_row<8 and b1_cow<8:
            b1_cow += 1
            b1_row += 1
            
        while b2_row>1 and b2_cow>1 and b2_row<8 and b2_cow<8:
            b2_cow -= 1
            b2_row -= 1
            
        mark_list = []
        mark_list.append(board_alpha_value[b1_row-1]+str(b1_cow))
        mark_list.append(board_alpha_value[b2_row-1]+str(b2_cow))
        mark_list.sort()
        return mark_list

    mark_list = []
    mark_list.append(bishop1)
    mark_list.append(bishop2)
    mark_list.sort()
    return mark_list

print(bishopDiagonal('e4','f5'))