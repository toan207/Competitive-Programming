# Cho số tự nhiên product
# Hãy tìm số nguyên dương nhỏ nhất (lớn hơn 0) mà tích các chữ số của số đó bằng product. 
# Nếu không có số thỏa mãn, trả ra -1.

def digitsProduct(product):
    ans = ''
    i = 9
    if product==2 or product==3 or product==5 or product==7 or product==1:
        return product
    if product == 0:
        return 10
    while product!=1 and i>1:
        if product%i==0:
            product //= i
            ans = str(i) + ans
        else:
            i -= 1
    if ans != '':
        return ans
    return -1