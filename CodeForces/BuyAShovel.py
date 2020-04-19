# https://codeforces.com/problemset/problem/732/A

k,r = list(map(int, input().split()))

i = 1

while (k*i)%10!=0 and (k*i)%10!=r:
    i += 1

print(i)