from collections import Counter

n = int(input())
d = dict()
ke = []

for i in range(n):
    a,b = input().split(': ')
    d[a] = b
    ke.append(a)
sear = input()

if sear not in ke:
    print('no data')
else:
    ke.sort()
    mark = 0
    for i in ke:
        if i == sear or mark != 0:
            if mark == 5:
                break
            print(i,d[i],sep=': ')
            mark += 1