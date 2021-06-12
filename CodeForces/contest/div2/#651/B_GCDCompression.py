# https://codeforces.com/contest/1370/problem/B

t = int(input())

for test in range(t):
    n = int(input())
    nums = list(map(int, input().split()))

    for i in range(n*2):
        nums[i] = (i, nums[i])
    
    odd = []
    even = []

    for i in nums:
        if i[1]%2:
            odd.append(i[0])
        else:
            even.append(i[0])
    
    ans = []
    for i in range(0,len(odd)-1,2):
        ans.append( (odd[i], odd[i+1]) )
    
    for i in range(0,len(even)-1,2):
        ans.append( (even[i], even[i+1]) )
    
    for i in range(n-1):
        print(ans[i][0] + 1, ans[i][1] + 1)