# Cho một mảng số nguyên
# Hãy kiểm tra xem tần số xuất hiện của tất cả các số nguyên trong mảng có bằng nhau hay không
# 1 ≤ inputArray.length ≤ 5 · 104,
# 1 ≤ inputArray[i] ≤ 4 · 108.

def checkEqualFrequency(inputArray):
    inputArray.sort()
    mark = inputArray.count(inputArray[0])
    count = 0
    mark_value = inputArray[0]
    for i in inputArray:
        if mark_value==i:
            count += 1
        else:
            if count != mark:
                return False
            mark_value = i
            count = 1
    if count != mark:
        return False
    return True