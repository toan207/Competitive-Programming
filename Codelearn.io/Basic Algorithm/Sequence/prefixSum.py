# Cho mảng a chứa các số nguyên
# Xây dựng mảng b là prefix sums (từ này không dịch ra tiếng Việt do hơi chuối) 
# của mảng a cụ thể theo công thức:
# b[0]   = a[0]
# b[1]   = a[0] + a[1]
# b[2]   = a[0] + a[1] + a[2]
# ...
# b[n - 1] = a[0] + a[1] + ... + a[n - 1]
# với n là độ dài của mảng a.

def prefixSums(a):
    b = []
    b.append(a[0])
    for i in range(1,len(a)):
        b.append(b[i-1]+a[i])
    return b