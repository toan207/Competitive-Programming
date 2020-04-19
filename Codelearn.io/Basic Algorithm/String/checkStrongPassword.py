# Một trang web định nghĩa 1 mật khẩu được gọi là mạnh (strong) nếu đảm bảo các yếu tố sau:
# Có độ dài tối thiểu là 6
# Chứa ít nhất 1 chữ số (1234567890)
# Chứa ít nhất kí tự chữ cái in thường (abc...z)
# Chứa ít nhất 1 kí tự chữ cái in hoa (ABC...Z)
# Chứa ít nhất 1 kí tự đặc biệt: !@#$%^&*()-+
# Cho một xâu kí tự thể hiện password, hãy kiểm tra xem đó có phải là password mạnh hay không?

def checkStrongPassword(password):
    if len(password)<6:
        return False
    fN, fLC, fUC, fSC = 0,0,0,0
    for i in password:
        if i.isdigit():
            fN = 1
        elif i.isupper():
            fUC = 1
        elif i.islower():
            fLC = 1
        elif i in '!@#$%^&*()-+':
            fSC = 1
        
        if fN and fLC and fUC and fSC:
            return True
    
    return False