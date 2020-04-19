# https://codeforces.com/problemset/problem/427/A

n = int(input())
events = list(map(int, input().split()))

polices = 0
untreated = 0

for i in events:
    if i<0:
        if polices>0:
            polices -= 1
        else:
            untreated += 1
    else:
        polices += i

print(untreated)