# http://codeforces.com/contest/492/problem/A

n = int(input())
mark = [0,1,3,6]

def cal(n,arr):
    if n<len(arr):
        return arr[n]
    arr.append(arr[len(arr)-1]+len(arr))
    return cal(n,arr)

i = 0

while n - mark[i] >= 0:
    n -= mark[i]
    i += 1
    cal(i,mark)
print(i-1)