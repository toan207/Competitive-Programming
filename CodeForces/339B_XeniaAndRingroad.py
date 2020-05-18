# https://codeforces.com/problemset/problem/339/B

n, m = list(map(int, input().split()))
work = list(map(int, input().split()))

stay = 1

ans = 0

for i in work:
    if i == stay:
        continue
    elif stay<i:
        ans += i - stay
        stay = i
    else:
        ans += n - stay + i
        stay = i

print(ans)