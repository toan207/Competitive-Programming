# Trong toán học, một cấp số cộng (tiếng Anh: arithmetic progression hoặc arithmetic sequence) 
# là một dãy số thoả mãn điều kiện: hai phần tử liên tiếp nhau sai khác nhau một hằng số. 
# Chẳng hạn, dãy số 3, 5, 7, 9, 11,... là một cấp số cộng với các phân tử liên tiếp sai khác nhau hằng số 2.
# Cho một mảng số nguyên. Hãy kiểm tra xem nó có tạo thành một cấp số cộng hay không? 

def isArithmeticProgression(sequence):
    for i in range(1,len(sequence)-1):
        if sequence[i]-sequence[i-1] != sequence[i+1]-sequence[i]:
            return False
    return True