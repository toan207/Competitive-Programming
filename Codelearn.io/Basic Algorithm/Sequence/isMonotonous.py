# Cho một mảng các số nguyên, 
# bạn hãy viết hàm kiểm tra xem các phần tử của mảng có tạo thành một dãy số tăng dần hoặc giảm dần hay không, 
# nếu có return true, ngược lại return false.

def isMonotonous(sequence):
    f = 1
    for i in range(len(sequence)-1):
        if sequence[i]<=sequence[i+1]: 
            f = 0
            break
    if f:
        return True
    for i in range(len(sequence)-1):
        if sequence[i]>=sequence[i+1]: 
            return False
    return True