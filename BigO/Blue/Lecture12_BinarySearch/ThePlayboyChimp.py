# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC12/BLUE_L12P04

n = int(input())
women = list(map(int, input().split()))

q = int(input())
luchu = list(map(int, input().split()))

for i in luchu:

    l = 0
    r = n - 1
    markH = int(2e32)
    markS = 0
    while l <= r:
        mid = (r + l)//2
        if women[mid] >= i:
            r = mid - 1
        elif women[mid] < i:
            l = mid + 1
            if markS < women[mid]:
                markS = women[mid]
    l = 0
    r = n - 1
    while l <= r:
        mid = (r + l)//2
        if women[mid] > i:
            r = mid - 1
            if markH > women[mid]:
                markH = women[mid]
        elif women[mid] <= i:
            l = mid + 1
    if markS == 0:
        markS = 'X'
    if markH == int(2e32):
        markH = 'X'
    print(markS,markH)