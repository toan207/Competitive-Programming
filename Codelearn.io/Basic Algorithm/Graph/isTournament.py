# Cho một đồ thị có hướng
# Kiểm tra xem đồ thị trên có phải là tournament hay không?
# Có thể hiểu tournament là một đồ thị mà giữa 2 đỉnh bất kì luôn tồn tại 1 và chỉ 1 cạnh nối 

def isTournament(n, fromV, toV):
    mark = [[0 for i in range(n)] for j in range(n)]
    for i in range(len(fromV)):
        mark[fromV[i]-1][toV[i]-1] += 1
        mark[toV[i]-1][fromV[i]-1] += 1
        print(mark)
        if mark[fromV[i]-1][toV[i]-1] > 1 or mark[toV[i]-1][fromV[i]-1] > 1:
            return False
    for i in mark:
        if i.count(0)>1:
            return False
    return True

n = 5
fromV =[2, 1, 3, 4, 4, 4, 1, 2, 3, 4]
toV = [3, 2, 1, 3, 2, 1, 5, 5, 5, 5]
isTournament(n,fromV,toV)