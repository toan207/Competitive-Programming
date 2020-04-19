# Cho một đồ thị liên thông vô hướng (từ một đỉnh luôn tồn tại đường đi tới các đỉnh khác)
# Hãy tính khoảng cách giữa một đỉnh startVertex tới tất cả các đỉnh khác trong đồ thị
# Khoảng cách giữa hai đỉnh trong đồ thị được tính bằng số cạnh nối trong đường đi ngắn nhất từ đỉnh này tới đỉnh kia

def bfsDistancesUnweightedGraph(matrix, startVertex):
    end = 0
    ans = []
    while end < len(matrix):
        distance = 0
        i = startVertex
        mark = [i]
        while i != end:
            if matrix[i][end]:
                distance += 1
                break
            for j in range(len(matrix)):
                if matrix[i][j] and j not in mark:
                    i = j
                    mark.append(j)
                    break
            distance += 1
        ans.append(distance)
        end += 1
    return ans