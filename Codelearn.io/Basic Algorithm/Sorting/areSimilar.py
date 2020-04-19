# Hai mảng a và b được gọi là tương đồng nếu ta có thể thu được mảng 
# b bằng cách đổi chỗ tối đa 1 lần 2 phần tử bất kì trong mảng a
# Cho hai mảng a và b, kiểm tra hai mảng có tương đồng hay không?

def areSimilar(a, b):
    if len(a)!=len(b):
        return False
    count = 0
    mark_a = [0] * (1001)
    mark_b = [0] * (1001)
    for i in range(len(a)):
        mark_a[a[i]] += 1
        mark_b[b[i]] += 1
    if mark_a!=mark_b:
        return False
    for i in range(len(a)):
        if a[i]!=b[i]:
            count += 1
            if count>2:
                return False
    return True