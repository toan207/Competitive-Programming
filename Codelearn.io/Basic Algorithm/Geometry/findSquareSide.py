# Cho 4 đỉnh của 1 hình vuông không theo thứ tự
# Hãy tính diện tích của hình vuông (bình phương của một cạnh).
# Với x = [0, 1, 0, 1] và y = [0, 1, 1, 0], kết quả findSquareSide(x, y) = 1.

from math import sqrt

def findSquareSide(x, y):
    mark = []
    for i in range(4):
        temp = []
        temp.append(x[i])
        temp.append(y[i])
        mark.append(temp)
    mark.sort(key = lambda x: x[0])
    return (mark[1][0]-mark[0][0]) * (mark[1][0]-mark[0][0]) + (mark[1][1]-mark[0][1]) * (mark[1][1]-mark[0][1])