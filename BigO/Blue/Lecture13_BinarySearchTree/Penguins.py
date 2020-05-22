# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC13/BLUE_L13P05/statement

n = int(input())

penguins = {}

for i in range(n):
    x = input()
    if not penguins.get(x):
        penguins[x] = 1
    else:
        penguins[x] += 1

mark = ''
_max = 0

for i in penguins.keys():
    if _max < penguins[i]:
        _max = penguins[i]
        mark = i

print(mark)