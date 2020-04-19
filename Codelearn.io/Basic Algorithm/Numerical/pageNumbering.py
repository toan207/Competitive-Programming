# Cho biết số trang sách của 1 quyển sách
# Hãy tìm số lượng các chữ số dùng để đánh số trang của quyển sách đó
# Ví dụ:
# Với n = 11, thì kết quả pagesNumbering(n) = 13.
# 13 chữ số được sử dụng là: 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1

def pagesNumbering(n):
    countPage = 0
    countEachTens = 10
    i = 1
    if n<10:
        return n
    while i<len(str(n)):
        countPage += (countEachTens-countEachTens//10)*i
        countEachTens *= 10
        i += 1
    countPage += (n-(countEachTens//10)+1)*len(str(n))
    return countPage