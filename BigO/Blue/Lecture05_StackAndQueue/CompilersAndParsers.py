# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC04/BLUE_L04P08

n = int(input())

for i in range(n):
    s = input()
    mark = []
    pos = 0
    temp = 0
    if s[0] == '>' or '>' not in s:
        print(pos)
        continue
    for j in range(len(s)):
        if s[j] == '<':
            mark.append(s[j])
        else:
            if mark != []:
                mark.pop()
                pos = j
                if mark == []:
                    temp = j+1
            else:
                break
    if mark==[]:
        print(pos + 1)
    else:
        print(temp)