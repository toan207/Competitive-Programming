# https://codeforces.com/problemset/problem/41/A

BerlandLanguage = input()
BirlandLanguage = input()

if BerlandLanguage[::-1] == BirlandLanguage:
    print('YES')
else:
    print('NO')