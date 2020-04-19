# https://codeforces.com/problemset/problem/136/A

n = int(input())
p = list(map(int, input().split()))

ans_list = [0] * n

for i in range(n):
    ans_list[p[i]-1] = i+1

for i in ans_list:
    print(i, end=' ')