# http://bigocoder.com/courses/GREEN14/GREEN14_LEC10/GREEN_L10P09/statement

class Fractor:
    def __init__(self, x = 0, y = 1):
        self.num = x
        self.denom = y
        self.value = x/y
    
    def gcd(self,a,b):
        r = 0
        while a*b!=0:
            if a>b:
                a%=b
            else:
                b%=a
        return a+b

    def reduceFractor(self):
        temp = self.gcd(self.num,self.denom)
        self.num //= temp
        self.denom //= temp
    
n = int(input())
mark = Fractor()

for i in range(n):
    x,y = map(int, input().split())
    p = Fractor(x,y)

    if mark.value<=p.value:
        mark = p
mark.reduceFractor()
print(mark.num,mark.denom)