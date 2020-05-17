# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC03/BLUE_L03P06

from collections import Counter

n = int(input())
l = list(map(int,input().split()))

count = Counter(l)

_max = 0
for i in count.keys():
    _max = max(_max,count[i])

print(_max, len(set(l)))