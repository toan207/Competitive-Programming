# https://codeforces.com/problemset/problem/282/A

n = int(input())
x = 0

for i in range(n):

    statement = input()

    if statement[1] == '+':
        x += 1
    else:
        x -= 1

print(x)