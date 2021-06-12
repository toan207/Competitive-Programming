# https://codeforces.com/contest/1345/problem/B

t = int(input())

for test in range(t):
    n = int(input())

    count = 0

    while n > 1:
        need = 2
        while n >= need:
            n -= need
            need += 3
        count += 1

    print(count)