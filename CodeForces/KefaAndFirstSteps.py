# https://codeforces.com/problemset/problem/580/A

n = int(input())
a = list(map(int, input().split()))

max_length = 1
count = 1

for i in range(1,n):
    if a[i-1] <= a[i]:
        count += 1
    else:
        if max_length < count:
            max_length = count
        count = 1

if max_length < count:
            max_length = count

print(max_length)