# Cho hai xâu kí tự, hãy kiểm tra xem có tồn tại phương án đổi 
# chỗ các kí tự ở trong xâu thứ nhất để trở thành xâu thứ hai được hay không? 
# Với string1 = "abcd" và string2 = "cbad" thì kết quả charactersRearrangement(string1, string2) = true;


def charactersRearrangement(string1, string2):
    l1 = []
    l1.extend(string1)
    l2 = []
    l2.extend(string2)
    l1.sort()
    l2.sort()
    return l1 == l2