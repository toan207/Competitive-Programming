# Cho một mảng số nguyên
# Hãy viết chương trình tìm ra một mảng mới, 
# sao cho các phần tử trong 2 mảng này chứa đủ các số nguyên liên tiếp của một khoảng nào đó

def makeArrayConsecutive(sequence):
    _min = min(sequence)
    _max = max(sequence)
    ans = []
    for i in range(_min,_max+1):
        if i not in sequence:
            ans.append(i)
    return ans