# https://v2.bigocoder.com/courses/41/lectures/576/problems/451?view=statement

check = [([0] * 2001) for i in range(2001)]

def lcs(): 
    for i in range(len(ag)+1):
        for j in range(len(tom)+1):
            if i==0 or j==0:
                continue
            if ag[i-1] == tom[j-1]:
                check[i][j] = check[i-1][j-1] + 1
            else:
                check[i][j] = max(check[i][j-1],check[i-1][j])
    return check[len(ag)][len(tom)]



t = int(input())

for _ in range(t):
    ag = list(map(int, input().split()))
    
    mark = 0

    while True:
        tom = list(map(int, input().split()))
        
        if len(tom) == 1:
            break

        mark = max(mark,lcs())

    print(mark-1)