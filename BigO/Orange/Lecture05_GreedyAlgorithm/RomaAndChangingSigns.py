# https://v2.bigocoder.com/courses/41/lectures/557/problems/392?view=statement
 
n,k = map(int, input().split())
arr = list(map(int, input().split()))
 
arr.sort()
 
i = 0
while k > 0:
    if arr[i] > 0 or i == n-1:
        if i > 0 and arr[i] > arr[i-1] and k%2:
            arr[i-1] *= -1
            break
        if k%2:
            arr[i] *= -1
            break
        break
    arr[i] *= -1
    i += 1
    k -= 1
 
print(sum(arr))