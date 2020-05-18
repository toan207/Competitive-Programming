# https://codeforces.com/problemset/problem/279/B

N,T = map(int,input().split())
A = list(map(int,input().split()))

books = 0

j = 0
i = 0
mark = 0
check = 0

while j<N and i<N:
    if check + A[j]<=T:
        check += A[j]
        j += 1
        mark += 1
    else:
        books = max(mark,books)
        mark -= 1
        check -= A[i]
        i += 1

books = max(mark,books)

print(books)