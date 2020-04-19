# https://codeforces.com/problemset/problem/455/A

n = int(input())
a = list(map(int, input().split()))

check_list = [0] * (100001)
mark_list = [0] * (100001)

_max = 0

for i in a:
    check_list[i] += i

mark_list[1] = check_list[1]
i = 2

while i<100001:
    num1 = mark_list[i-2] + check_list[i]
    num2 = mark_list[i-1]
    mark_list[i] = max(num1,num2)
    i += 1

print(mark_list[100000])