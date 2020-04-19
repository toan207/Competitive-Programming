# Tìm chữ số khác không cuối cùng của n!(giai thừa)

n = 10
def lastDigitDiffZero(n):
    dig= [1, 1, 2, 6, 4, 2, 2, 4, 2, 8] 
    if (n < 10):
        return dig[n]
    if ((n//10)%2 == 0): 
        return (6*lastDigitDiffZero(n//5)*dig[n%10]) % 10
    else: 
        return (4*lastDigitDiffZero(n//5)*dig[n%10]) % 10

print(lastDigitDiffZero(n))