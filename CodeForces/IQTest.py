# https://codeforces.com/problemset/problem/25/A

n = int(input())
numbers = list(map(int, input().split()))

mark_odd = 0
mark_even = 0

count_odd = 0
count_even = 0

for i in range(n):
    if numbers[i]%2==0:
        mark_even = i + 1
        count_even += 1
    else:
        mark_odd = i + 1
        count_odd += 1

    if count_odd>=2 and mark_even!=0:
        print(mark_even)
        break
    if count_even>=2 and mark_odd!=0:
        print(mark_odd)
        break