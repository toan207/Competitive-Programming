def merge(L,n1,R,n2,arr):
    i = 0
    j = 0
    k = 0
    while(i < n1 and j < n2):
        if (L[i] < R[j]):
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
            k += 1

    if (i == n1):
        while(j < n2):
            arr[k] = R[j]
            j += 1
            k += 1
    else:
        while(i < n1):
            arr[k] = L[i]
            i+=1
            k+=1

def merge_sort(arr,n):
  if (n <= 1):
    return
  
  n1 = n//2
  n2 = n - n1
  
  L = arr[:n1]
  R = arr[n1:]
  
  merge_sort(L,n1)
  merge_sort(R,n2)
  merge(L,n1,R,n2,arr)