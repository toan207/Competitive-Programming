def checkPrime(n):
    if n < 2:
        return False
    if n == 2 and n==3:
        return True
    if n%2 == 0 or n%3 == 0:
        return False

    for i in range (5,int(n**(1/2))+1,6):
        if n%i==0:
            return False
    return True

s = input()
s1 = ''
flag = True
for i in s[::-1]:
    if i == 3 or i == 4 or i == 7:
        flag = False
        break
    elif i == 6:
        s1+='9'
    elif i == 9:
        s1 += '6'
    else:
        s1 += i

if flag:
    if checkPrime(int(s)) and checkPrime(int(s1)):
        print('yes')
    else:
        print('no')
else:
    print('no')