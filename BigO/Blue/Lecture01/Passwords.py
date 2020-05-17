# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC01/BLUE_L01P07/statement
n,k = list(map(int,input().split()))
passwords = []
for i in range(n):
    x = input()
    passwords.append(x)
passwords.sort(key=lambda x: len(x))
ans = input()
bestAns = 0
worstAns = 0

mark = 0
for i in passwords:
    if len(i) != len(ans):
        bestAns += 1
        if mark==k:
            bestAns += 5
            mark = 0
    else:
        bestAns += 1
        if mark==k:
            bestAns += 5
            mark = 0
        break
    mark += 1

mark = 0
for i in passwords:
    if len(i)>len(ans):
        break
    if len(i) != len(ans):
        worstAns += 1
        if mark==k:
            worstAns += 5
            mark = 0
    else:
        worstAns += 1
        if mark==k:
            worstAns += 5
            mark = 0
    mark += 1

print(bestAns,worstAns)