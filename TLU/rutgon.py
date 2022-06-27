C = input("C = ").split()
cStr = ""
for i in C:
    cStr += i
C.append('d')
cStrD = ""
for i in C:
    cStrD += i

print("Nhap kich co cua bang DS (so hang): ", end="")
n = int(input())
m = len(C)

print("Nhap du lieu cua bang DS:")
DS = []
for i in range(n):
    row = dict()
    col = list(map(int, input().split()))
    for x in range(len(C)):
        row[C[x]] = col[x]
    DS.append(row)

# get Er
Er = []
for i in range(n):
    for j in range(i + 1,n):
        tmp = ""
        for x in C:
            if DS[i][x] == DS[j][x]:
                tmp += x
        Er.append(tmp)
print()
print("Er =", Er)

# get M
M = []
for i in Er:
    if i not in M:
        M.append(i)
print("M  =", M)

# get L
L = cStr
pos = 0
print()
print("L(0) =", L)

haveAns = 1
for i in range(m-1):
    tmp = ""
    for x in range(len(L)):
        if x != pos:
            tmp += L[x]
    if not tmp:
        haveAns = 0
        break
    tmpList = []
    for x in M:
        f = 1
        for y in tmp:
            if y not in x:
                f = 0
                break
        if f:
            tmpList.append(x)
    check = ""
    if tmpList:
        for x in C:
            f = 1
            for y in tmpList:
                if x not in y:
                    f = 0
                    break
            if f:
                check += x
    if not check:
        check = cStrD
    fD = 0
    if 'd' in check:
        fD = 1
    if fD:
        L = tmp
        print("L(",i+1,") = ", L, " vi {",tmp,"}r+ = ",check," co chua d", sep="")
    else:
        pos += 1
        print("L(",i+1,") = ", L, " vi {",tmp,"}r+ = ",check," khong chua d", sep="")
if haveAns:
    print("Vay {",L,"} la mot tap rut gon cua bang quyet dinh tren", sep="")
else:
    print("Vi r+ rong nen khong tim duoc L(n) nen khong co tap rut gon cua bang quyet dinh tren")