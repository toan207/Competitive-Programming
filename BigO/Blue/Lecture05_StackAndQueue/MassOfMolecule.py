# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC04/BLUE_L04P05/statement

n = input()

mass = {'C':12,'H':1,'O':16}

temp = []
stack = []

for i in range(len(n)):
    if n[i].isalpha():
        temp.append(mass[n[i]])
    elif n[i].isdigit():
        temp[len(temp)-1] *= int(n[i])
    elif n[i] == '(':
        stack.append(len(temp))
    else:
        end = stack.pop()
        for j in range(len(temp)-1,end,-1):
            temp[len(temp)-2] += temp[len(temp)-1]
            temp.pop()
print(sum(temp))