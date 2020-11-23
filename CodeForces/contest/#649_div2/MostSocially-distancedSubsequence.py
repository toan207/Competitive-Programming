# https://codeforces.com/contest/1364/problem/B

t = int(input())

for test in range(t):
    n = int(input())
    nums = list(map(int, input().split()))
    ans = []

    for i in range(n):
        if i>0 and i<n-1:
            if (nums[i]<nums[i+1] and nums[i-1]<nums[i]) or (nums[i]>nums[i+1] and nums[i-1]>nums[i]):
                continue
            else:
                ans.append(nums[i])
        else:
            ans.append(nums[i])
    print(len(ans))
    print(*ans)   