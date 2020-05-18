# https://codeforces.com/problemset/problem/469/A

n = int(input())
p = list(map(int, input().split()))
q = list(map(int, input().split()))

ans_list = [0] * n

_max = max(p[0],q[0])

for i in range(1,_max+1):
    if i<=p[0]:
        ans_list[p[i]-1] = 1
    if i<=q[0]:
        ans_list[q[i]-1] = 1

if ans_list.count(0)==0:
    print('I become the guy.')
else:
    print('Oh, my keyboard!')