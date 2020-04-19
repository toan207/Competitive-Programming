# Chúng ta có một số nguyên dương n. 
# Mỗi một lần ta thay thế n bằng tổng các thừa số nguyên tố của nó 
# (ví dụ 12=2*2*3 thì 12 sẽ được thay thế bằng số 2+2+3=7)
# Chúng ta áp dụng phép toán này vào số hiện tại cho đến khi kết quả thu được giống vs số hiện tại
# Cho một số tự nhiên, hãy tìm kết quả cuối cùng của phép toán trên.

def factorSum(n):
    i = 2
    _sum = 0
    
    while True:
        temp = n
        while n>=i:
            if n%i!=0:
                i += 1
            else:
                n = n//i
                _sum += i
        if temp==_sum:
            return _sum
        n = _sum
        i = 2
        _sum = 0