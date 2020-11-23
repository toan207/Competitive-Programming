# https://v2.bigocoder.com/courses/41/lectures/545/problems/340?view=statement

NUM_BITS = 32

def isPowerOf2(num): 
    return (num and (num & (num - 1)) == 0) 

def checkSubsequence(arr, n): 

    if (n == 1): 
        return isPowerOf2(arr[0]) 

    total = 0
    for i in range(0, NUM_BITS): 
        total = total | (1 << i) 

    for i in range(0, NUM_BITS):  
   
        ans = total 
        for j in range(0, n): 

            if (arr[j] & (1 << i)): 
                ans = ans & arr[j] 

        if (isPowerOf2(ans)): 
            return True
    return False

t = int(input())

for test in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    if (checkSubsequence(arr, n)): 
        print ("YES") 
    else: 
        print ("NO")