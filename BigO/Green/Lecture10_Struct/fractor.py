# http://bigocoder.com/courses/GREEN14/GREEN14_LEC10/GREEN_L10P01/statement

class Fractor:
    def __init__(self, x = 0, y = 1):
        self.num = x
        self.denom = y
    
    def gcd(self,a,b):
        r = 0
        while a*b!=0:
            if a>b:
                a%=b
            else:
                b%=a
        return a+b

    def sumFractor(self, p2):
        p3 = Fractor()
        p3.num = self.num * p2.denom + self.denom * p2.num
        p3.denom = self.denom * p2.denom
        p3.reduceFractor()
        return p3

    def reduceFractor(self):
        temp = self.gcd(self.num,self.denom)
        self.num //= temp
        self.denom //= temp
    

x,y = map(int, input().split())
p1 = Fractor(x,y)
x,y = map(int, input().split())
p2 = Fractor(x,y)

print(p1.sumFractor(p2).num,p1.sumFractor(p2).denom)