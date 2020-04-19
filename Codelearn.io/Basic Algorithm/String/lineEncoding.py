# Cho một xâu kí tự, viết hàm mã hóa xâu đó theo các luật sau:
# Đầu tiên, cắt xâu ban đầu thành các xâu con mà mỗi xâu con chỉ chứa 
# các kí tự giống nhau và xâu con tạo ra có độ dài là lớn nhất
# Ví dụ, xâu "aabbbc" được tách thành ["aa", "bbb", "c"]
# Tiếp theo, với mỗi xâu con có chiều dài lớn hơn 1, 
# hãy thay thế xâu đó bằng việc viết liền độ dài của xâu với kí tự lặp lại
# Ví dụ, xâu con "bbb" được thay thế bằng "3b"
# Cuối cùng, viết liên tiếp các xâu con vừa được mã hóa theo thứ tự ban đầu để tạo ra xâu kết quả

def lineEncoding(s):
    mark = s[0]
    count = 0
    ans = ''
    for i in s:
        if i == mark:
            count += 1
        elif count>1:
            ans += str(count) + mark
            count = 1
            mark = i
        else:
            ans += mark
            count = 1
            mark = i
    if count == 1:
        ans += mark
    else:
        ans += str(count) + mark
    return ans