# https://codeforces.com/problemset/problem/602/B

n = int(input())
A = list(map(int,input().split()))

_max = A[0]
_min = A[0]

i = 0
j = 0
markMax = 0
markMin = 0

while j<n:
    if abs(A[j]-_min)<=1 and abs(A[j]-_max)<=1:
        if A[j]==_min:
            markMin = j
        if A[j]==_max:
            markMax = j
        j += 1
        if j==n:
            break
        _min = min(A[j],_min)
        _max = max(A[j],_max)
    else:
        break

_max = max(A[i:j])
_min = min(A[i:j])

ans = j - i

while j<n and i<n:
    if abs(A[j]-_min)<=1 and abs(A[j]-_max)<=1:
        if A[j]==_min:
            markMin = j
        if A[j]==_max:
            markMax = j
        j += 1
    else:
        if abs(A[j]-_min)>1:
            _min = _max
            _max = A[j]
            i = markMin + 1
            markMin = markMax
            markMax = j
        else:
            _max = _min
            _min = A[j]
            i = markMax + 1
            markMax = markMin
            markMin = j
    ans = max(j-i,ans)

print(ans)