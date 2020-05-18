# https://codeforces.com/problemset/problem/490/A

students = int(input())
student_skill = list(map(int, input().split()))

program_student = []
math_student = []
pe_student = []

for i in range(students):
    if student_skill[i] == 1:
        program_student.append(i+1)
    elif student_skill[i] == 2:
        math_student.append(i+1)
    else:
        pe_student.append(i+1)

i = 0

print (min(min(len(pe_student),len(math_student)),len(program_student)))
while i < len(pe_student) and i < len(math_student) and i < len(program_student):
    print(program_student[i],math_student[i],pe_student[i])
    i += 1