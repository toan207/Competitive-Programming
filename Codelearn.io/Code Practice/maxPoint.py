# https://codelearn.io/training/detail?id=632023

def maxPoint(a, b):
    ans = []
    mark_max = [a[0]]
    for i in range(1,len(a)):
        mark_max.append(max(a[i],mark_max[i-1]))
    for i in b:
        ans.append(mark_max[i])
    return ans