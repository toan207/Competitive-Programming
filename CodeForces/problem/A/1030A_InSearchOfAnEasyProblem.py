# https://codeforces.com/problemset/problem/1030/A

n = int(input())
_list = list(map(int, input().split()))

if 1 in _list:
    print('HARD')
else:
    print('EASY')