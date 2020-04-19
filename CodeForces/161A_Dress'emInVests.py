# https://codeforces.com/problemset/problem/161/A

N,M,X,Y = list(map(int,input().split()))
A = list(map(int,input().split()))
B = list(map(int,input().split()))

i = 0
j = 0

ans_list = []
ans = 0

while i<N and j<M:
    if A[i] - X <= B[j] <= A[i] + Y:
        temp = [i,j]
        ans_list.append(temp)
        ans += 1
        i += 1
        j += 1
    elif A[i] - X > B[j]:
        j += 1
    elif A[i] + Y < B[j]:
        i += 1

print(ans)
for i in ans_list:
    print(i[0]+1,i[1]+1)