# Cho một xâu kí tự s gồm nhiều từ. Trong đó mỗi từ sẽ được bắt đầu bởi một kí tự in hoa.
# Vì một lí do gì đó, người ta quên chèn các khoảng trắng giữa các từ.
# Hãy viết chương trình sửa lại xâu kí tự đó theo yêu cầu sau: 
# Tách các từ, và thêm 1 kí tự cách (space) giữa 2 từ liên tiếp
# Chuyển đổi các kí tự in hoa thành kí tự in thường

def amendTheSentence(s):
    ans = ''

    for i in range(len(s)):
        if s[i].isupper() and i != 0:
            ans += ' ' + s[i]
        else:
            ans += s[i]
    
    return ans.lower()