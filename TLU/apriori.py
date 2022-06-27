I = input("Nhap cac tap muc: ").split()

print("Nhap kich co cua bang DB (so hang - so cot): ", end="")
n,m = map(int, input().split())

print("Nhap du lieu cua bang DB:")
DB = []
for i in range(n):
    row = dict()
    col = input().split()
    for x in col:
        row[x] = 1
    DB.append(row)

minsup = input("Nhap minsup = ")
minsup = eval(minsup)

X_Total = []
X = []

for i in I:
    sup = 0
    for x in DB:
        sup += x.get(i) != None
    if (sup/len(DB)) >= minsup:
        X.append(i)

pos = 0
pr = [[]]
check = dict()

while True:
    tmp = []
    j = 0
    for x in pr:
        for i in range(j,len(X)):
            if X[i] not in x:
                tmp.append(x + [X[i]])
        j += 1
    pr = tmp.copy()
    tmp = []
    for i in pr:
        tmpCheck = ""
        for tm in sorted(i):
            tmpCheck += tm
        if check.get(tmpCheck):
            continue
        check[tmpCheck] = 1
        sup = 0
        for x in DB:
            f = 1
            for y in i:
                if not x.get(y):
                    f = 0
                    break
            sup += f
        if (sup/len(DB)) >= minsup:
            print('sup({',*i,'}) = ','%.4f' % (sup/len(DB)),' >= ','%.4f' % minsup,sep='')
            print(i,' la tap muc thuong xuyen')
            tmp.append(i)
        else:
            print('sup({',*i,'}) = ','%.4f' % (sup/len(DB)),' < ','%.4f' % minsup,sep='')
            print(i,' khong la tap muc thuong xuyen')
        print()
    
    X_Total.append(tmp)

    if (not len(X_Total[pos])):
        print('Dung chuong trinh vi T[',pos + 1,'] rong!',sep='')
        break
    pos += 1

for i in range(len(X_Total)):
    if len(X_Total[i]):
        print('Tap muc co luc luong la',i + 1, X_Total[i])
