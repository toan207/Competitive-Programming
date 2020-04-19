# Cho một bảng có n hàng và m cột
# Mỗi một ô trong bảng ở hàng i và cột j chứa 1 số  có giá trị bằng i * j 
# (chỉ số hàng và cột đều được đếm bắt đầu từ 1)
# Cho trước n và m, hãy tìm số lượng các số nguyên khác nhau nằm trong bảng

def differentValuesInMultiplicationTable2(n, m):
    mark_list = []
    count = 0
    for i in range(1,n+1):
        for j in range(1,m+1):
            if i*j not in mark_list:
                mark_list.append(i*j)
                count += 1
    return count