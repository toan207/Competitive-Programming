# Một nhóm người đứng thành hàng trong công viên. Giữa họ có một số cây không thể di chuyển
# Nhiệm vụ của bạn là thay đổi vị trí của họ, 
# sao cho chiều cao của họ tạo thành một dãy tăng dần (không tính cây). 
# Chú ý rằng cây không thể di chuyển. Cây = -1

# Quick Sort except element equal X
def QuickSort(L,R,a,X):
    if L>=R:
        return
    
    while a[L]==X and L<len(a)-1:
        L += 1

    pivot = L
    storeIndex = pivot + 1

    while storeIndex<len(a) and a[storeIndex]==X:
        storeIndex += 1

    for i in range(L,R):
        if a[i] < a[pivot] and a[i]!=X:
            a[i], a[storeIndex] = a[storeIndex], a[i]
            storeIndex += 1
            while storeIndex < len(a) and a[storeIndex]==X:
                storeIndex += 1
    
    while storeIndex > pivot + 1 and a[storeIndex-1]==X:
        storeIndex -= 1
    a[pivot], a[storeIndex-1] = a[storeIndex-1], a[pivot]
    
    QuickSort(pivot,storeIndex-1,a,X)
    QuickSort(storeIndex,R,a,X)

def sortByHeight(a):
    QuickSort(0,len(a),a,-1)
    return a

a = [-1, 150, 190, 170, -1, -1, 160, 180]
QuickSort(0,len(a),a,-1)
print(a)