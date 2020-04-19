# https://codeforces.com/problemset/problem/266/B

n,t = list(map(int, input().split()))
s = input()
check_list = []
check_list.extend(s)

for time in range(t):
    f = 0
    for i in range(1,len(check_list)):
        if check_list[i-1]=='B' and check_list[i]=='G' and not f:
            check_list[i-1],check_list[i] = check_list[i],check_list[i-1]
            f = 2
        if f:
            f -= 1

s = ''

for i in check_list:
    s += i

print(s)