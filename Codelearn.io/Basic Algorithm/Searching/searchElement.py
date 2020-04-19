# Cho một mảng chứ các giá trị số và một số nguyên dương n. 
# Tìm ra số lớn thứ n trong mảng đó. Nếu không có giá trị thoả mãn, trả về -1.
# Note : Không tính các số trùng lặp trong mảng.
# Với a = [100, 100, 99, 98, 102, 103], n = 4 thì đầu ra của chương trình searchElement(a, n) = 99


def QuickSort(L,R,a):
    if L>=R:
        return

    pivot = L
    storeIndex = pivot + 1

    for i in range(L,R):
        if a[i] > a[pivot]:
            a[i], a[storeIndex] = a[storeIndex], a[i]
            storeIndex += 1
    a[pivot], a[storeIndex-1] = a[storeIndex-1], a[pivot]
    
    QuickSort(pivot,storeIndex-1,a)
    QuickSort(storeIndex,R,a)

def searchElement(a, n):
    QuickSort(0,len(a),a)
    uniqueArr = []
    for i in a:
        if i not in uniqueArr:
            uniqueArr.append(i)
    if len(uniqueArr)<=n:
        return -1
    return uniqueArr[n-1]