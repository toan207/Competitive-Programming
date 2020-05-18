# https://codeforces.com/problemset/problem/344/A

n = int(input())

mark = ''
count = 0

for i in range(n):
    magnet = input()
    if mark == '' or mark != magnet:
        count += 1
        mark = magnet

print(count)