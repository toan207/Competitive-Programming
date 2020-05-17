# http://bigocoder.com/courses/GREEN14/GREEN14_LEC10/GREEN_L10P08/statement

class Point:
    def __init__(self,x=0,y=0,value=0):
        self.x = x
        self.y = y
        self.value = value
    
n,m = map(int,input().split())
k = int(input())
mark = []

for i in range(k):
    x,y,value = map(int,input().split())
    p = Point(x,y,value)

    if p.value>0:
        mark.append(p)

print(len(mark))
for i in mark:
    print(i.x,i.y)