# https://codeforces.com/problemset/problem/270/A

t = int(input())
for i in range(t):
    a = int(input())
    polygon = 3
    check = (polygon - 2) * (180/polygon)               # The formula for calculating the angle of a regular polygon (equilateral polygon)
    f = 0
    while check <= a:
        if check == a:
            f = 1
            break
        polygon += 1
        check = (polygon - 2) * (180/polygon)
    print('YES' if f else 'NO')