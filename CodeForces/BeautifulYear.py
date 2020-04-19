# https://codeforces.com/problemset/problem/271/A

year = int(input())

while True:
    year += 1
    if str(year)[0] not in str(year)[1:] and str(year)[1] not in str(year)[2:] and str(year)[2] != str(year)[3]:
        print(year)
        break