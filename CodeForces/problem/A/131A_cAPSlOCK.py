# https://codeforces.com/problemset/problem/131/A

s = input()

if len(s)>1:
    if s.isupper():
        print(s.lower())
    elif s[1:].isupper():
        print(s.capitalize())
    else:
        print(s)
else:
    print(s.swapcase())