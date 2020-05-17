# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC02/BLUE_L02P08/statement

n = int(input())
t = list(map(int,input().split()))

Alice = 0
Bob = 0

cA = 0
cB = 0

i = 0
j = n-1

while i<j:
    temp = min(Bob,Alice)
    Alice -= temp
    if Alice==0:
        Alice += t[i]
        cA += 1
        i += 1
    Bob -= temp
    if Bob==0:
        Bob += t[j]
        cB += 1
        j -= 1

if i<=j:
    Alice -= min(Bob,Alice)
    if Alice==0:
        Alice += t[i]
        cA += 1
        i += 1
    else:
        Bob -= min(Alice,Bob)
        Bob += t[j]
        cB += 1
        j -= 1
    
print(cA,cB)