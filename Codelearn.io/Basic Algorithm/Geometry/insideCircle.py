# Cho tọa độ tâm và bán kính của một đường tròn cùng tọa độ của một điểm trên mặt phẳng 2 chiều
# Kiểm tra xem điểm có nằm trong (hoặc nằm trên viền) của đường tròn hay không?

from math import sqrt

def insideCircle(point, center, radius):
    return sqrt((point[0]-center[0]) * (point[0]-center[0]) + (point[1]-center[1]) * (point[1]-center[1])) - radius <= 0