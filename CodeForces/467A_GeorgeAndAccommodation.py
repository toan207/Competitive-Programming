# https://codeforces.com/problemset/problem/467/A

n = int(input())

count_impossible_case = 0

for i in range(n):
    p,q = list(map(int, input().split()))
    if q-p>=2:
        count_impossible_case += 1

print(count_impossible_case)