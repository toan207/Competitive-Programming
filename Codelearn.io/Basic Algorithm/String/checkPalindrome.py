# Một xâu được gọi là palindrome nếu viết xuôi hay viết ngược xâu đó đều cho ra kết quả giống nhau
# Cho một xâu kí tự, kiểm tra nó có phải xâu palindrome không.

def checkPalindrome(inputString):
    return inputString == inputString[::-1]