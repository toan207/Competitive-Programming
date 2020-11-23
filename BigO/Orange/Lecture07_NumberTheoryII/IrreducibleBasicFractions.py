# https://v2.bigocoder.com/courses/41/lectures/564/problems/409?view=statement

while True:
    n = int(input())

    if n == 0:
        break

    result = n
    i = 2
    f = 0
    while n > 1:
        if n%i == 0 and not f:
            result *= 1 - (1/i)
            f = 1
        elif not n%i:
            n /= i
        elif i*i>n:
            break
        else:
            i += 1
            f = 0
            continue
    
    if n>1:
        result *= 1 - (1/n)
    print(int(result))