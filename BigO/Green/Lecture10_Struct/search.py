# http://bigocoder.com/courses/GREEN14/GREEN14_LEC10/GREEN_L10P05/statement

class Student:
    def __init__(self, code = '', math = 0.0, liter = 0.0):
        self.code = code
        self.math = math
        self.liter = liter

n,z = map(int,input().split())

students = []

for i in range(n):
    c,m,l = input().split()
    m = float(m)
    l = float(l)

    s = Student(c,m,l)
    students.append(s)

for j in range(z):
    code = input()
    for i in students:
        if i.code == code:
            print(i.math,i.liter)