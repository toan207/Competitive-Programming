# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC09/BLUE_L09P02/statement

n = int(input())
s = input()

s = s.lower()

ans_list = []
ans_list.extend(s)

if len(set(ans_list))!=26:
    print('NO')
else:
    print('YES')