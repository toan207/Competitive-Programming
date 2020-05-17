# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC04/BLUE_L04P01/statement

n = int(input())

check ='+-*/^'

for i in range(n):
    s = input()
    mark = []
    ans = ''
    for j in s:
        if j.isalpha():
            ans += j
        elif j in check:
            mark.append(j)
        elif j == ')':
            ans += mark.pop()
    print(ans)