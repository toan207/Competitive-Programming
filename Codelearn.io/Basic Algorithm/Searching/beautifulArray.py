# Một mảng được gọi là "đẹp" nếu mảng đó chứa một phần tử mà phần tử đó 
# chia mảng làm 2 phần (không rỗng và không chứa phần tử đó) có tổng bằng nhau.
# Hãy kiểm tra xem một mảng bất kì có phải là một mảng "đẹp" hay không?

def beautifulArray(arr):

    if len(arr)<3:
        return False

    _sum = sum(arr)
    i = 0
    check = 0
    while i<len(arr)-1:
        check += arr[i]
        _sum -= arr[i]
        if _sum - arr[i+1] == check:
            return True
        i += 1
    return False

arr = [1,0,3,-2,3]
print(beautifulArray(arr))