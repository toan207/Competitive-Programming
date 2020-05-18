# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC12/BLUE_L12P03/statement

n, m = map(int, input().split())
tree = list(map(int, input().split()))

_max = max(tree)
s = 0

mark = 0

while s <= _max:
    mid = (_max + s)//2
    canCut = 0
    for i in range(n):
        if tree[i] > mid:
            canCut += tree[i] - mid
    if canCut > m:
        s = mid + 1
        if mid > mark:
            mark = mid
    elif canCut < m:
        _max = mid - 1
    else:
        mark = mid
        break

print(mark)