# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC12/BLUE_L12P07/statement

n, k = map(int, input().split())
nums = list(map(int, input().split()))

nums.sort()

count = 0

i = 0
j = 1

while i < n and j < n:
    x = nums[j] - nums[i]
    if x < k:
        j += 1
    elif x > k:
        i += 1
    else:
        i += 1
        j += 1
        count += 1
        
print(count)