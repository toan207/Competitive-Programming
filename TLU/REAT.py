C = input('C = ').split()
U = int(input())

C.append('d')
print(*C)
Tabl = []
for i in range(U):
    Tabl.append(list(map(int, input().split())))

Er = []
for i in range(len(Tabl)):
    for j in range(i + 1,len(Tabl)):
        tmpS = ''
        for x in range(len(Tabl[0])):
            if (Tabl[i][x] == Tabl[j][x]):
                tmpS += C[x]
        if len(tmpS):
            Er.append(tmpS)

print('Er   =',Er)

A = []
for i in Er:
    if 'd' not in i:
        A.append(i)

print('A    =', A)

Md = []
for i in range(len(A)):
    f = 1
    for j in range(len(A)):
        if i == j:
            continue
        fA = 1
        for x in A[i]:
            if x not in A[j]:
                fA = 0
                break
        if fA:
            f = 0
            break
    if f:
        Md.append(A[i])

print('Md   =', Md)

M = ''
for i in C:
    f = 1
    for j in range(len(Md)):
        if i not in Md[j]:
            f = 0
            break
    if f:
        M += i

V = []
for i in C:
    if i not in M:
        V.append(i)

print('V    =', V)

if 'd' in V:
    V.remove('d')
print('REAT =', V)