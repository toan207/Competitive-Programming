# Xóa các khoảng trắng thừa (kí tự cách) trong xâu kí tự cho trước, 
# sao cho giữa các từ chỉ cách nhau bởi 1 khoảng trống. 
# Cũng không có khoảng trống ở đầu và cuối của xâu

def formatString(input):
    ans = ''
    input = input.split()

    for i in input:
        ans += i + ' '
    
    return ans[:len(ans)-1]