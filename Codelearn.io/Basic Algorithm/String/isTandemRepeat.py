# Cho một xâu kí tự s
# Hãy kiểm tra xem xâu s có thể tạo ra bằng cách ghép một xâu vào chính nó hay không? 

def isTandemRepeat(inputString):
    if len(inputString)%2!=0:
        return False
    
    return inputString[:len(inputString)//2] == inputString[len(inputString)//2:]