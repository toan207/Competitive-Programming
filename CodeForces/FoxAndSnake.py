# https://codeforces.com/problemset/problem/510/A

n,m = list(map(int, input().split()))

turn_around = 0

for i in range(1,n+1):
    if i%2!=0:
        print('#'*m)
    elif not turn_around:
        print('.'*(m-1), '#', sep='')
        turn_around = 1
    else:
        turn_around = 0
        print('#','.'*(m-1), sep='')