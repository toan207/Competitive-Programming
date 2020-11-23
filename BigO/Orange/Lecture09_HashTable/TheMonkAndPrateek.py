# https://v2.bigocoder.com/courses/41/lectures/569/problems/425?view=statement

n = int(input())
m = input().split()

d = dict()
_max = 0
_min = -1
count = 0
f = 1
for i in m:
    _sum = 0
    for j in i:
        _sum += int(j)
    if d.get(int(i)^_sum) != None:
        f = 0
        d[int(i)^_sum] += 1
        if d[int(i)^_sum] > d[_min]:
            _min = int(i)^_sum
        elif _min > int(i)^_sum and d[int(i)^_sum] >= d[_min]:
            _min = int(i)^_sum
        count += 1
    else:
        d[int(i)^_sum] = 0
        if int(i)^_sum > _max:
            _max = int(i)^_sum
        if _min == -1:
            _min = int(i)^_sum

if f:
    print(_max, count)
else:
    print(_min, count)