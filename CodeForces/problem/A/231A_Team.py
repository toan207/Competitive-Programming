# https://codeforces.com/problemset/problem/231/A

n = int(input())

ans = 0

for i in range(n):
    
    list_view = input().split()
    
    if list_view.count('1')>1:
        ans += 1

print(ans)