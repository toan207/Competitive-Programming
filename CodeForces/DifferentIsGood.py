# https://codeforces.com/problemset/problem/672/B

n = input()
s = input()
l = []
l.extend(s)
if len(l) - len(set(l)) > 26 or len(l)>26:
    print(-1)
else:
    print(len(l) - len(set(l)))