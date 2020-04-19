# Bạn được cho 4 điểm trên mặt phẳng hai chiều: points = [[x1, y1], [x2, y2], [x3, y3], [x4, y4]].
# Bạn nối các điểm đó theo thứ tự đã cho, và nối điểm thứ 4 ngược về điểm đầu tiên.
# Viết chương trình kiểm tra xem hình được tạo bởi cách nối các điểm đã cho theo thứ tự có tạo thành hình chữ nhật hay không?

def isRectangle(points):
    edge = []
    for i in range(-1,3):
        temp = []
        temp.append(points[i+1][0]-points[i][0])
        temp.append(points[i+1][1]-points[i][1])
        edge.append(temp)
    for i in range(-1,3):
        if edge[i][0] * edge[i+1][0] + edge[i][1] * edge[i+1][1] != 0:
            return False
    return True