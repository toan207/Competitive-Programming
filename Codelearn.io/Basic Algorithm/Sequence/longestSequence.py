# Cho một mảng các số nguyên
# Hãy tìm ra dãy con không liên tiếp (giữ nguyên thứ tự xuất hiện) 
# có độ dài lớn nhất và tạo thành cấp số cộng

def longestSequence(a):
    _max = 0
    count = 0
    
    if len(a)<3:
        return len(a)

    for i in range(len(a)-1):
        for j in range(i+1,len(a)-1):
            mark_distance = a[j]-a[i]
            mark_value = a[j]
            count = 2
            for z in range(j+1,len(a)):
                if a[z] - mark_value == mark_distance:
                    mark_value = a[z]
                    count += 1
                    _max = max(count,_max)

    return _max

a = [3,-1,0,-1,-1]
print(longestSequence(a))