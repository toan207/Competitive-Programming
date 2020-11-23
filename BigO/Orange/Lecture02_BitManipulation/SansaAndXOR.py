# https://v2.bigocoder.com/courses/41/lectures/545/problems/342?view=statement

import functools

t = int(input())
for test in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    temp = functools.reduce(lambda x, y: x ^ y, [a[i] for i in range(n) if ((i + 1) * (n - i)) & 1], 0)
    print(temp)