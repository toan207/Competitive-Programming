# http://bigocoder.com/courses/GREEN14/GREEN14_LEC10/GREEN_L10P02/statement

class Point:
    def __init__(self,x = 0,y = 0):
        self.x = x
        self.y = y
    
    def distance(self,p2):
        dist = ((self.x - p2.x)**2 + (self.y - p2.y)**2)**0.5
        return dist
    
x,y = map(int,input().split())
startPoint = Point(x,y)

n = int(input())

_max = 0
mark = Point()

for i in range(n):
    x,y = map(int,input().split())
    endPoint = Point(x,y)

    check = startPoint.distance(endPoint)
    if check>_max:
        _max = check
        mark = endPoint

print(mark.x,mark.y)