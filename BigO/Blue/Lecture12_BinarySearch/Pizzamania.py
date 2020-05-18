# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC12/BLUE_L12P02/statement

t = int(input())

for test in range(t):
    friends, price = map(int, input().split())
    money = list(map(int, input().split()))

    money.sort()

    i = 0
    j = friends-1

    couple = 0

    while i<j:
        if money[i] + money[j] < price:
            i += 1
        elif money[i] + money[j] > price:
            j -= 1
        else:
            couple += 1
            i += 1
            j -= 1
    
    print(couple)