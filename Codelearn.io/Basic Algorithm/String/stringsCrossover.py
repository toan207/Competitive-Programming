# Định nghĩa phép toán crossover của hai xâu có độ dài bằng nhau A và B như sau:
# Kết quả của phép toán này là một xâu result có độ dài bằng với hai xâu đầu vào
#result[i] bằng A[i] hoặc B[i]
# Cho một danh sách các xâu có độ dài bằng nhau inputArray và một xâu result, 
# hãy đếm xem có bao nhiêu cặp xâu trong mảng đã cho mà kết quả của phép toán crossover cho ra kết quả là result.

def stringsCrossover(inputArray, result):
    ans = 0
    for i in range(len(inputArray)):
        for j in range(i+1,len(inputArray)):
            f = 1
            for z in range(len(inputArray[i])):
                if inputArray[i][z] != result[z] and inputArray[j][z] != result[z]:
                    f = 0
                    break
            if f:
                ans += 1
    return ans