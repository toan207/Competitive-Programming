# https://codeforces.com/contest/75/problem/A

first_number = input()
second_number = input()

mark = int(first_number) + int(second_number)
first_number = first_number.replace('0','')
second_number = second_number.replace('0','')

mark = str(mark).replace('0','')
mark = int(mark)

f = mark == int(first_number) + int(second_number)

print('YES' if f else 'NO')