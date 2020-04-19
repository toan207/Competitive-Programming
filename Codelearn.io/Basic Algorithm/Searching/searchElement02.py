# Cho một ma trận a có kích thước n*n 
# mà các phần tử trên cùng một hàng hoặc cùng một cột được sắp xếp không giảm
# Viết chương trình tìm phần tử nhỏ thứ k (đếm từ 1) 
# của ma trận này (không tính các phần tử có giá trị bằng nhau).
# Nếu không có phần tử phù hợp trả về -1.

def QuickSort(L,R,a):
    if L>=R:
        return

    pivot = L
    storeIndex = pivot + 1

    for i in range(L,R):
        if a[i] < a[pivot]:
            a[i], a[storeIndex] = a[storeIndex], a[i]
            storeIndex += 1
    a[pivot], a[storeIndex-1] = a[storeIndex-1], a[pivot]
    
    QuickSort(pivot,storeIndex-1,a)
    QuickSort(storeIndex,R,a)

def searchElement02(a, k):
    allElement = []
    for i in a:
        allElement += i
    uniqueArr = []
    for i in allElement:
        if i not in uniqueArr:
            uniqueArr.append(i)
    
    if len(uniqueArr)<=k:
        return -1
    QuickSort(0,len(uniqueArr),uniqueArr)
    
    return uniqueArr[k-1]

searchElement02([[1,3,8], [2,4,10], [2,5,12]], 4)