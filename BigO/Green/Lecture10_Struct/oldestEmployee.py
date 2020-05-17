# http://bigocoder.com/courses/GREEN14/GREEN14_LEC10/GREEN_L10P07/statement

class Employee:
    def __init__(self,code = '',name = '',year = 0):
        self.code = code
        self.name = name
        self.year = year

n = int(input())


oldestEmployee = Employee('9999999','',999999)

for i in range(n):
    c,n,y = input().split()
    y = int(y)

    e = Employee(c,n,y)
    oldestEmployee = min(e,oldestEmployee,key=lambda x: (x.year,x.code))

print(oldestEmployee.code,oldestEmployee.name,oldestEmployee.year)