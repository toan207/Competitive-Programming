# http://bigocoder.com/courses/GREEN14/GREEN14_LEC10/GREEN_L10P03/statement

class Student:
    def __init__(self, fullname = '', math = 0, liter = 0):
        self.fullname = fullname
        self.math = math
        self.liter = liter
    
    def average(self):
        return (self.math + self.liter)/2

n = int(input())

count = 0

for i in range(n):
    fullname = input()
    m,l = map(float,input().split())

    s = Student(fullname,m,l)
    if s.average()>=9.0:
        count += 1
    
print(count)