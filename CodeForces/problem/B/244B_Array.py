# https://codeforces.com/problemset/problem/224/B

N,K = list(map(int,input().split()))
A = list(map(int,input().split()))

numbers = [0] * 100001

L = 0
R = 0

count = 0

while R<len(A):
    if count<K:
        if numbers[A[R]]==0:
            count += 1
        numbers[A[R]] += 1
    else:
        break
    R += 1

if count<K:
    print(-1,-1)
    exit()

while True:
    if numbers[A[L]] - 1 > 0:
        numbers[A[L]] -= 1
        L += 1
    else:
        break

print(L+1,R)