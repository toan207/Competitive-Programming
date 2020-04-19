# Cho 2 mảng A và B chứa số nguyên. 
# Tìm ra một mảng đã được sắp xếp chứa các phần tử xuất hiện trong mảng B nhưng lại không xuất hiện A
# Chú ý các phần tử giống nhau chỉ tính là 1 lần xuất hiện

def missingValue(a, b):
    ans = []
    for i in b:
        if i not in a and i not in ans:
            ans.append(i)
    ans.sort()
    return ans