n = int(input())
ar = list(map(int, input().split()))
q = int(input())
count0 = [0] * (n+1)

for i in range(1, n+1):
    count0[i] = count0[i-1] + (ar[i-1] ^ 1)

for i in range(q):
    r,l = map(int, input().split())
    print(0 if not (l - r + 1 - count0[l] + count0[r-1])%2 else 1,count0[l] - count0[r-1])