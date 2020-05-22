# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC13/BLUE_L13P07

t = int(input())
space = input()

for test in range(t):
    _sum = 0
    d = {}

    while True:
        try:
            x = input()

            if x == '' or x == ' ':
                break

            _sum += 1

            if not d.get(x):
                d[x] = 1
            else:
                d[x] += 1
        except:
            break
    
    trees = []

    for i in d.keys():
        d[i] = (d[i]/_sum) * 100
        trees.append((i, d[i]))
    
    trees.sort()
    for i in trees:
        print(i[0], '%.4f' % i[1])
    if test != t-1:
        print()