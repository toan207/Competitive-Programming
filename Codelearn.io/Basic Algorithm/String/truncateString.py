# Cho một xâu kí tự chứa các chữ số từ 0 tới 9
# Người ta áp dụng phép biển đổi xâu dựa trên các nguyên tắc sau:
# nếu chữ số ngoài cùng bên trái chia hết cho 3, xóa nó khỏi xâu kí tự
# nếu không thỏa mãn điều kiện trên, và nếu chữ số ngoài cùng bên tay phải chia hết cho 3, xóa nó khỏi xâu kí tự
# nếu không thỏa mãn 2 điều kiện trên, và nếu tổng chữ số ngoài cùng bên trái và ngoài cùng bên phải chia hết cho 3, xóa cả hai chữ số trên khỏi xâu
# Các phép toán trên được áp dụng vào xâu ban đầu cho tới khi xâu trở thành rỗng, hoặc ko đáp ứng cả 3 điều kiện trên
# Cho một xâu kí tự, hãy tìm xâu kết quả cuối cùng khi áp dụng liên tục các phép toán trên

def truncateString(s):
    start = 0
    end = len(s)

    while start<end:
        if int(s[start])%3==0:
            start += 1
        elif int(s[end-1])%3==0:
            end -= 1
        elif (int(s[start]) + int(s[end-1])) % 3 == 0:
            start += 1
            end -= 1
        else:
            break
    
    return s[start:end]