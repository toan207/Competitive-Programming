# Một bài nâng cao từ bài kiểm tra số nguyên tố:
# Cho số nguyên n, hãy tính tổng các số nguyên tố nhỏ hơn hoặc bằng n
# Bởi vì tổng các số nguyên tố nhỏ hơn hoặc bằng n có thể rất lớn, 
# nên hãy trả ra kết quả của tổng trên dưới dạng là số dư trong phép chia của tổng trên cho 22082018.

from math import sqrt

def primeSum(n):
    if n<2:
        return 0
    check_prime = [1] * (n+1)
    check_prime[0] = check_prime[1] = 0
    mark = 0

    for i in range(2,int(sqrt(n)+1)):
        if check_prime[i]:
            for j in range(i*i,n+1,i):
                check_prime[j] = 0
    
    for i in range(n+1):
        if check_prime[i]:
            mark = (mark + i) % 22082018

    return mark