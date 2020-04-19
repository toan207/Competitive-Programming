# Cho số tự nhiên n. Hãy tính số chữ số 0 tận cùng của n! (n! (hay còn gọi là n giai thừa) là tích các số tự nhiên liên tiếp từ 1 tới n)
# Đầu vào: integer n
# 1 <= n <= 10^12

def numberZeroDigits(n):
    count5 = 0
    i = 1
    while n!=0:
        count5 += n//5
        n //= 5

    return count5