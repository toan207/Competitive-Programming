# http://bigocoder.com/courses/GREEN14/GREEN14_LEC10/GREEN_L10P04/statement

class Point:
    def __init__(self,x = 0,y = 0):
        self.x = x
        self.y = y
    
    def distance(self,p2):
        dist = ((self.x - p2.x)**2 + (self.y - p2.y)**2)**0.5
        return dist

class Triangle:
    def __init__(self,p1 = Point(),p2 = Point(), p3 = Point()):
        self.verA = p1
        self.verB = p2
        self.verC = p3
    
    def square(self):
        AB = self.verA.distance(self.verB)
        AC = self.verA.distance(self.verC)
        BC = self.verB.distance(self.verC)
        p = (AB + AC + BC)/2
        s = (p*(p-AB)*(p-AC)*(p-BC))**0.5
        return s

n = int(input())
_sum = 0
for i in range(n):
    x,y = map(int,input().split())
    p1 = Point(x,y)
    x,y = map(int,input().split())
    p2 = Point(x,y)
    x,y = map(int,input().split())
    p3 = Point(x,y)

    t = Triangle(p1,p2,p3)
    _sum += t.square()

print('%.2f' % _sum)