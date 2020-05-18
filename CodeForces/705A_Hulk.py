# https://codeforces.com/problemset/problem/705/A

n = int(input())

ans = ''

for i in range(n):
    if i%2==0:
        ans += 'I hate '
    else:
        ans += 'I love '
    
    if i!=n-1:
        ans += 'that '
    else:
        ans += 'it '

print(ans)