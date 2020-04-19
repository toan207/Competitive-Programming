# https://codeforces.com/problemset/problem/158/A

n,k = input().split()
n,k = int(n),int(k)

a = input().split()
ans = 0
check = int(a[k-1])

for i in range(n):
    if check <= int(a[i]) and a[i]!='0':
        ans += 1
    else:
        break

print(ans)