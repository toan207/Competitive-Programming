# https://v2.bigocoder.com/courses/41/lectures/557/problems/394?view=statement

n = int(input())
ar = list(map(int, input().split()))

ar.sort()

ans = 0
for i in range(n):
    ans += abs(i + 1 - ar[i])

print(ans)