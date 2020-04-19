# Cho địa chỉ hai ô trên bàn cờ vua tiêu chuẩn, hãy kiểm tra chúng cùng màu hay khác màu

def chessBoardCellColor(cell1, cell2):
    mark_alpha_odd = ['A','C','E','G']
    mark_alpha_even = ['B','D','F','H']
    if cell1[0] in mark_alpha_odd and int(cell1[1])%2 == 1:
        if (cell2[0] in mark_alpha_odd and int(cell2[1])%2 == 1) or (cell2[0] in mark_alpha_even and int(cell2[1])%2 == 0):
            return True
        return False
    elif cell1[0] in mark_alpha_odd and int(cell1[1])%2 == 0:
        if (cell2[0] in mark_alpha_even and int(cell2[1])%2 == 1) or (cell2[0] in mark_alpha_odd and int(cell2[1])%2 == 0):
            return True
        return False
    elif cell1[0] in mark_alpha_even and int(cell1[1])%2 == 0:
        if (cell2[0] in mark_alpha_odd and int(cell2[1])%2 == 1) or (cell2[0] in mark_alpha_even and int(cell2[1])%2 == 0):
            return True
        return False
    else:
        if (cell2[0] in mark_alpha_even and int(cell2[1])%2 == 1) or (cell2[0] in mark_alpha_odd and int(cell2[1])%2 == 0):
            return True
        return False